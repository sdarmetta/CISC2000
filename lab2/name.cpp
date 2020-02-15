//name.cpp
//
//Salvatore D'Armetta
//10/16/2016
//
//Source file for name.h including definitions for all
//constructors/methods of the class
//

#include "name.h"

//Default constructor
Name::Name(){

	fname = "Jane";
	lname = "Doe";
	mi = 'R';
}

//Constructor taking in three arguments, first name, middle initial, last name
Name::Name(string first, char middle, string last){
	
	fname = first;
	mi = middle;
	lname = last;
}

//display method, displays full name
void Name::display(){

	cout << fname << '/' << mi << '/' << lname << endl;

}

//input method, takes external user input for first, last name and middle initial
void Name::inputName(){

	cout << "Input first, last, and middle initial: ";
	cin >> fname >> lname >> mi;
}

//Accessor methods for each data member
string Name::getFirst(){

	return(fname);
}

string Name::getLast(){

	return(lname);
}

char Name::getMiddle(){

	return(mi);
}









