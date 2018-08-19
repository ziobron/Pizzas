#include "Clock.hpp"
#include <thread>

void Clock::waitFor(minutes min)
{
    std::this_thread::sleep_for(min);
}
