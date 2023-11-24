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
private:


Helper(std::string _U_name, std::string _H_name, int _old) :
        U_name(_U_name), H_name(_H_name), old(_old) {}
};
       

int main() {

    std::string nameIn_h;
    std::string nameIn_u;

    std::cout << "Input Helper name: " << std::endl;
    std::cin >> nameIn_h;
    std::cout << "Input User name: " << std::endl;
    std::cin >> nameIn_u;

    Helper info(std::string nameIn_h, std::string nameIn_U, int = 19);

    time_t rawtime;
    time ( &rawtime );

    std::cout << "Hi i am a " << Helper.H_name << " i a " << Helper.old << " old" << std::endl;
    std::cout << "Time: " <<  ctime (&rawtime);
    
    std::cout << "Code execution" << std::endl;

    WinExec("C:\\osu!", 1);
    return 0;
}