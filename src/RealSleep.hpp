#pragma once
#include "Sleep.hpp"
#include <thread>


class RealSleep : public Sleep {
public:
    void sleep_for(minutes) override;
};
