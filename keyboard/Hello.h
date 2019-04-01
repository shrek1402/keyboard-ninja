#pragma once
class Hello {
private:
    LITC objLITC;
    std::vector<COORD> position;
    std::vector<std::string> vStr;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

public:
    Hello();
    void SetWelcomeX();
    void SetWelcomeY();
    void SetStringVec();
    void PrintHello();
    ~Hello();
};
