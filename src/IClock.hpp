#pragma once
#include <chrono>

using minutes = std::chrono::seconds;

struct IClock
{
    virtual ~IClock() {}
    virtual void waitFor(minutes) = 0;
};
