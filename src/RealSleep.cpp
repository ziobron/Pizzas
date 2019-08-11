#include "RealSleep.hpp"


void RealSleep::sleep_for(minutes sleepTime) {
    std::this_thread::sleep_for(sleepTime);
}
