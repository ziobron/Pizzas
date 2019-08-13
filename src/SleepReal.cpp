#include "SleepReal.hpp"
#include <thread>

void SleepReal::sleep_for(minutes m)
{
    std::this_thread::sleep_for(m);
}