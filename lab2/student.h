/* student.h
 *
 * Salvatore D'Armetta
 * 10/12/2016
 *
 * Header file that contains method and constructor declarations for class 
 * Student. Includes objects of the classes name, date, and program
 * and other data members for student information, such as 
 * gender and student ID.
 */

#include<iostream>
#include "date.h"
#include "name.h"
#include "program.h"
#include "course.h"
#include "phone.h"
using namespace std;

class Student{

public:

	/*defualt constructor for student information, and constructor that 
 	 *takes 5 arguments, including objects of other classes
	 */ 
	Student();
	Student(string, Name, Date, char, Program, Course[], Phone, Phone);
	
	void display();			//display method, displays student information 

	void input();			//input method to take external user input

	//mutator methods to ensure gender is correct
	bool setGender(char);
	
	//methods to calculate studentsGPA based on grades received in all completed courses and to calculcate number of credits based on completes courses
	float calculateGPA();
	int calculateCreditsEarned();	

private:

	//student information data members
	string id;
	Name name;
	Date dob;
	Program program;
	Course completedCourses[10];
	Phone cellPhone;
	Phone homePhone;
	char preferredPhone;
	static const int numCourses = 10; 
	int creditsEarned;
	float gpa;
	char gender;
};

