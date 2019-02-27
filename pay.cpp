#include "person.cpp"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


void readData(Person employees[], int size){
    fstream fs;
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
}


void writeData(Person employees[], int size){
    fstream fs;
    fs.open("output.txt");

    for (int i; i < size; i++){
        string name = employee[i].fullName();
        cout << name << endl;
    }
    fs.close();
}


int main(){
    int size = 20;
    Person employees [size];

    readData(employees, size);
    writeData(employees, size);
    
}