#include "pch.h"
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Keyboard ninja v 1.0 beta\n";
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 50;
    position.Y = 10;

    for (char i = 'a'; i < 'z'; i++) {
        SetConsoleCursorPosition(hConsole, position);
        cout << setw(3) << i;
        Sleep(rand() % 400 + 50);
    }
}
