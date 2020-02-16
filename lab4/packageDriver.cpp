/*packageDriver.cpp
 *
 * Salvatore D'Armetta
 * 12/15/2016
 *
 * main driver program for the base class package
 * and derived classes TwoDayPackage and OverNightPackage
 * testing the functionality of these classes.
 *
 */

#include "twoDayPackage.h"
#include "overNightPackage.h"

int main(){

	//variables and pointers for main driver program
	char exit = 'n';
	const int size = 100;
	int twoDayCount = 0;
	int overNightCount = 0;
	int twoDayRevenue;
	int overNightRevenue;
	TwoDayPackage *twoDay[size];
	OverNightPackage *overNight[size];

	while((twoDayCount != 100 && overNightCount != 100) && exit == 'n'){	//enter loop while 100 customers of each package have not been served and while exit is no

		char option;	

		cout << "Hello! What service would you like ('t' for two day, 'o' for overnight): ";
		cin >> option;

		if(option == 't'){						//if customer chooses two day, instantiate two day object
			twoDay[twoDayCount] = new TwoDayPackage();
			twoDay[twoDayCount]->input();				//input object information
			twoDay[twoDayCount]->print();			//print object information
		
			twoDayCount++;
		}
		else{
			overNight[overNightCount] = new OverNightPackage();	//if customer chooses overnight, instantiate overnight object
			overNight[overNightCount]->input();		//input object information
			overNight[overNightCount]->print();		//print object information
			
			overNightCount++;
		}
	
		cout << "Thank you and have a good day!" << endl;
	
		cout << "Exit(y for yes, n for no): ";
		cin >> exit;
	}

	cout << "Report" << endl;	//report printing all customers served for the day

	for(int i = 0; i < twoDayCount; i++)
		twoDay[i]->print();
	
	for(int i = 0; i < overNightCount; i++)
		overNight[i]->print();

	cout << "Summary Information" << endl;		//summary information for total number and revenue of both packages

	cout << "Number of Two Day Packages: " << twoDayCount << endl;
	cout << "Number of Over Night Packages: " << overNightCount << endl;

	for(int i = 0; i < twoDayCount; i++)
		twoDayRevenue += twoDay[i]->getShipCost();

	for(int i = 0; i < overNightCount; i++)
		overNightRevenue += overNight[i]->getShipCost();

	cout << "Total two day revenue: " << twoDayRevenue << endl;
	cout << "Total overnight revenue: " << overNightRevenue << endl;

}

	






