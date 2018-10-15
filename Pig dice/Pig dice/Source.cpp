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


int Score()
{

	int PlayerScore = 0;
	int ComputerScore = 0;
	int FinalScore = 0;
	int Turns = 0;
	int score[5] = { 0,5,5,10,15 };
	int Face;
	int userChoice2;
	/*int userChoice;*/
	int randomNum;
	int choice;
	int compNum;
	string lyingPig;
	string razorBack;
	string trotter;
	string snouter;
	string leaningJowle;
	string PigFace[5] = { lyingPig, razorBack ,trotter ,snouter ,leaningJowle };
	

	/*srand(time(NULL));
	PigFace[5] = rand() % 6 + 1;*/ 
	
	/*if (userChoice == 1)
	{
		cout << "Are you ready? 1 for Yes 2 for No ";
		cin >> userChoice2;
	}
	else if (userChoice == 2)
	{
		cout << "Not ready yet go away" << endl;
	}*/
	
	cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
	cin >> userChoice2;
	
	
	if (userChoice2 == 1)
	{
		cout << "Press 1 to roll dice: ";
		cin >> userChoice2;
	}
	else {
		cout << "go away for now this isnt finished" << endl;
	}
	
	 srand(time(NULL));
	randomNum = rand() % 6 + 1;
	compNum = rand() % 6 + 1;
	cout << "Computers number is: " << compNum << endl;
	cout << "Your number is:" << randomNum << endl;

	if (randomNum > compNum)
	{
		cout << "You go first!" << endl;
		int score();
	}
	else if (compNum > randomNum)
	{
		cout << "Computer goes first!" << endl;
		int score();
	}
	else if (compNum == randomNum)
	{
		cout << "You tied go again!";
	}
	else if (Face = size(PigFace[0]))
	{
		PlayerScore = PlayerScore + 0;
		cout << "You get 0 points\n";
		cout << "Your Score is " << PlayerScore << endl;

		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/lying.PNG"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{


			}

			window.draw(imageSprite);
			window.display();
		}
		return EXIT_SUCCESS;
	}
	else if (Face = size(PigFace[1]))
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/razor.PNG"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{


			}

			window.draw(imageSprite);
			window.display();
		}
		return EXIT_SUCCESS;
	}
	else if (Face = size(PigFace[2]))
	{
		PlayerScore = PlayerScore + 5;
		cout << "You get 5 points\n";
		cout << "Your Score is " << PlayerScore << endl;
		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/pig test.jpg"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{


			}

			window.draw(imageSprite);
			window.display();
		}
		return EXIT_SUCCESS;
	}
	else if (Face = size(PigFace[3]))
	{
		PlayerScore = PlayerScore + 10;
		cout << "You get 10 points\n";
		cout << "Your Score is " << PlayerScore << endl;
		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/snouter.PNG"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{


			}

			window.draw(imageSprite);
			window.display();
		}
		return EXIT_SUCCESS;
	}

	else if (Face = size(PigFace[4]))
	{
		PlayerScore = PlayerScore + 15;
		cout << "You get 15 points\n";
		cout << "Your Score is " << PlayerScore << endl;
		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/leaning.PNG"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{


			}

			window.draw(imageSprite);
			window.display();
		}
		return EXIT_SUCCESS;

	}






	system("pause");
	return 0;

}



int main()
{
	int userChoice3;
	
	cout << "Welcome to pig dice! would you like to play? 1 for Singles 2 for Doubles(Not working) : ";
	cin >> userChoice3;
	
	 if (userChoice3 == 1)
	{
		 Score();
	}
	 else if (userChoice3 == 2)
	 {
		 cout << "Not finished yet! go away" << endl;
	 }



	system("pause");
	

}