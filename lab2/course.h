/*course.h
 *
 * Salvatore D'Armetta
 * 10/18/2016
 *
 * This header file contains the constructors, methods, 
 * and data members for the class Course to determine
 * a students course attributes, including grade received.
 *
 */

#include<iostream>
using namespace std;

class Course{

public:

	//Default constructor and constructor to initialize object using 5 arguments
	Course();
	Course(string, string, string, int, string);
	
	//Input method to take external user input on student course information
	void inputCourse();

	//display method to display contents of a students course attributes
	void display();

	//mutator methods to ensure user input on grade and credits is correct
	bool setGrade(string);
	bool setCredits(int);
			
	//Accessor methods to access data members
	string getCname();
	string getCid();
	string getInstructor();
	int getCredits();
	string getGrade();

private:

	string cname, cid, instructor, grade;
	int credits;
};
