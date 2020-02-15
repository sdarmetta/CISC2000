/*date.cpp
 *
 * Salvatore D'Armetta
 * 10/16/2016
 *
 * source file for the date class including definitions for
 * constructors/methods.
 *
 */

#include "date.h"

//Default constructor
Date::Date(){

	month = 12;
	day = 25;
	year = 1997;
}

//Constructor taking three arguments
Date::Date(int m, int d, int y){
	
	month = m;
	day = d;
	year = y;
}

//copy constructor
Date::Date(const Date &d){

	month = d.month;
	day = d.day;
	year = d.year;
}


//Destructor
Date::~Date(){

	cout << *this << "is being destroyed" << endl;
}


//input method taking external user input for month, day, year
void Date::inputDate(){

	int mon = 0;
	int dd = 0;
	int yy = 0;

	do{							//loop to ensure month is between 1 and 12
		if(!mon)
			cout << "Enter month: ";
		else
			cout << mon << " is an invalid month, re-enter: ";

		cin >> mon;
	} while(!setMonth(mon));

	do{							//loop to ensure day is correct according to month

		if(!dd)
			cout << "Enter day: ";
		else
			cout << dd << " is an invalid day, re-enter: ";

		cin >> dd;
	} while(!setDay(dd));

	do{							//loop to ensure year is between 1900 and 2016
		if(!yy)
			cout << "Enter year: ";
		else
			cout << yy << " is an invalid year, re-enter: ";

		cin >> yy;
	} while(!setYear(yy));

}

//display method to display contents of the class
void Date::display(){
	
	cout << month << '/' << day << '/' << year << endl;
}

//mutator methods
bool Date::setMonth(int m){			//mutator method setting the month between 1 and 12

	bool retstat = true;

	if(m < 1 || m > 12)
		retstat = false;
	else
		Date::month = m;

	return(retstat);
}

bool Date::setDay(int d){			//mutator method checking the day according to the month

	bool restat = true;

	if((month == 4 || month == 6 || month == 9 || month == 11) && (d < 1 || d > 30))
		restat = false;
	else
		Date::day = d;

	if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))
		restat = false;
	else
		Date::day = d;

	if((month == 2) && (day < 1 || day > 28))
		restat = false;
	else
		Date::day = d;

	return(restat);
}

bool Date::setYear(int y){			//mutator method setting the year between 1900 and 2016

	bool rstat = true;

	if(y < 1900 || y > 2016)
		rstat = false;
	else
		Date::year = y;

	return(rstat);
}

//operator methods
bool Date::operator==(const Date &d){

	bool equal = false;

	if(month == d.month && day == d.day & year == d.year)
		equal = true;

	return(equal);
}

bool Date::operator==(int year){

	bool equal = false;

	if(this->year == year)
		equal = true;

	return(equal);
}

//assignment operator overload
void Date::operator=(const Date &d){

	month = d.month;
	day = d.day;
	year = d.year;
}
	
//friend function
bool operator==(int year, const Date &d){

	bool equal = false;

	if(year == d.year)		//Could use d.getYear() if prototype was not a friend.
		equal = true;

	return(equal);
}

//output operator overload
ostream& operator<<(ostream &o, const Date &d){

	cout << d.month << '/' << d.day << '/' << d.year << endl;

	return(o);		//returning ostream allows for cascading, i.e. c out << d1 << d2;
}

//input operator overload
istream& operator>>(istream &i, Date &d){

	d.inputDate();	

	return(i);
}




//Accessor methods for month, day, year data members
int Date::getMonth(){

	return(month);
}

int Date::getDay(){

	return(day);
}

int Date::getYear(){

	return(year);
}









