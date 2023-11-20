#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>


class monika
{
public:
    std::string name = "monika";
    int old = 19;
private:

};

int main(){

    std::cout << "hello world" << std::endl;
    
    WinExec("C:\\osu!\\osu!.exe", 1);
    return 0;

}