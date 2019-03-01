#include "person.h"
#include <string>

Person::Person()
{

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