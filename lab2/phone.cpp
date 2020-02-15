/*phone.cpp
 *
 * Salvatore D'Armetta
 * 10/20/2016
 *
 * source file for phone class including all constructors
 * and method definitions of the phone class to initialize
 * data members and ensure their integrity.
 *
 */

#include "phone.h"

//default constructor to initialize data members with a defualt value
Phone::Phone():texts(10){

	areaCode = 718;
	exchange = 646;
	line = 8910;
}

//constructor intializing data members with specific arguments
Phone::Phone(int a, int e, int l, int t):texts(t){

	areaCode = a;
	exchange = e;
	line = l;
}

//input method to take outside user input for phone information
void Phone::inputPhone(){

	int a = 0;
	int e = 0;
	int l = 0;

	do{

		if(!a)
			cout << "Input Area Code: ";
		else
			cout << "Invalid area code, re-enter: ";

		cin >> a;
	} while(!setArea(a));

	do{
		
		if(!e)
			cout << "Input Exchange: ";
		else
			cout << "Invalid exchange, re-enter: ";

		cin >> e;
	} while(!setExchange(e));

	do{

		if(!l)
			cout << "Input Line: ";
		else
			cout << "Invalid line, re-enter: ";

		cin >> l;
	} while(!setLine(l));


}

//display method to display contents of phone class
void Phone::displayPhone(){

	cout << "(" << areaCode << ")-" << exchange << "-" << line << endl;
	cout << "Maximum Number of Texts: " << texts << endl;
	
} 

//mutator method to ensure area code is between 001 and 999
bool Phone::setArea(int area){

	bool retstat = true;

	if(area < 1 || area > 999)
		retstat = false;
	else
		Phone::areaCode = area;

	return(retstat);
}

//mutator method to ensure exchange is between 001 and 999
bool Phone::setExchange(int ex){

	bool retstat = true;

	if(ex < 1 || ex > 999)
		retstat = false;
	else
		Phone::exchange = ex;

	return(retstat);
}

//mutator method to ensure line is between 0001 and 9999
bool Phone::setLine(int li){

	bool retstat = true;

	if(li < 1 || li > 9999)
		retstat = false;
	else
		Phone::line = li;

	return(retstat);

}

//accessor methods to access data members of the phone class
int Phone::getArea(){

	return(areaCode);
}

int Phone::getExchange(){

	return(exchange);
}

int Phone::getLine(){

	return(line);
}
















	
