/*twoDayPackage.h
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * header file for the derived class 
 * two day package of the base class package,
 * containing all data members and methods
 * necessary for a two day package order.
 *
 */

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"

class TwoDayPackage: public Package{

public:

	TwoDayPackage();	//default constructor
	TwoDayPackage(Customer, Customer, int, int, int);	//constructor taking in specific arguments

	int calculateCost();	//method to calculate cost including flat fee
	int calculateRevenue();

	void print();	//display method
	void input();	//method to take external user input

	void setFlatfee(int);		//mutator method
	int getFlatfee() const;		//accessor method
	int getShipCost() const;

private:

	int flatFee;
	int shipCost;

};

#endif
