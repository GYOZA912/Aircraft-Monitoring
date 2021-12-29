#pragma once

#include "Sensor.h"

namespace Project2
{
    class AngularSensor : public Sensor
    {
    public:
        AngularSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}