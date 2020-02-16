/*customer.cpp
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * class definition for the customer class with
 * constructors, input, display methods and accessor
 * methods
 */


#include "customer.h"

//default constructor
Customer::Customer(){

	fname = "John";
	lname = "Doe";
	middle = 'M';
	city = "Bronx";
	street = "154";
        house = "1041";
	zip = "11101";
	state = "NY";
}

//custom constructor
Customer::Customer(string fn, char mi, string ln, string c, string sta, string str, string z, string h){

	fname = fn;
	middle = mi;
	lname = ln;
	city = c;
	state = sta;
	street = str;
	zip = z;
	house = h;
}

//input method
void Customer::input(){

	cout << "Input first name, last name, and middle initial: ";
	cin >> fname >> lname >> middle;

	cout << "Input city, state, and zip code: ";
	cin >> city >> state >> zip;

	cout << "Input street address and house number: ";
	cin >> street >> house;

}

//display method
void Customer::display(){

	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Middle Initial: " << middle << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl; 
	cout << "Zip Code: " << zip << endl;

	cout << "Street: " << street << endl;
	cout << "House Number: " << house << endl;
}

//mutator methods
void Customer::setFirst(string f){

	fname = f;
}

void Customer::setLast(string l){

	lname = l;
}

void Customer::setMiddle(char m){

	middle = m;
}

void Customer::setCity(string c){

	city = c;
}

void Customer::setState(string s){

	state = s;
}

void Customer::setZip(string z){

	zip = z;
}

void Customer::setStreet(string str){

	street = str;
}

void Customer::setHouse(string h){

	house = h;
}

//accessor methods
string Customer::getFirst() const{

	return(fname);
}

string Customer::getLast() const{

	return(lname);
}

char Customer::getMiddle() const{

	return(middle);
}

string Customer::getCity() const{

	return(city);
}

string Customer::getState() const{

	return(state);
}

string Customer::getZip() const{

	return(zip);
}

string Customer::getStreet() const{

	return(street);
}

string Customer::getHouse() const{

	return(house);
}





