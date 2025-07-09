#include <iostream>
#include "proc.h"

using namespace std;

int main() {
    cout << "HELLO WORLD from C++!" << endl;
    
     auto pids = get_proc();
    std::cout << "Current running processes:\n";
    for (int pid : pids) {
        std::cout << "PID: " << pid << '\n';
    }

    return 0;
}