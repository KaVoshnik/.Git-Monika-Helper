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
    std::string P_name;
    int old = 19;
private:


Helper(std::string _P_name, std::string _H_name, int _old) :
        P_name(_P_name), H_name(_H_name), old(_old) {}
};

void printTable(vector<Helper>& people) {
    cout << left << setw(15) << "Name" << setw(20) << "Second Name" << setw(5) << "Age" << setw(5) << "ID"
        << setw(10) << "Parent ID" << setw(20) << "Children IDs" << "job" << endl;
               
                 for (auto& person : people) {
        string children_ids = "";
        for (auto& child : person.children) {
            children_ids += to_string(child.id) + " ";
    }
        cout << left << setw(15) << Helper.P_name << setw(20) << Helper.H_name << setw(5) << Helper.age << endl;
    }
}

int main() {

    time_t rawtime;
    time ( &rawtime );

    std::cin >> Helper.P_name;
    std::cin >> Helper.P_name;

    std::cout << "Hi i am a " << Helper.name << 
    std::cout << "Time: " <<  ctime (&rawtime);
    
    std::cout << "Code execution" << std::endl;

    WinExec("C:\\osu!", 1);
    return 0;
}