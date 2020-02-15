#include<iostream>
#include<cstdlib>
using namespace std;

//function declaration for individual game levels
void Level1(int level1Array[], int level1Size);
void Level2(int level2Array[], int level2Size);
void Level3(int level3Array[], int level3Size);
void Level4(int level4Array[], int level4Size);

void getEquation(int levelArray[], int levelSize);	//function declaration to generate random equation
void updateScore(int levelArray[], int random, int random2, char oper);	//function declaration to update score
int score=0;

int main()
{
	char playGame;
	char options; 	

	//Greeting and input to play or not
	cout << "Hello! Play Equations(y for yes, n for no): ";
	cin >> playGame;

	//Game loop
	while(playGame == 'y')
	{
		int level1Size = 11;
		int level1Array[11] = {0,1,2,3,4,5,6,7,8,9,10};
		int equationsAnswered = 0;	

		cout << "Level 1: " << endl;	
		Level1(level1Array,level1Size);
		
		
	}
}

//function definition for level 1 of game
void Level1(int level1Array[], int level1Size)	
{
	for(int i=0; i < 10; i++)
	{
		getEquation(level1Array, level1Size); 
	}
}

//function definition to generate random equation
void getEquation(int levelArray[], int levelSize)
{
	int random = rand() % 10;
	int random2 = rand() % 10;
	int randomOper = rand() % 4;
	char oper;

	switch(randomOper)
	{
		case 0:
			oper = '+';
			break;
		case 1:
			oper = '-';
			break;
		case 2:
			oper = 'x';
			break;
		case 3:
			oper = '/';
			break;
	}

		cout << levelArray[random] << oper << levelArray[random2] << " = " << endl;
		
		updateScore(levelArray, random, random2, oper);	

}

//function definition to check if user answer is correct and update score
void updateScore(int levelArray[], int random, int random2, char oper)
{
	float answer;
	float inputAnswer;

	cin >> inputAnswer;

	switch(oper)
	{
		case '+':
			answer = levelArray[random]+levelArray[random2];
			break;
		case '-':
			answer = levelArray[random]-levelArray[random2];
			break;
		case 'x':
			answer = levelArray[random]*levelArray[random2];
			break;
		case '/':
			answer = levelArray[random]/levelArray[random2];
			break;
	}

	if(inputAnswer == answer)
	{
		score++;
	}

	cout << "score: " << score << endl;
}













