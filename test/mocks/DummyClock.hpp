#pragma once
#include "IClock.hpp"

struct DummyClock : public IClock
{
    void waitFor(minutes m) {}
};
