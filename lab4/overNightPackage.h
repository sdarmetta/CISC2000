/*overNightPackage.h
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * header file for the derived class
 * overnight package including all methods, constructors,
 * and data members used to define a package of the
 * overnight option
 *
 */

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"

class OverNightPackage: public Package{

public:

	OverNightPackage();	//default constructor
	OverNightPackage(Customer, Customer, int, int, int);	//constructor taking in specific arguments

	void print();	//display method
	void input();	//method to take user input

	int calculateCost();	//method to calculate cost including additional fee per ounce
	
	void setOvernightFee(int);	//mutator method
	int getOvernightFee() const;	//accessor method
	int getShipCost() const;


private:
	
	//data members for an overnight package
	int overnightFee;
	int shipCost;
};

#endif
