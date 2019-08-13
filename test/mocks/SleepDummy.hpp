#pragma once

#include "../../src/Sleep.hpp"

struct SleepDummy : public Sleep
{
    void sleep_for(minutes m) override;
};