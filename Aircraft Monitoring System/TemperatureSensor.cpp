#include "TemperatureSensor.h"
using namespace Project2;

TemperatureSensor::TemperatureSensor(string name, Signal &source)
    : Sensor(name, source) {}

string TemperatureSensor::getUnits() const
{
    return "Degrees Celsius";
}