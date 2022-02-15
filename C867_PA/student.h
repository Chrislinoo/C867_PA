#pragma once
#include "degree.h"

class Student {
	/*		constructor and destructor		*/
public:
	//Student();//created the definition in student.cpp
	Student(string studentID, string firstName, string lastName, string email, int age, int daysLeft[], DegreeProgram degreeProgram);
	~Student();

	const static int dayArray = 3;//needed to define the array

	/*		Getters and Setters		*/

	//setters

	string setID(string);


private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysLeft[dayArray];
	DegreeProgram degreeProgram;
};