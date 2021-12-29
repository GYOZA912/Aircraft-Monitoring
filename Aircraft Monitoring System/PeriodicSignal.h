#pragma once

#include "Signal.h"

namespace Project2
{
    class PeriodicSignal : public Signal
    {
    private:
        double minVoltage;
        double maxVoltage;
        Time period;

    public:
        PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);

    protected:
        double getMinVoltage() const;
        double getMaxVoltage() const;
        Time getPeriod() const;
    };
}