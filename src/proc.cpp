#include "proc.h"
#include <vector>
#include <filesystem>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>

namespace fs = std::filesystem;

std::vector<int> get_proc() 
{
    std::vector<int> pids;

    for (const auto& entry : fs::directory_iterator("/proc")) 
    {
        std::string filename = entry.path().filename();
        
        if (std::all_of(filename.begin(), filename.end(), ::isdigit)) 
        {
            pids.push_back(std::stoi(filename));
        }
    }

    return pids;
}