//Alexis Vergara
#include "person.h"
#include <iostream>

Person::Person(){}
string Person::getFirstName() {
    return firstName;
}
string Person::getLastName(){
	return lastName;
}

string Person::fullName(){
	return firstName + " " + lastName;
}
float Person::getPayRate(){
	return payRate;
}
float Person::getHoursWorked(){
	return hoursWorked;
}
float Person::totalPay() {
	return (payRate * hoursWorked);
}

