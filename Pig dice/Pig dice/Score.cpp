//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <time.h>
//#include "Header.h"
//#include <SFML/Graphics.hpp>
//using namespace std;
//
//int Score()
//{
//
//	int PlayerScore = 0;
//	int ComputerScore = 0;
//	int FinalScore = 0;
//	int Turns = 0;
//	string lyingPig;
//	string razorBack;
//	string trotter;
//	string snouter;
//	string leaningJowle;
//	int score[5] = { 0,5,5,10,15 };
//	string PigFace[5] = { lyingPig, razorBack ,trotter ,snouter ,leaningJowle };
//	int Face;
//
//	srand(time(NULL));
//	PigFace[5] = rand() % 6 + 1;
//
//	 if (Face = size(PigFace[0]))
//	{
//		PlayerScore = PlayerScore + 0;
//		cout << "You get 0 points\n";
//		cout << "Your Score is " << PlayerScore << endl;
//
//		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
//
//
//		sf::Texture imageSource;
//		if (!imageSource.loadFromFile("graphics/lying.PNG"))
//			return EXIT_FAILURE;
//		sf::Sprite imageSprite;
//		imageSprite.setTexture(imageSource);
//
//		while (window.isOpen())
//		{
//			sf::Event event;
//			while (window.pollEvent(event))
//			{
//
//
//			}
//
//			window.draw(imageSprite);
//			window.display();
//		}
//		return EXIT_SUCCESS;
//	}
//	else if (Face = size(PigFace[1]))
//	{
//		PlayerScore = PlayerScore + 5;
//		cout << "You get 5 points\n";
//		cout << "Your Score is " << PlayerScore << endl;
//		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
//
//
//		sf::Texture imageSource;
//		if (!imageSource.loadFromFile("graphics/razor.PNG"))
//			return EXIT_FAILURE;
//		sf::Sprite imageSprite;
//		imageSprite.setTexture(imageSource);
//
//		while (window.isOpen())
//		{
//			sf::Event event;
//			while (window.pollEvent(event))
//			{
//
//
//			}
//
//			window.draw(imageSprite);
//			window.display();
//		}
//		return EXIT_SUCCESS;
//	}
//	else if (Face = size(PigFace[2]))
//	{
//		PlayerScore = PlayerScore + 5;
//		cout << "You get 5 points\n";
//		cout << "Your Score is " << PlayerScore << endl;
//		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
//
//
//		sf::Texture imageSource;
//		if (!imageSource.loadFromFile("graphics/pig test.jpg"))
//			return EXIT_FAILURE;
//		sf::Sprite imageSprite;
//		imageSprite.setTexture(imageSource);
//
//		while (window.isOpen())
//		{
//			sf::Event event;
//			while (window.pollEvent(event))
//			{
//
//
//			}
//
//			window.draw(imageSprite);
//			window.display();
//		}
//		return EXIT_SUCCESS;
//	}
//	else if (Face = size(PigFace[3]))
//	{
//		PlayerScore = PlayerScore + 10;
//		cout << "You get 10 points\n";
//		cout << "Your Score is " << PlayerScore << endl;
//		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
//
//
//		sf::Texture imageSource;
//		if (!imageSource.loadFromFile("graphics/snouter.PNG"))
//			return EXIT_FAILURE;
//		sf::Sprite imageSprite;
//		imageSprite.setTexture(imageSource);
//
//		while (window.isOpen())
//		{
//			sf::Event event;
//			while (window.pollEvent(event))
//			{
//
//
//			}
//
//			window.draw(imageSprite);
//			window.display();
//		}
//		return EXIT_SUCCESS;
//	}
//
//	else if (Face = size(PigFace[4]))
//	{
//		PlayerScore = PlayerScore + 15;
//		cout << "You get 15 points\n";
//		cout << "Your Score is " << PlayerScore << endl;
//		sf::RenderWindow window(sf::VideoMode(300, 200, 32), "SFML");
//
//
//		sf::Texture imageSource;
//		if (!imageSource.loadFromFile("graphics/leaning.PNG"))
//			return EXIT_FAILURE;
//		sf::Sprite imageSprite;
//		imageSprite.setTexture(imageSource);
//
//		while (window.isOpen())
//		{
//			sf::Event event;
//			while (window.pollEvent(event))
//			{
//
//
//			}
//
//			window.draw(imageSprite);
//			window.display();
//		}
//		return EXIT_SUCCESS;
//
//	}
//
//
//
//
//
//
//	system("pause");
//
//}