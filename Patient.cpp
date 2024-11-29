#include "Patient.h"
using namespace std;

Patient::Patient()
{
    name = "";
    treatmentWindow = 0;
    secondsToTreat = 0;
}

const string& Patient::getName()
{
    return name;
}

void Patient::setName(const string& newName)
{
    name = newName;
}

const int Patient::getSecondsToTreat()
{
    return secondsToTreat;
}

void Patient::setSecondsToTreat(const int newSecondsToTreat)
{
    secondsToTreat = newSecondsToTreat;
}

const int Patient::getTreatmentWindow()
{
    return treatmentWindow;
}

void Patient::setTreatmentWindow(const int newTreatmentWindow)
{
    treatmentWindow = newTreatmentWindow;
}
