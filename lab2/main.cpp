#include "BMI.h"
#include <fstream>

using namespace std;

int main(){
        BMI bmi;

        float height,weight,BMI;

        ifstream inFile("file.in",ios::in);
        ofstream outFile("file.out",ios::out);
        if(!inFile){
                cerr << "Failed opening" << endl;
                exit(1);
        }
        if(!outFile){
                cerr << "Failed opening" << endl;
                exit(1);
        }

        while(inFile >> height >> weight){
                outFile << bmi.outBMI(height,weight) ;
                outFile << " " << bmi.outCategory() << endl;
        }
        return 0;
}


