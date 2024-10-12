#include<vector>
#include<string>
#include "Patient.h"

class PatientScheduler
{
private:
    vector<Patient> patientList;
public:
    PatientScheduler();
    PatientScheduler(const PatientScheduler& original);
    const PatientScheduler& operator=(const& PatientScheduler copy);
    ~PatientScheduler();
};
