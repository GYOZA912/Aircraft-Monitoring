#pragma once
#include <iostream>

using std::ostream;

namespace Project2
{
    class Time
    {
    private:
        int seconds;

    public:
        Time(int hours, int minutes, int seconds);

        int getTotalTimeAsSeconds() const;

        const Time &operator+=(const Time &rhs);

        friend ostream &operator<<(ostream &os, const Time &rhs)
        {
            os << rhs.seconds / 3600 << "h:"
               << (rhs.seconds % 3600) / 60 << "m:"
               << rhs.seconds % 60 << "s";
            return os;
        }
    };
}