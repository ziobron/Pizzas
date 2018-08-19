#pragma once
#include <gmock/gmock.h>
#include "IClock.hpp"

struct DummyClock : public IClock
{
    void waitFor(minutes){}
};

struct MockClock : public IClock
{
    MOCK_METHOD1(waitFor, void(minutes));
};
