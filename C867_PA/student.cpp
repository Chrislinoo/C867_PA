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
	for (int i = 0; i < 3; i++) this->daysLeft[i] = 0;
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysLeft[], DegreeProgram degreeProgram)
{
	this->studentID = studentID; this->firstName = firstName; this->lastName = lastName; this->email = email;
	this->age = age;
	for (int i = 0; i < 3; i++;) this->daysLeft[i] = daysLeft[i];
	this->degreeProgram = degreeProgram;
}

Student::~Student()
{
	//think i leave it in blank 
}
	
	/*		setters		*/

void Student::setID(string ID){
	ID = studentID
}

void Student::setFirstName(string fname){
	fname = firstName
}

void Student::setLastName(string lname){
	lname = lastName
}

void Student::setEmail(string E){
	E = email
}

void Student::setAge(int A){
	A = age
}

void Student::setDaysLeft(int DL [3]){//might not be right
	for (int i = 0; i < 3; i++) DL = daysLeft;
}

void Student::setDegree(DegreeProgram DP){
	DP = degreeProgram
}

string Student::getID()
{
	return string(studentID);
}

string Student::getFirstName()
{
	return string(firstName);
}

string Student::getLastName()
{
	return string(lastName);
}

string Student::getEmail()
{
	return string(email);
}

int Student::getAge()
{
	return age;
}

int Student::getDaysLeft()
{
	return DL;//might not be right
}

DegreeProgram Student::getDegreeProgram()
{
	return DegreeProgram();
}

void Student::print(){
	cout << getID() << '/t' << getFirstName() << '/t' << getLastName << '/t' << getEmail << '/t';
	cout << getAge << '/t' << getDaysLeft()[0] << "," << getDaysLeft()[1] << "," << getDaysLeft()[2] << '/t';
	cout << getDegreeProgram(degreeProgram) << endl;
}

