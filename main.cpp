#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    if(argc >= 2)
    {
        string fileName(argv[1]);
        ifstream inputFileStream(fileName);
        int lineNumber = 0;
        while(inputFileStream)
          {
            string inputFileLine = inputFileStream.getline();
            istringstream patientLineReader(inputFileLine);
            int patientID = -1;
            int secondsToLive = -1;
            int treatmentTime = -1;
            patientLineReader >> patientID;
            patientLineReader >> secondsToLive;
            patientLineReader >> treatmentTime
          }
    }
    return 0;
}
