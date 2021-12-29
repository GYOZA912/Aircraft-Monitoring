#include "MonitoringSystem.h"
using namespace Project2;

MonitoringSystem::MonitoringSystem(ostream &os)
    : recorder(DataRecorder(os)) {}

void MonitoringSystem::addSensor(Sensor *s)
{
    sensors.push_back(s);
}

void MonitoringSystem::takeReading(Time t)
{
    for (int i = 0; i < (int)sensors.size(); i++)
        sensors[i]->takeReading(t, recorder);
}