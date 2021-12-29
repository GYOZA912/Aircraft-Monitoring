#pragma once

#include "Signal.h"

namespace Project2
{
    class ConstantSignal : public Signal
    {
    public:
        ConstantSignal(double voltageOffset, Time timeOffset);
        double getVoltageAtTime(Time t) const;
    };
}