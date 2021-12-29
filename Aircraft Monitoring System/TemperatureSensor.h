#pragma once

#include "Sensor.h"

namespace Project2
{
    class TemperatureSensor : public Sensor
    {
    public:
        TemperatureSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}