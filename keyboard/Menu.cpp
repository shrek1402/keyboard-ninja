#include "pch.h"


Menu::Menu()
{
    ShowMenu(_nMenu);

    _nMenu = _getch();
}



void Menu::GetPunctsMenu(int _nMenu)
{
    _objOpenFile.Open("PunctsMenu.txt");

	switch (_nMenu) {
    //case 1:
		
    default:
        break;
    }
}

void Menu::SetMenu(int _nMenu)
{

}

void Menu::ShowMenu(int nMenu)
{
    switch (nMenu) {
    case 0:
        _objOpenFile.Open("MainMenu.txt");

    default:
        return;
    }
    //_objOpenFile.Open("");
}

Menu::~Menu()
{
}
