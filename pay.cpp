#include <fstream>
#include <string>
#include <iostream>
#include "person.cpp"
using namespace std;


int readData(Person employees[], int size){
    ifstream fs;
    fs.open("input.txt");

    int i = 0;
    while(!fs.eof()){
        string fName, lName;
        float rate, hours;

        fs >> fName >> lName >> rate >> hours;

        employees[i].setFirstName(fName);
        employees[i].setLastName(lName);
        employees[i].setPayRate(rate);
        employees[i].setHoursWorked(hours);
        i++;
    }
    fs.close();
    return i;
}


void writeData(Person employees[], int size){
    ofstream fs;
    fs.open("output.txt");

    for (int k = 0; k < size; k++){

        string name = employees[k].fullName();
        float total = employees[k].totalPay();

        fs << name << " " << total << endl;
       
    }
    fs.close();
}


int main(){
    int size = 20;
    Person employees [size];

    int arrSize = readData(employees, size);
    writeData(employees, arrSize);
    
}