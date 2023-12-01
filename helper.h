#pragma warning(disable : 4996)

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <iomanip>
#include <Windows.h>



class Helper
{
public:
    std::string H_name;
    std::string U_name;
    int old;
    void Time();
    int getRun();

private:
    void IfRun(int HelperRun);
    int HelperRun_;
    void RunProgs();

};