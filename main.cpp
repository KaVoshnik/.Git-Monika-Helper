#include "helper.h"
       
    int Helper::getRun() {return HelperRun_;}

void Helper::RunProgs() {
    WinExec("d:\\down\\404.gif", 1);
}

void Helper::Time() {
    time_t rawtime;
    time ( &rawtime );

    std::cout << "Time: " <<  ctime (&rawtime);
}
 
void Helper::IfRun(int HelperRun) {

    if (HelperRun == 1){
    std::cout << "Helper is runing" << std::endl;
    std::cout << HelperRun << std::endl;
    }
    else 
    throw std::runtime_error("Runtime Error");
       
}

int main() {
   
    Helper.IfRun();
    
    Helper.Time();
    Helper.RunProgs();

    return 0;
}