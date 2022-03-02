#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

void Roster::parse(string row) {/*Parse is used to analyze a string and in this instance we used it to analyze our data string and find/assign the values in between the commas to funnel them into the array set equal to its variable */
	//A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY
	size_t lhs, rhs;
	lhs = 0; rhs = row.find(',', lhs);
	string studentID = row.substr(lhs, rhs - lhs);//lhs(left hand side) and rhs(right hand side) are used as start points for locations in the string row. Setting lhs = 0 makes us start at 'A' and then rhs is the comma ending the targeted value. 

	lhs = rhs + 1; rhs = row.find(',', lhs);
	string firstName = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1; rhs = row.find(',', lhs);
	string lastName = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1; rhs = row.find(',', lhs);
	string emailAddress = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1; rhs = row.find(',', lhs);
	int age = stoi(row.substr(lhs, rhs - lhs));

	lhs = rhs + 1; rhs = row.find(',', lhs);
	int daysInCourse1 = stoi(row.substr(lhs, rhs - lhs));//stoi means string to integer and does literally just that.

	lhs = rhs + 1; rhs = row.find(',', lhs);
	int daysInCourse2 = stoi(row.substr(lhs, rhs - lhs));

	lhs = rhs + 1; rhs = row.find(',', lhs);
	int daysInCourse3 = stoi(row.substr(lhs, rhs - lhs));

	lhs = rhs + 1; rhs = row.find(',', lhs);
	string degree = row.substr(lhs, rhs - lhs);//since degree is part of a enum then we call it a variable degree that we then set equal to different DegreeProgram values

	DegreeProgram degreeprogram = DegreeProgram::SECURITY;//set this as default
	if (degree == "SOFTWARE") degreeprogram = DegreeProgram::SOFTWARE;//then we set diferent values for different instances
	if (degree == "NETWORK") degreeprogram = DegreeProgram::NETWORK;
	//its in quotes here bc we are for the same syntax in the student data and then set equal to the enum value we desire

	this->add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
	int Arcanine[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	for (int i = 0; i < 5; i++) {//itll look for NULL value in the index and then set new student
		if (classRosterArray[i] == NULL) {


			this->classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, Arcanine, degreeprogram);
			break;
		}
	}

}//here int array Arcanine is set to the integers in the string row bc our student constructor is looking for an array

void Roster::printAll() {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != NULL)
		this->classRosterArray[i]->print();
		
	}
}

void Roster::printInvalidEmails() {//Tried to do this but i dont know if im doing it right since my print all is still printing all my info of the same.
	
	bool any = false; 
		for (int i = 0; i < 5; i++) {
			string email = this->classRosterArray[i]->getEmail();
			if ((email.find(" ") != string::npos) || (email.find("@") == string::npos) || (email.find(".") == string::npos)) //dont want spaces
//i do want an @ and ","
			{
				any = true; 
				cout << email << endl;

			}
	}

}

void Roster::remove(string studentID) {//student id already equals A3 bc we set it in main----- "&&" = and
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != NULL && classRosterArray[i]->getID() == studentID) {
			delete classRosterArray[i];
			classRosterArray[i] = NULL;
			return;
		}
	}
	cout << "Student ID: " << studentID << " was not found." << endl;
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getID() == studentID) {
			cout << "Student ID: " << studentID << ", average days in course is: " << classRosterArray[i]->avg();
			cout << endl ;
		}
	}

}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	if (degreeProgram == DegreeProgram::SOFTWARE){
		classRosterArray[2]->print();
		classRosterArray[4]->print();
		return;
	};
	
	if (degreeProgram == DegreeProgram::SECURITY) {
		classRosterArray[0]->print();
		classRosterArray[3]->print();
		return;
	};

	if (degreeProgram == DegreeProgram::NETWORK) {
		classRosterArray[1]->print();
		return;
	};

	
}



/*void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i < 5; i++) {
		//DegreeProgram degree = this->classRosterArray[i]->getDegreeProgram();
		if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		};
	}*/


/*void Roster::printInvalidEmails() {
	
	bool any = false; 
		for (int i = 0; i < 5; i++) {
			string DP = this->classRosterArray[i]->get;
			if ((email.find(" ") != string::npos) || (email.find("@") == string::npos) || (email.find(".") == string::npos)) //dont want spaces
//i do want an @ and ","
			{
				any = true; 
				cout << email << endl;

			}
	}

}*/