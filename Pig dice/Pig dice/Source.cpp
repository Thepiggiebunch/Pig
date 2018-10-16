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
	int userChoice;
	int randomNum;
	int choice;
	int compNum;
<<<<<<< HEAD
	int lyingPig = 0;
	int razorBack = 5;
	int trotter = 5;
	int snouter = 10;
	int leaningJowle = 15;
	string piggie;
	string PigFace[5] = { "lyingPig", "razorBack" ,"trotter" ,"snouter" ,"leaningJowle" };
	
	cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
	cin >> userChoice2;
=======
	string lyingPig;
	string razorBack;
	string trotter;
	string snouter;
	string leaningJowle;
	string PigFace[5] = { lyingPig, razorBack ,trotter ,snouter ,leaningJowle };
	string piggie;

		srand(time(NULL));
		piggie = PigFace[rand() % 4];



		cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
		cin >> userChoice2;
>>>>>>> 5aea4ac1cfb2cba9c53dcf1fda6e5557a681b163
	
	if (userChoice2 == 1)
	{
		cout << "Press 1 to roll dice: ";
		cin >> userChoice2;
	}
	else 
	{
		cout << "go away for now this isnt finished" << endl;
	}
	
	 srand(time(NULL));
	randomNum = rand() % 6 + 1;
	compNum = rand() % 6 + 1;
	cout << "Your number is:" << randomNum << endl;
	cout << "Computers number is: " << compNum << endl;

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
	
	 do {
		 if (size(PigFace[0]) == )
		 {
			 PlayerScore = PlayerScore + 0;
			 cout << "You get 0 points\n";
			 cout << "Your Score is " << PlayerScore << endl;

			 sf::Event event;
			 while (window.pollEvent(event))
			 {
				 if (event.type == sf::Event::Closed)
					 window.close();
				 else if (event.type == sf::Event::KeyPressed)
				 {
					 if (event.key.code == sf::Keyboard::Key::Escape)
						 window.close();
					 // ... etc ...
				 
			
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

	 }while (PlayerScore == 35);




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
	return 0;

}