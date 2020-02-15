/*phone.h
 *
 * Salvatore D'Armetta
 * 10/20/2016
 *
 * phone header file including all constructors/methods
 * to initialize data members, as well as the
 * data members for a student's home/cell information
 *
 */


#include<iostream>
using namespace std;

class Phone{

public: 

	//default constructor and constructor to initialize phone information with specific arguments
	Phone();
	Phone(int, int, int, int);

	//input method to take external user input on phone information
	void inputPhone();

	//display method to display contents of the phone class
	void displayPhone();
	
	//mutator methods to ensure integrity of data members
	bool setArea(int);
	bool setExchange(int);
	bool setLine(int);	
	
	//accessor methods for each data member
	int getArea();
	int getExchange();
	int getLine();	



private:

	int areaCode, exchange, line;
	const int texts;

};
