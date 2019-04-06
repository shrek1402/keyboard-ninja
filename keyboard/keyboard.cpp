#include "pch.h"




using namespace std;
int main()
{
    std::cout << "OK!";
    FileOpen mainMenu;
    mainMenu.Open("MainMenu.txt");
    mainMenu.SetPositionX();
    mainMenu.SetPositionY(0);
    mainMenu.PrintMenu();
    mainMenu.~FileOpen();
    int userSelection = _getch();

    return 0;
}
