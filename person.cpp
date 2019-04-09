//Luccio Padley
//Section 3

#include "person.h"
#include <string>

Person::Person(string fName, string lName, float rate, float hours)
{
    Person::setFirstName(fName);
    Person::setLastName(lName);
    Person::setHoursWorked(hours);
    Person::setPayRate(rate);
}

string Person::getFirstName() {
    return firstName;
}
string Person::getLastName(){
    return lastName;
}
float Person::getPayRate(){
    return payRate;
}
float Person::getHoursWorked(){
    return hoursWorked;
}
float Person::totalPay(){
    float totalAmt = payRate * hoursWorked;
    return totalAmt;
}
string Person::fullName(){
    string fullName = firstName + " " + lastName;
    return fullName;
}
void Person::setLastName(string lName){
    lastName = lName;
}
void Person::setFirstName(string fName){
    firstName = fName;
}
void Person::setPayRate(float rate){
    payRate = rate;
}
void Person::setHoursWorked(float hours){
    hoursWorked = hours;
}