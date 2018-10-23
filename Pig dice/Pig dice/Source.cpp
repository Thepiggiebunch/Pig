#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#define HEADER_H_
#include "Header.h"
#include <SFML/Graphics.hpp>
using namespace std;

int PlayerScore = 0;
int CompScore = 0;
	 
	 
int PlayerPoints()
{// players points/ pig position 
		int lyingPig = 0;
		int razorBack = 5;
		int trotter = 5;
		int snouter = 10;
		int leaningJowle = 15;
		bool pigroll = true;
		string PigFace[5] = { "lyingPig", "razorBack" ,"trotter" ,"snouter" ,"leaningJowle" };
		int intPigFace[5] = { };
		int randPiggie;
		
		srand(time(NULL));
		//piggie = PigFace[rand() % 4]; (intPigFace[0] = stoi(piggie)) == 0
		
		float timer = 0, delay = 0.5;
		

			randPiggie = rand() % 4;

			cout << "Your pig position is: " << PigFace[randPiggie] << endl;

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
					 if (event.type == sf::Event::Closed)
						 window.close();

				 }

				 window.draw(imageSprite);
				 window.display();
			 }
			 
		 }
		 else if (randPiggie == 1)
		 {
			 PlayerScore = PlayerScore + 5;
			 cout << "You get 5 points\n";
			 cout << "Your Score is " << PlayerScore << endl;
			 sf::RenderWindow window(sf::VideoMode(175, 210, 32), "SFML");


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
					 if (event.type == sf::Event::Closed)
						 window.close();

				 }

				 window.draw(imageSprite);
				 window.display();
			 }
			
			
		 }
		 else if (randPiggie == 2)
		 {
			 PlayerScore = PlayerScore + 5;
			 cout << "You get 5 points\n";
			 cout << "Your Score is " << PlayerScore << endl;
			 sf::RenderWindow window(sf::VideoMode(532, 505, 32), "SFML");


			 sf::Texture imageSource;
			 if (!imageSource.loadFromFile("graphics/trotter.png"))
				 return EXIT_FAILURE;
			 sf::Sprite imageSprite;
			 imageSprite.setTexture(imageSource);

			 while (window.isOpen())
			 {
				 sf::Event event;
				 while (window.pollEvent(event))
				 {
					 if (event.type == sf::Event::Closed)
						 window.close();

				 }

				 window.draw(imageSprite);
				 window.display();
			 }
			
			
		 }
		 else if (randPiggie == 3)
		 {
			 PlayerScore = PlayerScore + 10;
			 cout << "You get 10 points\n";
			 cout << "Your Score is " << PlayerScore << endl;
			 sf::RenderWindow window(sf::VideoMode(191, 213, 32), "SFML");


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
					 if (event.type == sf::Event::Closed)
						 window.close();

				 }

				 window.draw(imageSprite);
				 window.display();
			 }
		
			
		 }
		 else if (randPiggie == 4)
		 {
			 PlayerScore = PlayerScore + 15;
			 cout << "You get 15 points\n";
			 cout << "Your Score is " << PlayerScore << endl;
			 sf::RenderWindow window(sf::VideoMode(236, 193, 32), "SFML");


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
					 if (event.type == sf::Event::Closed)
						 window.close();

				 }

				 window.draw(imageSprite);
				 window.display();
			 }
			
			 
		 }
		 if (PlayerScore >= 35)
		 {
			 cout << "YOU WIN!!" << endl;
		 }

	return 0;

}

int CompPoint()
{// Computers points/Pig position
	int lyingPig = 0;
	int razorBack = 5;
	int trotter = 5;
	int snouter = 10;
	int leaningJowle = 15;
	bool pigroll = true;
	string PigFace[5] = { "lyingPig", "razorBack" ,"trotter" ,"snouter" ,"leaningJowle" };
	int intPigFace[5] = {};
	int randPiggie;

	srand(time(NULL));
	//piggie = PigFace[rand() % 4]; (intPigFace[0] = stoi(piggie)) == 0



	
	randPiggie = rand() % 4;
	// random number gen
	cout << "Computers pig position is: " << PigFace[randPiggie] << endl;

	if (randPiggie == 0)
	{
		CompScore = CompScore + 0;
		cout << "Computer got 0 points\n";
		cout << "Computers Score is " << CompScore << endl;


		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
		// this loads the picture 

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
				if (event.type == sf::Event::Closed)
					window.close();

			}

			window.draw(imageSprite);
			window.display();
		}

	}
	else if (randPiggie == 1)
	{
		CompScore = CompScore + 5;
		cout << "Computer got 5 points\n";
		cout << "Computers Score is " << CompScore << endl;
		sf::RenderWindow window(sf::VideoMode(175, 210, 32), "SFML");


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
				if (event.type == sf::Event::Closed)
					window.close();

			}

			window.draw(imageSprite);
			window.display();
		}


	}
	else if (randPiggie == 2)
	{
		CompScore = CompScore + 5;
		cout << "Computer got 5 points\n";
		cout << "Computers Score is " << CompScore << endl;
		sf::RenderWindow window(sf::VideoMode(532, 505, 32), "SFML");


		sf::Texture imageSource;
		if (!imageSource.loadFromFile("graphics/trotter.png"))
			return EXIT_FAILURE;
		sf::Sprite imageSprite;
		imageSprite.setTexture(imageSource);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();

			}

			window.draw(imageSprite);
			window.display();
		}


	}
	else if (randPiggie == 3)
	{
		CompScore = CompScore + 10;
		cout << "Computer got 10 points\n";
		cout << "Computers Score is " << CompScore << endl;
		sf::RenderWindow window(sf::VideoMode(191, 213, 32), "SFML");


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
				if (event.type == sf::Event::Closed)
					window.close();

			}

			window.draw(imageSprite);
			window.display();
		}


	}

	else if (randPiggie == 4)
	{
		CompScore = CompScore + 15;
		cout << "Computer got 15 points\n";
		cout << "Computers Score is " << CompScore << endl;
		sf::RenderWindow window(sf::VideoMode(236, 193, 32), "SFML");


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
				if (event.type == sf::Event::Closed)
					window.close();

			}

			window.draw(imageSprite);
			window.display();
		}


	}
	if (CompScore >= 35)
	{
		cout << "THE COMPUTER WINS!!";
	}
		return 0;

}



int main()
{
	int userChoice3;
	int userChoice2;
	int randomNum;
	int choice;
	int compNum;
	int quit;

	cout << "Welcome to pig dice! would you like to play? 1 for Singles 2 for Doubles(Not working) : ";
	cin >> userChoice3;

		cout << "Are you ready to roll the dice? 1 for yes and 2 for no" << endl;
	 cin >> userChoice2;
	 // starts the game off with who goes first by a roll of dice
	 if (userChoice2 == 1)
	 {
		 cout << "Press 1 to roll dice: ";
		 cin >> userChoice2;
	 }
	 else
	 {
		 cout << "hmm" << endl;
	 }

	 do
	 {
		 srand(time(NULL));
		 randomNum = rand() % 6 + 1;
		 compNum = rand() % 6 + 1;
		 cout << "Your number is:" << randomNum << endl;
		 cout << "Computers number is: " << compNum << endl;

		 if (randomNum > compNum)
		 {
			 cout << "You go first!" << endl;
			 PlayerPoints();
		 }
		 else if (compNum > randomNum)
		 {
			 cout << "Computer goes first!" << endl;
			 CompPoint();
		 }
		 else if (compNum == randomNum)
		 {
			 cout << "You tied go again!";
		 }
		 cout << "Do you want to quit? 1 for yes 2 for no" << endl;
		 cin >> quit;
	 } while (quit != 1);
	 // asks the user if they would like to quit or not


	system("pause");
	return 0;

}