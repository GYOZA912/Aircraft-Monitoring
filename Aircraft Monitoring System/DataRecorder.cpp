#include "DataRecorder.h"

using namespace Project2;

DataRecorder::DataRecorder(ostream &os)
    : os(os) {}

void DataRecorder::log(Time timestamp, string sensorName, double sensorVoltage, string sensorUnits)
{
    os << fixed << setprecision(2) << timestamp << " - " << sensorName << " - " << sensorVoltage << " " << sensorUnits << std::endl;
}