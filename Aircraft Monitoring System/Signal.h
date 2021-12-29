#pragma once
#include "Time.h"

namespace Project2
{
    class Signal
    {
    private:
        double voltageOffset;
        Time timeOffset;

    public:
        Signal(double voltageOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const = 0;

    protected:
        double getVoltageOffset() const;
        Time getTimeOffset() const;
    };
}