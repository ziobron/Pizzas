#pragma once
#include "../src/Sleep.hpp"


class FakeSleep : public Sleep {
public:
    void sleep_for(minutes) override {};
};
