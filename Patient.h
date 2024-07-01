#include<string>

class Patient
{
    private:    
        string name = "";
        int treatmentWindow = 0;
        int secondsToTreat = 0;
    public:
        Patient();
        Patient(const Patient& copy);
        const string& getName();
        void setName(const string& newName);
        const Patient& operator=(const Patient& assignTo);
        ~Patient();
};
