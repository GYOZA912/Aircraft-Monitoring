#pragma once

#include "Signal.h"
#include "DataRecorder.h"

namespace Project2
{
    class Sensor
    {
    private:
        string name;
        Signal &source;

    public:
        Sensor(string name, Signal &source);
        void takeReading(Time t, DataRecorder &recorder);

    protected:
        virtual string getUnits() const = 0;
        string getName() const;
        const Signal &getSource() const;
    };
}