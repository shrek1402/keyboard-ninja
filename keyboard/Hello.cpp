#include "pch.h"

Hello::Hello()
{
    Hello::SetWelcomeX();
    Hello::SetWelcomeY();
    Hello::SetStringVec();
    Hello::PrintHello();
}

void Hello::SetWelcomeX()
{
    std::ifstream welcome("welcome.txt", std::ios_base::in);
    if (!welcome.is_open())
        std::cout << "File not open :( \n";

    std::string sTemp;

    while (std::getline(welcome, sTemp)) {
        COORD cTemp;
        cTemp.X = objLITC.GetPosition(sTemp);
        cTemp.Y = sqrt(-1);
        position.push_back(cTemp);
    }
    welcome.close();
}

void Hello::SetWelcomeY()
{
    int firstLine;
    firstLine = 15 - position.size() / 2;
    for (size_t i = 0; i < position.size() - 1; i++) {
        position.at(i).Y = firstLine + i;
    }
}

void Hello::SetStringVec()
{
    std::ifstream welcome("welcome.txt", std::ios_base::in);
    if (!welcome.is_open())
        std::cout << "File not open :( \n";

    std::string sTemp;

    for (size_t i = 0; std::getline(welcome, sTemp); i++) {
        vStr.push_back(sTemp);
	}
    welcome.close();
}

void Hello::PrintHello()
{
    for (size_t i = 0; i < position.size() - 1; i++) {
        SetConsoleCursorPosition(hConsole, position[i]);
        std::cout << vStr[i];
    }
}

Hello::~Hello()
{
}
