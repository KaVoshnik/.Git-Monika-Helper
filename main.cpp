#include "helper.h"
       


void Helper::RunProgs() {
    WinExec("C:\\osu!", 1);
}

void Helper::Time() {
    time_t rawtime;
    time ( &rawtime );

    std::cout << "Time: " <<  ctime (&rawtime);
}

void Helper::IfRun() {

    if (HelperRun == 1)
    std::cout << "Helper is run" << std::endl;
    else 
    throw std::runtime_error("Runtime Error");
        
}

int main() {
   
    return HelperRun;
    Helper.IfRun
    
    Helper.Time();
    Helper.RunProgs();

    return 0;
}