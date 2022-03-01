#pragma once
#include "degree.h"
#include <iostream>

using namespace std;

class Student {
	/*		constructor and destructor		*/
public:
	Student();//did need a constructor after all!
	Student(string studentID, string firstName, string lastName, string email, int age, int daysLeft[], DegreeProgram degreeProgram);
	~Student();


	/*		Getters and Setters		*/

	//setters

	void setID(string ID);
	void setFirstName(string fname);
	void setLastName(string lname);
	void setEmail(string E);
	void setAge(int A);
	void setDaysLeft(int DaysLeft[]);//might not work -- actually did work :)
	void setDegree(DegreeProgram DP);
	
	//getters

	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int getDaysLeft();
	DegreeProgram getDegreeProgram();

	//experiment
	int avg();


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