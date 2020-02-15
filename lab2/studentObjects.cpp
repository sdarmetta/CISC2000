/*studentObjects.cpp
 *
 * Salvatore D'Armetta
 * 10/23/2016
 *
 * This is a test file testing the complete
 * student class including name, date. course, program
 * and phone information of a student. 
 *
 */

#include "student.h"

int main(){

	Student s[10];

	for(int i = 0; i < 3; i++)		//input 10 objects of the class student
		s[i].input();

	for(int i = 0; i < 3; i++)
		s[i].display();			//display the 10 objects taken from user input
}

