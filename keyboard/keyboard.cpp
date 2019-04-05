#include "pch.h"

using namespace std;

int main()
{
    FileOpen mainMenu;
    mainMenu.Open("keyboard/MainMenu.txt");
    mainMenu.SetPositionX();
    mainMenu.SetPositionY(0);
    mainMenu.PrintMenu();
    mainMenu.~FileOpen();

    int userSelection = 0; // = _getch();

    while (userSelection) {
        FileOpen menu;
    }
}
