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
    int patientID = -1;
    int secondsToLive = -1;
    int treatmentTime = -1;
      patientLineReader >> patientID;
    patientLineReader >> secondsToLive;
    patientLineReader >> treatmentTime;
    }
  return 0;
}
