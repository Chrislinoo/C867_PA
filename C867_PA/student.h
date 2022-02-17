#pragma once
#include "degree.h"

class Student {
	/*		constructor and destructor		*/
public:
	//Student();//created the definition in student.cpp
	Student(string studentID, string firstName, string lastName, string email, int age, int daysLeft[], DegreeProgram degreeProgram);
	~Student();


	/*		Getters and Setters		*/

	//setters

	void setID(string ID);
	void setFirstName(string fname);
	void setLastName(string lname);
	void setEmail(string E);
	void setAge(int A);
	void setDaysLeft(int DaysLeft[3]);//might not work
	void setDegree(DegreeProgram DP);
	
	//getters

	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int getDaysLeft();//might not work
	DegreeProgram getDegreeProgram();


	void print();//spits out
	

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysLeft[3];
	DegreeProgram degreeProgram;
};