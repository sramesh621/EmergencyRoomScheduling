#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
  if(argc > 2)
  {

  }
  while(true)
  {
      string patientLine = "";
      istringstream patientLineReader(patientLine);
      patientLineReader.setdelimiter('\t');
      string patientName = "";
    int secondsToLive = -1;
    int treatmentTime = -1;
      patientLineReader >> patientName;
    patientLineReader >> secondsToLive;
    patient
    }
  return 0;
}
