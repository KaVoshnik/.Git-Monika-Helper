#include "helper.h"
       
int main() {

    std::string nameIn_h;
    std::string nameIn_u;

    std::cout << "Input Helper name: " << std::endl;
    std::cin >> nameIn_h;
    std::cout << "Input User name: " << std::endl;
    std::cin >> nameIn_u;

    Helper info(std::string nameIn_h, std::string nameIn_U, int = 19);

    std::cout << "Hi i am a " << nameIn_h << " i a " << 19 << " old" << std::endl;


    time_t rawtime;
    time ( &rawtime );

    std::cout << "Time: " <<  ctime (&rawtime);

    WinExec("C:\\osu!", 1);

    std::cout << "Code execution" << std::endl;
    return 0;
}