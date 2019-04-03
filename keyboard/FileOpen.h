#pragma once
class FileOpen {
private:
    std::string _nameFile;
    std::ifstream _fPunctsMenu;
    std::vector<std::string> _vPuncts;
    std::vector<COORD> _vPositions;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    LITC _objLITC;

public:
    FileOpen();
    void Open(std::string);
    void SetPositionX();
    void SetPositionY(int position);
    void PrintMenu();
    ~FileOpen();
};
