#pragma once
#include <chrono>

using minutes = std::chrono::seconds;   // To simulate time flow ;)

struct IClock
{
    virtual void waitFor(minutes m) = 0;
    virtual ~IClock() {}
};
