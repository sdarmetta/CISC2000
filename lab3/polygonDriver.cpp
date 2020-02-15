/*polygonDriver.cpp
 *
 * Salvatore D'Armetta
 * 11/8/2016
 *
 * A main driver program to allow for the instantiation
 * of an array of pointers to 
 * polygon objects using the polygon class.
 *
 */

#include "polygon.h"

void drawPoly(Polygon *[]);		//function prototype to draw a polygon

int main(){
	
	//declare variables and array of pointers to polygon objects
	int count = 0;
	char build;
	Polygon *ptrp[25];

	//ask if user wishes to enter program
	cout << "Build Polygon(y for yes, n for no): ";
	cin >> build;

	//begin loop
	while(build == 'y'){
		
		//declarations
		char draw;
		char summary;
		int polNumber, numberPol;

		ptrp[count] = new Polygon();		//insntantiate a new polygon to a pointer

		ptrp[count]->inputPolygon();		//take user input to create polygon object

		drawPoly(ptrp);				//ask user if he/she wishes to draw the object

		
		//Ask user if he/she wishes to see summary statistics of their polygon objects
		cout << "Display Summary Statistics(y for yes, n for no): ";
		cin >> summary;

		if(summary == 'y'){
			for(int i = 0; i <= count; i++)
				ptrp[i]-> display();
		}	

		//Ask user if he/she wishes to continue building polygons
		cout << "Build another Polygon(y for yes, n for no):  ";
		cin >> build;
	
		count++;

	}

	//deallocate the polygon objects created
	for(int i = 0; i < count; i++)
		delete ptrp[i];

}


//function definition to ask user if he/she wishes to draw a polygon and then call method if so
void drawPoly(Polygon *ptrpol[]){

	char draw;
	int arrayPol, polyNumber;

	cout << "Draw polygon(y for yes, n for no): ";
	cin >> draw;

	if(draw == 'y'){
		cout << "Draw Polygon #: ";
		cin >> polyNumber;

		arrayPol = polyNumber - 1;
		ptrpol[arrayPol]->drawPolygon();
	}
}







