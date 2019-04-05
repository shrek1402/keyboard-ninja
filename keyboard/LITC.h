#pragma once
#include <algorithm>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iomanip>

#include <iostream>
#include <string>
#include <vector>
#include "Structusr.h"

 //TODO
//#include "Hello.h"
class LITC {

public:
    LITC();

    //Ust viravnivanie dlya str.
    //0 - centr
    //1 - left
    //2 - rright
    int GetPosition(int, int);

    void SetConsoleCursorPosition(COORD);

    ~LITC();
};
