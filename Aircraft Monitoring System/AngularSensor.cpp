#include "AngularSensor.h"

using namespace Project2;

AngularSensor::AngularSensor(string name, Signal &source)
    : Sensor(name, source) {}

string AngularSensor::getUnits() const
{
    return "Radians";
}