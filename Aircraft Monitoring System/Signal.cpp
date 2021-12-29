#include "Signal.h"
using namespace Project2;

Signal::Signal(double voltageOffset, Time timeOffset)
    : voltageOffset(voltageOffset), timeOffset(timeOffset) {}

double Signal::getVoltageOffset() const
{
    return voltageOffset;
}

Time Signal::getTimeOffset() const
{
    return timeOffset;
}