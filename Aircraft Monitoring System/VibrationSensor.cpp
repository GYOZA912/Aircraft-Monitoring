#include "VibrationSensor.h"
using namespace Project2;

VibrationSensor::VibrationSensor(string name, Signal &source)
    : Sensor(name, source) {}

string VibrationSensor::getUnits() const
{
    return "Hertz (Hz)";
}