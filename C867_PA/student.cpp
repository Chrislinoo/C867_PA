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
	for (int i = 0; i < 3; i++) this->daysLeft[i] = daysLeft[i];
	this->degreeProgram = degreeProgram;
}

Student::~Student()
{
	//think i leave it in blank 
}
	
	/*		setters		*/

void Student::setID(string ID) {

	this->studentID = ID;//variables on the right side
}

void Student::setFirstName(string fname){
	
	this->firstName = fname;
}

void Student::setLastName(string lname){
	
	this->lastName = lname;
}

void Student::setEmail(string E){
	
	this->email = E;
}

void Student::setAge(int A){
	
	this->age = A;
}

void Student::setDaysLeft(int DL []){//might not be right
	
	for (int i = 0; i < 3; i++) this->daysLeft[i] = DL[i];
	
}

void Student::setDegree(DegreeProgram DP){

	this->degreeProgram = DP;
}

string Student::getID()
{
	return studentID;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getEmail()
{
	return email;
}

int Student::getAge()
{
	return age;
}

int Student::getDaysLeft()
{
	return daysLeft[0];
	return daysLeft[1];
	return daysLeft[2];
}

DegreeProgram Student::getDegreeProgram()
{
	return DegreeProgram();
}

void Student::print(){

	cout << getID() << '\t' << getFirstName() << '\t' << getLastName() << '\t';
	cout << age << '\t' << "{" << daysLeft[0] << "," << daysLeft[1] << "," << daysLeft[2] << "}" << '\t';
	cout << degreeProgram << endl;// here we can call the return variable or the function call , its the same output anyways. Always remember the () for functions.
	
}

