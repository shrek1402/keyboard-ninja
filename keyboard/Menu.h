#pragma once
class Menu {
private:
    int _nMenu = 0;
    FileOpen _objOpenFile;

public:
	Menu();

    void GetPunctsMenu(int);
    void SetMenu(int);
    void ShowMenu(int);

    ~Menu();
};
