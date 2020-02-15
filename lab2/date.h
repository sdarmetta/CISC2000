/*date.h
 *
 * Salvatore D'Armetta
 * 10/16/2016
 *
 * Header file that includes data members for the class date,
 * allowing the student class to access information such as
 * student birthday.
 *
 */

#include<iostream>
using namespace std;

class Date{

	friend bool operator==(int, const Date &);
	friend ostream& operator<<(ostream &, const Date &);
	friend istream& operator>>(istream &, Date &);

public:

	//Default constructor, constructor that takes in three arguments, and copy constructor
	Date();
	Date(int, int, int);
	Date(const Date &);	

	//Destructors
	~Date();


	//Input method to populate data members through external user input
	void inputDate();	

	//Display method to show contents of the name class
	void display();

	//Mutator methods for month, day, and year
	bool setMonth(int);
	bool setDay(int);
	bool setYear(int);

	//operator methods
	bool operator==(const Date &);
	bool operator==(int);
	void operator=(const Date &);

	//Accessor methods for each data member
	int getMonth();
	int getDay();
	int getYear();

private:

	int month, day, year;

};
