#pragma once
class FileOpen {
private:
    std::string _nameFile;
    std::ifstream _fPunctsMenu;
    std::vector<std::string> _vPuncts;
    std::vector<COORD> _vPositions;
    //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    LITC _objLITC;

public:
    FileOpen();
    //Open file "nameFile". Example: nameFile = "Text.txt".
    void Open(std::string nameFile);
    //Set string's position on absciss.
    //0 - Centr
    //1 - Left
    //2 - Right
    void SetPositionX(); //TODO (1)

    /*
	Ser string's position on ordinat.
	0 - Centr
	1 - Left
	2 - Right
	*/
    void SetPositionY(int position);
    void PrintMenu();
    ~FileOpen();
};
