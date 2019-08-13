#pragma once

#include "Pizza.hpp"

struct Sleep
{
    virtual void sleep_for(minutes m) = 0;
    virtual ~Sleep() = default;
};
