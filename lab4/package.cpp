/*package.cpp
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * class definition for class package
 * defining methods and constructors
 * necessary for instantiating a package object
 */

#include "package.h"

Package::Package(){

	weight = 10;
	cost = 5;
}

Package::Package(Customer s, Customer r, int w, int c){

	sender = s;
	recipient = r;
	weight = w;
	cost = c;
}

int Package::calculateCost(){

	int shipCost;

	shipCost = weight * cost;

	return(shipCost);
}

void Package::print(){

	cout << "Sender Information: " << endl;
	sender.display();
	cout << "Recipient Information: " << endl;
	recipient.display();
	cout << "Weight of the package is: " << weight << "oz." << endl;
	cout << "Your cost per ounce is: $" << cost << endl;
}

void Package::input(){

	int w = 0;
	cout << "Sender Information" << endl;
	sender.input();
	cout << "Recipient Information" << endl;
	recipient.input();
	
	do{
		if(!w)
			cout << "Enter the weight of your package(in ounces): ";
		else
			cout << "Invalid weight, re-enter: ";
		
	cin >> w;
	} while(!setWeight(w));
}

bool Package::setCost(int c){

	bool retstat = true;

	if(c < 0)
		retstat = false;
	else
		Package::cost = c;

	return(retstat);
}

bool Package::setWeight(int w){

	bool retstat = true;

	if(w <= 0)
		retstat = false;
	else
		Package::weight = w;

	return(retstat);
}

int Package::getWeight() const{

	return(weight);
}

int Package::getCost() const{

	return(cost);
}

