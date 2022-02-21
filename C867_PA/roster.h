#pragma once
#include "student.h"
#include <string>
#include <iostream>

class Roster {

public:



	/*classRosterArray[0] = "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY";
	classRosterArray[1] = "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,20,40,33,NETWORK";
	classRosterArray[2] = "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33SOFTWARE";
	classRosterArray[3] = "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY";
	classRosterArray[4] = "A5,Christopher,Paulino Hernandez,cpaul76@gmail.com,24,30,45,37,SOFTWARE";*/

	Student* classRosterArray[5];//student class array in the roster class with 5 indices to stroe the data in the data table 


	void parse(string row);

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);

	void printAll();

	void printInvalidEmails();

	 void remove(string studentID);

	 void printAverageDaysInCourse(string studentID);

	 void printByDegreeProgram(DegreeProgram degreeProgram);

};