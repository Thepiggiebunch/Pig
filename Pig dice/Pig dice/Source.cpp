#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#define HEADER_H_
#include "Header.h"
#include <SFML/Graphics.hpp>
using namespace std;

//int fullGame()
//{
//
//	int randomNum;
//	int choice;
//
//
//	srand(time(NULL));
//	randomNum = rand() % 6 + 1;
//	cout << "Press 1 to roll dice: ";
//	cin >> choice;
//
//	cout << randomNum;
//
//	system("pause");
//	return 0;
//
//
//}
int main()
{
	int userChoice;
	int userChoice2;
	int randomNum;
	int choice;
	int compNum;


	cout << "Welcome to pig dice! would you like to play? 1 for Singles 2 for Doubles(Not working) : ";
	cin >> userChoice;

	if (userChoice == 1)
	{
		cout << "Are you ready? 1 for Yes 2 for No ";
		cin >> userChoice2;
	}
	else if (userChoice == 2)
	{
		cout << "Not ready yet go away" << endl;
	}
	else if (userChoice2 == 1)
	{
		cout << "Press 1 to roll dice: ";
		cin >> choice;
	}
		srand(time(NULL));
		randomNum = rand() % 6 + 1;
		compNum = rand() % 6 + 1;
		cout << "Computers number is: " << compNum << endl;
		cout << "Your number is:" << randomNum << endl;

	if (randomNum > compNum)
	{
		cout << "You go first!" << endl;
	}
	else if (compNum > randomNum)
	{
		cout << "Computer goes first!" << endl;
	}
	else if (compNum == randomNum)
	{
		cout << "You tied go again!";
	}
	



	system("pause");
	return 0;

}