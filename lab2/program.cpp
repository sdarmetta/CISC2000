/*program.cpp
 *
 * Salvatore D'Armetta
 * 10/16/2016
 *
 * source file for the program class including all definitions
 * for each constructor/method
 *
 */

#include "program.h"

//Default constructor setting data members to a default
Program::Program(){

	campus = "RH";
	degree = "BS";
	major = "Computer Science";
	minor = "NONE";
}

//constructor that takes in four arguments
Program::Program(string c, string d, string ma, string mi){

	setCampus(c);
	setDegree(d);
	major = ma;
	minor = mi;
}

//display method to display contents of the class Program
void Program::display(){

	cout << campus << '/' << degree << '/' << major << '/' << minor << endl;
}

//input method to take external user input for student program information
void Program::inputProgram(){

	string camp = " ";
	string deg = " ";
	
	do{							//loop to enter correct campus through mutator method

		if(camp == " ")
			cout << "Enter Campus: ";
		else
			cout << camp << " is an invalid campus, re-enter: ";

		cin >> camp;
	} while(!setCampus(camp));

	do{							//loop to enter correct degree through mutator method
		if(deg == " ")
			cout << "Enter Degree: ";
		else
			cout << deg << " is an invalid degree, re-enter: ";

		cin >> deg;
	} while(!setDegree(deg));

	cout << "Enter Major: ";
	cin >> major;

	cout << "Enter Minor: ";
	cin >> minor;

}


//mutator methods
bool Program::setCampus(string c){				//method to ensure campus is either RH, LC, or WC

	bool retstat = true;

	if( c != "RH" && c != "LC" && c != "WC")
		retstat = false;
	else
		Program::campus = c;

	return(retstat);
}


bool Program::setDegree(string d){				//method to ensure degree is either BS or BA

	bool restat = true;

	if( d != "BS" && d != "BA")
		restat = false;
	else
		Program::degree = d;

	return(restat);
}

//Accessor methods
string Program::getCampus(){
	
	return(campus);
}

string Program::getDegree(){

	return(degree);
}

string Program::getMajor(){

	return(major);
}

string Program::getMinor(){

	return(minor);
}






