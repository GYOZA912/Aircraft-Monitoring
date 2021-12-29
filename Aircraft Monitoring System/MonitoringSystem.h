#pragma once
#include <vector>
#include "Time.h"
#include "Sensor.h"
#include "DataRecorder.h"

using std::vector;

namespace Project2
{
    class MonitoringSystem
    {
    private:
        vector<Sensor *> sensors;
        DataRecorder recorder;

    public:
        MonitoringSystem(ostream &os);
        void addSensor(Sensor *s);
        void takeReading(Time t);
    };
}