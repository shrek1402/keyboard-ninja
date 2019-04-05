#include "pch.h"

FileOpen::FileOpen()
{
}

void FileOpen::Open(std::string nameFile)
{
    _nameFile = nameFile;
    std::ifstream _fPunctsMenu(_nameFile, std::ios_base::in);
    if (!_fPunctsMenu.is_open())
        std::cout << "File " << _nameFile << " not open :( \n";

    std::string sTemp; 
    for (size_t i = 0; std::getline(_fPunctsMenu, sTemp); i++) {
        _vPuncts.push_back(sTemp);
    }
}
void FileOpen::SetPositionX()
{
    std::string sTemp;
	auto lenghtTemp = std::max_element(_vPuncts.begin(), _vPuncts.end(), [](std::string s1, std::string s2){
        return s1.length() > s2.length();
	}); //TODO auto -> std::vector<string>::iterator

	int lenght = std::distance(_vPuncts.begin(), lenghtTemp);

    for (size_t i = 0; i < _vPuncts.size(); i++) {
        COORD cTemp;
        cTemp.X = _objLITC.GetPosition(lenght, 0);
        cTemp.Y = 1; //nan
        _vPositions.push_back(cTemp);
    }
}
void FileOpen::SetPositionY(int position)
{
    int firstLine;

    if (position == 0)
        firstLine = 15 - _vPositions.size() / 2; //TODO break or case
    if (position == 1)
        firstLine = 0;
    if (position == 2)
        firstLine = 29 - _vPositions.size(); // 30?

    for (size_t i = 0; i < _vPositions.size(); i++) {
        _vPositions.at(i).Y = firstLine + i;
    }
}
void FileOpen::PrintMenu()
{
    _fPunctsMenu.seekg(0, std::ios::beg);

    for (size_t i = 0; i < _vPuncts.size(); i++) {
        _objLITC.SetConsoleCursorPosition(_vPositions[i]);
        std::cout << _vPuncts[i];
    }
}

FileOpen::~FileOpen()
{
    _fPunctsMenu.close();
    _vPositions.clear();
    _vPuncts.clear();
}
