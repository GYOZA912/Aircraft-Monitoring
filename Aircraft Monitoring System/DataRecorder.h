#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using std::endl;
using std::fixed;
using std::ostream;
using std::setprecision;
using std::string;

namespace Project2
{
    class DataRecorder
    {
    private:
        ostream &os;

    public:
        DataRecorder(ostream &os);
        void log(Time timestamp, string sensorName, double sensorVoltage, string sensorUnits);
    };
}