/*twoDayPackage.cpp
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * source file for the derived class
 * two day package with the necessary method
 * definitions and constructors to instantiate
 * an object of the two day package option.
 *
 */

#include "twoDayPackage.h"

//default constructor
TwoDayPackage::TwoDayPackage(){

	flatFee = 5;
	shipCost = calculateCost();
}

//constructor taking in specific arguments
TwoDayPackage::TwoDayPackage(Customer s, Customer r, int w, int c, int f): Package(s, r, w, c){

	flatFee = f;
	shipCost = calculateCost();
}

//method to calculate cost including the flat fee for a two day package
int TwoDayPackage::calculateCost(){

	int sCost;
	int w = getWeight();
	int c = getCost();

	sCost = flatFee + w * c;

	return(sCost);
}

//method to print sender and recipient information
void TwoDayPackage::print(){

	Package::print();
	cout << "The Flat Fee for a two day package is: $" << flatFee << endl;
	cout << "Total cost is: $" << shipCost << endl;
}

//method to take external user input
void TwoDayPackage::input(){

	Package::input();
	shipCost = calculateCost();
}

//mutator method
void TwoDayPackage::setFlatfee(int f){
	
	flatFee = f;
}

//accessor method
int TwoDayPackage::getFlatfee() const{

	return(flatFee);
}

int TwoDayPackage::getShipCost() const{

	return(shipCost);
}


