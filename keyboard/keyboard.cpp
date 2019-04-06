#include "pch.h"

#ifndef __linux  
#include <conio.h>
#else  
#include <unistd.h>
#include <termios.h>
int _getch()
{
    int ch;
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#endif

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
