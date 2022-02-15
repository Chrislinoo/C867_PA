#include <iostream>
#include <string>
#include "student.h"
using namespace std;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	for (int i = 0; i < dayArray; i++) this->daysLeft[i] = 0;
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysLeft[], DegreeProgram degreeProgram)
{
	this->studentID = studentID; this->firstName = firstName; this->lastName = lastName; this->email = email;
	this->age = age;
	for (int i = 0; i < dayArray; i++;) this->daysLeft[i] = daysLeft[i];
	this->degreeProgram = degreeProgram;
}

Student::~Student()
{
	//think i leave it in blank bc it does nothing
}
