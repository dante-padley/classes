#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include "person.cpp"
using namespace std;

//-----
//readData now accepts the address of a vector and assigns values
//to vector members with emplace_back
//-----
int readData(vector<Person> &employees){
    ifstream fs;
    fs.open("input.txt");
    while(!fs.eof()){
        string fName, lName;
        float rate, hours;

        fs >> fName >> lName >> rate >> hours;

        employees.emplace_back(fName, lName, rate, hours);
    }
    fs.close();
    return employees.size();
}

//-----
//writeData now accepts the vector address
//-----
void writeData(vector<Person> &employees, int size){
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
    //vector declaration
    vector<Person> employees;
    
    //readData, reads data to employees in vector and returns vector size
    int vectSize = readData(employees);
    //writeData, no changes within the function itself
    writeData(employees, vectSize);
    
}