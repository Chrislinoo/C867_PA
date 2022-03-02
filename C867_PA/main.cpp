#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

int main() {
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Christopher,Paulino Hernandez,cpaul76@gmail.com,24,30,45,37,SOFTWARE" }; //This is the data for the roster table in the project
	
	cout << "C867: Scripting & Programming Applications" << endl;
	cout << "Student ID : #006785967" << endl;
	cout << "Language: C++" << endl;
	cout << "Name: Christopher Paulino Hernandez" << endl;
	cout << endl;

	Roster classRoster{};

	cout << "Displaying all students:" << endl;
	
	for (int i = 0; i < 5; i++) {
		classRoster.parse(studentData[i]);
	}

		
	
	classRoster.printAll();

	cout << endl;
	cout << "Displaying invalid emails:" << endl << endl;
	
	classRoster.printInvalidEmails();
	
	cout << endl;

	for (int i = 0; i < 5; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getID());
	}
	cout << endl;

	cout << "Showing students in degree program: SOFTWARE" << endl << endl;
	
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << endl << endl;
	
	
	cout << "Removing A3:" << endl << endl;
	classRoster.remove("A3");

	classRoster.printAll();

	cout << endl;

	cout << "Removing A3 again..." << endl << endl;
	classRoster.remove("A3");
	cout << "DONE.";









}