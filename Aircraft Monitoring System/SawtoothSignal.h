#pragma once

#include "PeriodicSignal.h"
#include <cmath>
using std::fmod;

namespace Project2
{
    class SawtoothSignal : public PeriodicSignal
    {
    public:
        SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const;
    };
}