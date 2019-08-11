#pragma once
#include<chrono>


using minutes = std::chrono::seconds;

class Sleep {
public:
    virtual void sleep_for(minutes) = 0;
    virtual ~Sleep() = default;
};
