#pragma once

#include "Sensor.h"

namespace Project2
{
    class PressureSensor : public Sensor
    {
    public:
        PressureSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}