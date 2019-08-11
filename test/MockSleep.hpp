#pragma once
#include <gtest/gtest.h>
#include "../src/Sleep.hpp"


class MockSleep : public Sleep {
public:
    MOCK_METHOD1(sleep_for, void(minutes));
};
