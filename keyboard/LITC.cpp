#include "pch.h"

LITC::LITC()
{
}


int LITC::GetPosition(int str, int position)
{
    if (position == 0)
        return 60 - str / 2;
    if (position == 1)
        return 0;
    if (position == 2)
        return 109 - str - 1; //120 ?
}

void LITC::SetConsoleCursorPosition(COORD coord) //unsigned
{
    std::cout << "\033["+std::to_string(coord.X)+";"+std::to_string(coord.Y)+"f";
    std::cout << "\033[5;5H";
}

LITC::~LITC()
{
}
