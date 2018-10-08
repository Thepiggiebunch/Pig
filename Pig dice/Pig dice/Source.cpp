#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int lyingPig = 0;
	int razorBack = 5;
	int trotter = 5;
	int snouter = 10;
	int leaningJowler = 15;
	int userChoice;
	int userChoice2;
	double scores[5] = { lyingPig, razorBack, trotter, snouter, leaningJowler };

	cout << "Welcome to pig dice! would you like to play? 1 for yes 2 for no";
	cin >> userChoice;
	
	if (userChoice == 1)
	{
		cout << "Are you ready? 1 for yes and 2 for no ";
		cin >> userChoice2;
	}
	else if (userChoice == 2)
	{
		cout << "Goodbye";
	}
	else 
	{
		cout << "Invalid";
	}
	/*level1();*/

	system("pause");
	return 0;

}