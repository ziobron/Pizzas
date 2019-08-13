#pragma once

#include "Sleep.hpp"

struct SleepReal : public Sleep
{
    void sleep_for(minutes m) override;
};
