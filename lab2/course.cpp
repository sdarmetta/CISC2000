/*course.cpp
 *
 * Salvatore D'Armetta
 * 10/18/2016
 *
 * source file for the class Course containing all constructor 
 * and method definitions to initialize data members
 * as well as access them, display them, and input them.
 *
 */

#include "course.h"

//Default constructor setting data members to default values
Course::Course(){

	cname = "Biology";
	cid = "10135";
	credits = 4;
	instructor = "Harkins";
	grade = "A";
}

//Constructor that takes in arguments
Course::Course(string cn, string cd, string professor, int creds, string gr){

	cname = cn;
	cid = cd;
	instructor = professor;
	credits = creds;
	grade = gr;
}

//input method to take external user input for student course information
void Course::inputCourse(){

	string gr = " "; 
	int creds = 0;

	cout << "Enter Course Name: ";
	cin >> cname;
	
	cout << "Enter Course ID: ";
	cin >> cid;

	do{											/*loop to ensure course
												  credits are between
												  3 and 4
												*/
		if(!creds)
			cout << "Enter Course Credits: ";
		else
			cout << creds << " is an invalid amount of credits, re-enter: ";
	
		cin >> creds;
	} while(!setCredits(creds));

	cout << "Enter Course Instructor: ";							
	cin >> instructor;

	do{											/*loop to ensure course
												  grade is correct
												  lettering
												*/
		if(gr == " ")
			cout << "Enter Course Grade: ";
		else
			cout << gr << " is an invalid grade, re-enter: ";

		cin >> gr;
	} while(!setGrade(gr));

}

//display method, displays contents of the course class
void Course::display(){

	cout << "Course Name: " << cname << endl;
	cout <<  "Course ID: " << cid << endl;
	cout << "Course Credits: " << credits << endl;
	cout << "Course Instructor: " << instructor << endl;
	cout << "Course Grade: " << grade << endl;
}

//mutator methods to ensure integrity of grade and credits values
bool Course::setGrade(string g){

	bool retstat = true;

	if((g != "A") && (g != "A-") && (g != "B+") && (g != "B") && (g != "B-") && 
		(g != "C+") && (g != "C") && (g != "C-") && (g != "D+") && 
		(g != "D") && (g != "D-") && (g != "F") && (g != "W"))
		retstat = false;
	else	
		Course::grade = g;

	return(retstat);
}

bool Course::setCredits(int c){

	bool restat = true;

	if(c < 3 || c > 4)
		restat = false;
	else
		Course::credits = c;

	return(restat);
}

//accessor methods to allow access to data members
string Course::getCname(){

	return(cname);
}

string Course::getCid(){

	return(cid);
}

int Course::getCredits(){

	return(credits);
}

string Course::getInstructor(){

	return(instructor);
}

string Course::getGrade(){

	return(grade);
}











