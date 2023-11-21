#pragma warning(disable : 4996)

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <Windows.h>


class monika
{
public:
    std::string name = "monika";
    int old = 19;
private:

};

int main(){

    time_t rawtime;
    time ( &rawtime );
    
    std::cout << "Time: " <<  ctime (&rawtime);

    std::cout << "code execution" << std::endl;

    //WinExec("C:\\osu!\\osu!.exe", 1);
    //return 0;
}