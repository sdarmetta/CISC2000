/*package.h
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * header file for class package
 * to represent the base class
 * of two difference package delivery
 * options
 */

#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include "customer.h"

using namespace std;


class Package{

public:

	Package();	//default constructor
	Package(Customer, Customer, int, int);		//custom constructor

	int calculateCost();	//method to calculate cost of sending package

	void print();		//method to print sender and recipient information
	void input();		//method to take user input

	//mutator methods
	bool setWeight(int);
	bool setCost(int);	

	//accessor methods
	int getWeight() const;
	int getCost() const;

protected:

	//data members for customer information
	Customer sender, recipient;


private:

	//data members for a package description
	int weight;
	int cost;	


};

#endif
