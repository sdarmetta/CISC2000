/*overNightPackage.cpp
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * source file for the derived class
 * overnight package with all method and constructor
 * definitions necessary for instantiating an object
 * package with the overnight option.
 *
 */

#include "overNightPackage.h"

//default constructor
OverNightPackage::OverNightPackage(){

	overnightFee = 5;
	shipCost = calculateCost();
}

//constructor taking in specific arguments
OverNightPackage::OverNightPackage(Customer s, Customer r, int w, int c, int o):Package(s, r, w, c){

	overnightFee = o;
	shipCost = calculateCost();
}


//method to print sender and recipient information, as well as additional information about the package
void OverNightPackage::print(){

	Package::print();
	cout << "Additional fee per ounce is: $" << overnightFee << endl;
	cout << "Total cost is: $" << shipCost << endl;
}

//method to take user input
void OverNightPackage::input(){

	Package::input();
	shipCost = calculateCost();
}

//method to calculate cost including additional overnight fee per ounce
int OverNightPackage::calculateCost(){

	int sCost;
	int w = getWeight();
	int c = getCost();

	sCost = overnightFee + c;
	sCost = sCost * w;

	return(sCost);
}

//mutator method
void OverNightPackage::setOvernightFee(int o){

	overnightFee = o;
}

//accessor method
int OverNightPackage::getOvernightFee() const{

	return(overnightFee);
}

int OverNightPackage::getShipCost() const{

	return(shipCost);
}

	
