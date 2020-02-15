/*program.h
 *
 * Salvatore D'Armetta
 * 10/16/2016
 *
 * Header file for the program class including information about
 * a students program at Fordham.
 *
 */

#include<iostream>
using namespace std;

class Program{

public:

	//Default constructor and constructor that takes in four arguments
	Program();
	Program(string, string, string, string);

	//input method to take external user input about a student's program
	void inputProgram();

	//display method to display contents of the program class
	void display();

	//mutator methods to ensure integrity of the necessary data members
	bool setCampus(string);
	bool setDegree(string);

	//Accessor methods for each data member
	string getCampus();
	string getDegree();
	string getMajor();
	string getMinor();



private:

	string campus, degree, major, minor;


};

