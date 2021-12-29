#include "PressureSensor.h"
using namespace Project2;

PressureSensor::PressureSensor(string name, Signal &source)
    : Sensor(name, source) {}

string PressureSensor::getUnits() const
{
    return "Pounds per square inch (PSI)";
}