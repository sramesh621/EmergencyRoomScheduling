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
