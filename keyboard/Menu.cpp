#include "pch.h"
#include "Menu.h"


Menu::Menu()
{
}

void Menu::GetPunctsMenu()
{
    std::ifstream fPunctsMenu("PunctsMenu.txt", std::ios_base::in);
    if (!fPunctsMenu.is_open())
        std::cout << "File not open :( \n";

}

void Menu::SetMenu()
{

}

void Menu::ShowMenu()
{
}

Menu::~Menu()
{
}
