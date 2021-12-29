#pragma once

#include "Sensor.h"

namespace Project2
{
    class VibrationSensor : public Sensor
    {
    public:
        VibrationSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}