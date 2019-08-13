#pragma once
#include "gmock/gmock.h"
#include "../../src/Sleep.hpp"

struct SleepMock : public Sleep
{
    MOCK_METHOD1(sleep_for, void(minutes));
};