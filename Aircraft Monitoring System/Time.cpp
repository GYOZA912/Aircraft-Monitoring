#include "Time.h"
using namespace Project2;

Time::Time(int hours, int minutes, int seconds)
    : seconds(3600 * hours + 60 * minutes + seconds) {}

int Time::getTotalTimeAsSeconds() const
{
    return seconds;
}

const Time &Time::operator+=(const Time &rhs)
{
    seconds += rhs.getTotalTimeAsSeconds();
    return *this;
}