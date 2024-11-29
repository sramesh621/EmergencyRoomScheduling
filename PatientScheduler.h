#include<vector>
#include<string>
#include "Patient.h"

class PatientScheduler
{
private:
    vector<Patient> patientList;
public:
    PatientScheduler();
    const Patient& hasPatient(const Patient& patient);
    bool addPatient(const Patient& addMe);
    bool removePatient(const Patient& removeMe);
    PatientScheduler(const PatientScheduler& original);
    const PatientScheduler& operator=(const PatientScheduler& copy);
    ~PatientScheduler();
};
