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
        //psdpjSPJDJPDSJ]]DS\WDPL\ds /ds]DSlLDPS\L
        //s
        //]d[l]
        //sld]ls]dl]slds
    //while (userSelection) {
      //  FileOpen menu;
  //  }
}
