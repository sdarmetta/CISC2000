/*
 * student.cpp
 *
 * Salvatore D'Armetta
 * 10/12/2016
 *
 * constructors and methods for the class student 
 * to initialize objects with private data members through
 * user input or through constructors
 *
*/


#include "student.h"

Student::Student(){			//default constructor for a student x

	id = "12345";
	gender = 'F';
}

					//constructor that initializes object s of class student
Student::Student(string i, Name n, Date d, char gen, Program p, Course c[10], Phone cp, Phone hp):cellPhone(cp), homePhone(hp){
	id = i;
	name = n;
	dob = d;
	program = p;
	setGender(gen);
	
	for(int i = 0; i < 10; i++)
		completedCourses[i] = c[i];
}

void Student::display(){		/*display constructor, serves to display
					 *all student information data members
					 */

	cout << id << endl;
	name.display();
	dob.display();	
	cout << gender << endl;
	cellPhone.displayPhone();
	homePhone.displayPhone();
	cout << preferredPhone << endl;
	program.display();
	cout << calculateGPA() << endl;
	cout << calculateCreditsEarned() << endl;
	

	for(int i = 0; i < 10; i++)
		completedCourses[i].display();
}

void Student::input(){			/*input method for user to enter student information
					 *and validate user info using set methods
					 */
	char g = ' ';

	cout << "Enter ID: ";
	cin >> id;

	name.inputName();

	dob.inputDate();

	do{								//loop to enter gender correctly
		if(g == ' ' )
			cout << "Enter gender: ";
		else
			cout << g << " is an invalid gender, re-enter: ";
		cin >> g;
	} while(!setGender(g));

	cout << "Cell Phone" << endl;
	cellPhone.inputPhone();

	cout << "Home Phone" << endl;
	homePhone.inputPhone();	

	cout << "Preferred Phone(C or H): ";
	cin >> preferredPhone;


	for(int i = 0; i < numCourses; i++)
		completedCourses[i].inputCourse();

}


bool Student::setGender(char gen){		//mutator method to set gender equal to either m (male) or f (female)

	bool retstat = true;

	if(!(gen == 'm') && !(gen == 'f') && !(gen == 'M') && !(gen == 'F'))
		retstat = false;
	else
		Student::gender = gen;

	return(retstat);
}

float Student::calculateGPA(){			//method to calculate GPA based on students complete course grades

	gpa = 0;
	float counter = 0;	

	for(int i = 0; i < numCourses; i++){
		
		float sum = 0;
		string Grade;
		Grade = completedCourses[i].getGrade();
		if(Grade == "A")	
			sum += 4.0;
		if(Grade == "A-")
			sum += 3.7;
		if(Grade == "B+")
			sum += 3.3;
		if(Grade == "B")
			sum += 3.0;
		if(Grade == "B-")
			sum += 2.7;
		if(Grade == "C+")
			sum += 2.3;
		if(Grade == "C")
			sum += 2.0;
		if(Grade == "C-")
			sum += 1.7;
		if(Grade == "D+")
			sum += 1.3;
		if(Grade == "D")
			sum += 1.0;
		if(Grade == "F")
			sum += 0.0;
		if(Grade == "W")
			sum += 0.0;
	
		counter += sum;	
	}
		
		gpa = counter / 10;

	return(gpa);
}

int Student::calculateCreditsEarned(){			//method to calculate credits student has earned from completed courses	

	creditsEarned = 0;

	for(int i = 0; i < numCourses; i++){
		
		int earnedCredits;
		earnedCredits = completedCourses[i].getCredits();
		creditsEarned += earnedCredits;
	}

	return(creditsEarned);
}





		




