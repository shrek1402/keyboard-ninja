#pragma once
#include <termios.h>
#include <unistd.h>

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

void SetConsoleCursorPosition(int x, int y)
{
    printf("\033[%d;%dH", YPO + 1, XPos + 1);
}