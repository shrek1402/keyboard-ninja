#include "LITC.h"
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
        return 119 - str; //120 ?
}

LITC::~LITC()
{
}
