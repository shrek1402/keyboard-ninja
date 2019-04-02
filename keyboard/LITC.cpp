#include "pch.h"
#include "LITC.h"


LITC::LITC()
{
}

int LITC::GetPosition(std::string _str)
{
    return 60 - _str.length()/2;
}

LITC::~LITC()
{
}
