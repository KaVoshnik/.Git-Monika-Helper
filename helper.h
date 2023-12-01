#pragma warning(disable : 4996)

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <iomanip>
#include <Windows.h>

   int HelperRun = 1;

class Helper
{
public:
    std::string H_name;
    std::string U_name;
    int old;
    void Time();
    void RunProgs();

private:
    void IfRun();

};