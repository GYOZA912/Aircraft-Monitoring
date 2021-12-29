#include "SineSignal.h"
using namespace Project2;

constexpr double PI = 3.14159265358979323846;

SineSignal::SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period)
    : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {}

double SineSignal::getVoltageAtTime(Time t) const
{
    // get period seconds
    int p = getPeriod().getTotalTimeAsSeconds();
    // get current time
    double curTime = t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds();
    // get max - min
    double offset = getMaxVoltage() - getMinVoltage();

    return getVoltageOffset() + getMinVoltage() + offset / 2 +
           sin(curTime * 2 * PI / p) * offset / 2;
}