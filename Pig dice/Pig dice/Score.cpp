#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include "Header.h"
using namespace std;

void Score()
{

	int PlayerScore = 0;
	int ComputerScore = 0;
	int FinalScore = 0;
	int Turns = 0;
	string lyingPig;
	string razorBack;
	string trotter;
	string snouter;
	string leaningJowle;
	int score[5] = { 0,5,5,10,15 };
	string PigFace[5] = { lyingPig, razorBack ,trotter ,snouter ,leaningJowle };
	int Face;

	srand(time(NULL));
	PigFace[5] = rand() % 6 + 1;


	if (Face = size(PigFace[0]))
	{
		PlayerScore = PlayerScore + 0;
		cout << "You get 0 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}
	else if (Face = size(PigFace[1]))
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}
	else if (Face = size(PigFace[2]))
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}
	else if (Face = size(PigFace[3]))
	{
		PlayerScore = PlayerScore + 10;
		cout << "You get 10 points\n";
		cout << "Your Score is " << PlayerScore << endl;
	}

	else if (Face = size(PigFace[4]))
	{
		PlayerScore = PlayerScore + 15;
		cout << "You get 15 points\n";
		cout << "Your Score is " << PlayerScore << endl;

	}






	system("pause");

}