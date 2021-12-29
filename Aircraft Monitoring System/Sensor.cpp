#include "Sensor.h"
using namespace Project2;

Sensor::Sensor(string name, Signal &source)
    : name(name), source(source) {}

void Sensor::takeReading(Time t, DataRecorder &recorder)
{
    recorder.log(t, getName(), source.getVoltageAtTime(t), getUnits());
}

string Sensor::getName() const
{
    return name;
}

const Signal &Sensor::getSource() const
{
    return source;
}