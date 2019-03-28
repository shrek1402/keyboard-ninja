#include "pch.h"
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Keyboard ninja v 1.0 beta\n" ;
    COORD position, position1;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 60;
    position.Y = 15;
    position1.X = 0;
    position1.Y = 0;

    int c, result = 0;
    unsigned int search_time = 0;
    

    for (char i = 'a'; i < 'z'; i++) {
        SetConsoleCursorPosition(hConsole, position1);
        std::cout << "Keyboard ninja v 1.0 beta\t\t\t\t\t\t\t\t\t ms:" << search_time <<"   result: " << result;

        SetConsoleCursorPosition(hConsole, position);
        cout << setw(3) << i;
        unsigned int start_time = clock();
        c = _getch();
        unsigned int end_time = clock();
        search_time += end_time - start_time;
        if (c == (int)i)
            result++;
    }

}
