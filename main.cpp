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
    std::string H_name = "monika";
    std::string P_name = "Kavo";
    int old = 19;
private:


Helper(std::string _P_name, std::string _H_name, int _old) :
        P_name(_P_name), H_name(_H_name), old(_old) {}
};
       

int main() {

    time_t rawtime;
    time ( &rawtime );

    std::cout << "Hi i am a " << Helper.H_name << std::endl;
    std::cout << "Time: " <<  ctime (&rawtime);
    
    std::cout << "Code execution" << std::endl;

    WinExec("C:\\osu!", 1);
    return 0;
}