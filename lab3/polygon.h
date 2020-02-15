/*polygon.h
 *
 * Salvatore D'Armetta
 * 10/25/2016
 *
 *
 * Header file for the polygon class including all constructors
 * and methods to instantiate an object of the class and
 * ensure its integrity
 *
 */

#include<iostream>
using namespace std;

class Polygon{

public:

	//Default constructor and constructor that takes in specific arguments
	Polygon();
	Polygon(int, int, int, int);

	//input method to take external user input for a polygon object
	void inputPolygon();

	//display method to display the data members of a polygon object
	void display();

	//mutator methods to ensure integrity of object
	bool setLength(int);
	bool setWidth(int);
	
	//method to calculate the area of a polygon object
	int calculateArea();

	//method to calculate the perimeter of a polygon object
	int calculatePerimeter();
	
	//method to draw a polygon
	void drawPolygon();

	//accessor methods
	int getLength() const;
	int getWidth() const;
	int getPerimeter() const;
	int getArea() const;
	int getNumpolygons() const;

private: 

	//data members for the shape of a polygon 
	int length, width, perimeter, area;
	static int numPolygons;
	static const int MAX_POLYGONS = 25;
	static const int DEFAULT_MIN = 10;
	static const int DEFAULT_MAX = 100;
	const int MIN;
	const int MAX;

};
