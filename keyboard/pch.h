#ifndef PCH_H
#define PCH_H

//Lib
#include <algorithm>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

//Cross
#ifndef __linux
#include "_win.h"
#else
#include "_linux.h"
#endif

//MyLib
#include "FileOpen.h"
#include "LITC.h"
#include "Structusr.h"

#endif
