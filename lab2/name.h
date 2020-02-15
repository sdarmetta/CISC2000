//name.h
//
//Salvatore D'Armetta
//10/16/2016
//
//This header file includes all date members for the class name 
//and constructors/methods to provide the student class 
//the name of a student.
//

#include<iostream>
using namespace std;

class Name{

public:

	//Default constructor and constructor that takes three arguments
	Name();
	Name(string, char, string);

	//input method to take external user input for a students name
	void inputName();

	//display method to show contents of the class
	void display();

	//accessor methods for each data member
	string getFirst();
	string getLast();
	char getMiddle();	

private:

	string fname, lname;
	char mi;

};
