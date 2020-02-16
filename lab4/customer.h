/*customer.h
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * header file for class customer
 * defining a class for a customer 
 * choosing a package delivery option
 */

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
using namespace std;

class Customer{

public:
	
	Customer();	//default constructor
	Customer(string, char, string, string, string, string, string, string);	//custom constructor

	void input();	//input method
	void display();		//display method
	
	//mutator methods
	void setFirst(string);
	void setLast(string);
	void setMiddle(char);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setStreet(string);
	void setHouse(string);

	//accessor methods
	string getFirst() const;
	string getLast() const;
	char getMiddle() const;
	string getCity() const;
	string getState() const;
	string getZip() const;
	string getStreet() const;
	string getHouse() const;

private:

	string fname, lname, street, city, state, zip, house;
	char middle;

};

#endif
