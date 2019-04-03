#include "pch.h"

using namespace std;

int main()
{
    FileOpen mainMenu;
    mainMenu.Open("MainMenu.txt");
    mainMenu.SetPositionX();
    mainMenu.SetPositionY(0);
    mainMenu.PrintMenu();
}
