#pragma once
#include "PeriodicSignal.h"
#include <cmath>

using std::sin;

namespace Project2
{
    class SineSignal : public PeriodicSignal
    {
    public:
        SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const;
    };
}