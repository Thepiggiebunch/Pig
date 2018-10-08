#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fullGame()
	{
	int lyingPig = 0;
	int razorBack = 5;
	int trotter = 5;
	int snouter = 10;
	int leaningJowler = 15;
	double scores[5] = { lyingPig, razorBack, trotter, snouter, leaningJowler };

	
	system("pause");
	return 0;


}







int main()
{
	int userChoice;
	int userChoice2;
	
	

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
		fullGame();
	}

	
	
	/*level1();*/

	system("pause");
	return 0;

}