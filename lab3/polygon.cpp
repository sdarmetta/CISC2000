/*polygon.cpp
 *
 * Salvatore D'Armetta
 * 10/25/2016
 *
 * Source file for the polygon class including all 
 * method and constructor definitions to instantiate
 * an object of the polygon class and ensure its integrity.
 *
 */

#include "polygon.h"

int Polygon::numPolygons = 0;

//Default constructor setting the data members to a default value
Polygon::Polygon(): MIN(DEFAULT_MIN), MAX(DEFAULT_MAX){

	length = 10;
	width = 10;
	calculateArea();
	calculatePerimeter();

	numPolygons++;
}

//constructor that takes in specific values for length, width, MIN, and MAX
Polygon::Polygon(int l, int w, int mi, int ma): MIN(mi), MAX(ma){

	length = l;
	width = w;
	calculateArea();
	calculatePerimeter();

	numPolygons++;
}

//Input method to take external user input
void Polygon::inputPolygon(){

	int len = 0; 
	int wid = 0;

	do{
		if(!len)
			cout << "Enter Length(Between " << MIN << " and " << MAX << "): ";
		else
			cout << "Invalid Length, re-enter: ";
	
		cin >> len;
	} while(!setLength(len));

	do{
		if(!wid)
			cout << "Enter Width(Between " << MIN << " and " << MAX << "): ";
		else
			cout << "Invalid Width, re-enter: ";
	
		cin >> wid;
	} while(!setWidth(wid));
	
}

//display method to display contents of an object of the polygon class
void Polygon::display(){

	calculateArea();
	calculatePerimeter();

	cout << "Length is " << length << endl;
	cout << "Width is " << width << endl;
	cout << "Area is " << area << endl;
	cout << "Perimeter is " << perimeter << endl;
	cout << "Number of polygons is: " << numPolygons << endl;

}

//mutator method to ensure integrity of length values are between MIN and MAX
bool Polygon::setLength(int l){

	bool retstat = true;

	if(l < MIN || l > MAX)
		retstat = false;
	else 
		Polygon::length = l;

	return(retstat);
}

//mutator method to ensure width values are within MIN and MAX values
bool Polygon::setWidth(int w){

	bool retstat = true;
	
	if(w < MIN || w > MAX)
		retstat = false;
	else
		Polygon::width = w;

	return(retstat);
}

//Method to calculate the area of a polygon based on length and width
int Polygon::calculateArea(){

	area = length * width;

	return(area);
}

//Method to calculate the perimeter of a polygon based on length and width
int Polygon::calculatePerimeter(){

	perimeter = (2*length) + (2*width);

	return(perimeter);
}


//method to draw a polygon based on length and width
void Polygon::drawPolygon(){


	cout << " ";

	for(int i = 0; i < length; i++)
		cout << "--";
	
	cout << endl;
	
		for(int i = 0; i < width; i++){
			cout << "|";
		
			for(int o = 0; o < length; o++)
				cout << "  ";
		
			cout << "|" << endl;
		}

	cout << " ";

	for(int i = 0; i < length; i++)
		cout << "--";

	cout << endl;	
}
 
//accessor methods
int Polygon::getLength() const{

	return(length);
}

int Polygon::getWidth() const{

	return(width);
}

int Polygon::getArea() const{

	return(area);
}

int Polygon::getPerimeter() const{

	return(perimeter);
}









