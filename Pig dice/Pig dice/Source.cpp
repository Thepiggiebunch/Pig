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


//int Score()
//{
//
//	int ComputerScore = 0;
//	int FinalScore = 0;
//	int Turns = 0;
//	int score[5] = { 0,5,5,10,15 };
//	int Face;
//	int userChoice;
//	int randomNum;
//	int choice;
//	int compNum;
//
//
//
//	
//
//
//	cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
//	cin >> userChoice2;
//
//	if (userChoice2 == 1)
//	{
//		cout << "Press 1 to roll dice: ";
//		cin >> userChoice2;
//	}
//	else
//	{
//		cout << "hmm" << endl;
//	}
//
//	srand(time(NULL));
//	randomNum = rand() % 6 + 1;
//	compNum = rand() % 6 + 1;
//	cout << "Your number is:" << randomNum << endl;
//	cout << "Computers number is: " << compNum << endl;
//
//	if (randomNum > compNum)
//	{
//		cout << "You go first!" << endl;
//		points();
//	}
//	else if (compNum > randomNum)
//	{
//		cout << "Computer goes first!" << endl;
//
//	}
//	else if (compNum == randomNum)
//	{
//		cout << "You tied go again!";
//	}
//
//	system("pause");
//	return 0;
//
//}
	 
	 
		int points()
{
		int lyingPig = 0;
		int razorBack = 5;
		int trotter = 5;
		int snouter = 10;
		int leaningJowle = 15;
		int PlayerScore = 0;
		bool pigroll = true;
		string PigFace[5] = { "lyingPig", "razorBack" ,"trotter" ,"snouter" ,"leaningJowle" };
		int intPigFace[5] = { };
		int randPiggie;
		
		srand(time(NULL));
		//piggie = PigFace[rand() % 4]; (intPigFace[0] = stoi(piggie)) == 0
		
		
		
		do {
		randPiggie = intPigFace[rand() % 4];
			cout << "Your first pig position is: " << PigFace[randPiggie] << endl;

		 if (randPiggie == 0)
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
		 else if (randPiggie == 1)
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
		 else if (randPiggie == 2)
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
		 else if (randPiggie == 3)
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

		 else if (randPiggie == 4)
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

	 }while (PlayerScore == 35);




	system("pause");
	return 0;

}



int main()
{
	int userChoice3;
	int userChoice2;
	int randomNum;
	int choice;
	int compNum;

	cout << "Welcome to pig dice! would you like to play? 1 for Singles 2 for Doubles(Not working) : ";
	cin >> userChoice3;

		cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
	 cin >> userChoice2;

	 if (userChoice2 == 1)
	 {
		 cout << "Press 1 to roll dice: ";
		 cin >> userChoice2;
	 }
	 else
	 {
		 cout << "hmm" << endl;
	 }

	 srand(time(NULL));
	 randomNum = rand() % 6 + 1;
	 compNum = rand() % 6 + 1;
	 cout << "Your number is:" << randomNum << endl;
	 cout << "Computers number is: " << compNum << endl;

	 if (randomNum > compNum)
	 {
		 cout << "You go first!" << endl;
		 points();
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