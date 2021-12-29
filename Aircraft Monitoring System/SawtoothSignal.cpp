#include "SawtoothSignal.h"
using namespace Project2;

SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period)
    : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {}

double SawtoothSignal::getVoltageAtTime(Time t) const
{
    // get period seconds
    int p = getPeriod().getTotalTimeAsSeconds();
    // get current time
    double curTime = t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds();
    // get max - min
    double offset = getMaxVoltage() - getMinVoltage();

    return getVoltageOffset() + getMinVoltage() + fmod(curTime * offset / p, offset);
}