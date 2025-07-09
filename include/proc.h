#ifndef PROC_H
#define PROC_H

#include <vector>

/**
 * @brief The following function get's
 * all processes currently running on the Linux
 * System
 */
std::vector<int> get_proc();

#endif //PROC_H