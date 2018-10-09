#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Score()
{
	
	int PlayerScore;
	int ComputerScore;
	int FinalScore;
	int Turns;
	int lyingPig = 1;
	int razorBack = 2;
	int trotter = 3;
	int snouter = 4;
	int leaningJowle = 5;
	int pigFace = 0;
	


	if (pigFace = lyingPig) 
	{
		PlayerScore = PlayerScore + 0;
		cout << "You get 0 points\n";
		cout << "Your Score is " << PlayerScore << endl ;
	}
	else if(pigFace = razorBack) 
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}
	else if (pigFace = trotter) 
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}
	else if (pigFace = snouter) 
	{
		PlayerScore = PlayerScore + 10;
		cout << "You get 10 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}

	else if (pigFace = leaningJowle)
	{
		PlayerScore = PlayerScore + 15;
		cout << "You get 15 points\n";
		cout << "Your Score is " << PlayerScore << endl;

	}






	system("pause");
	
}
