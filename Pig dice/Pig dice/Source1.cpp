#include <SFML/Graphics.hpp>
#include <iostream>


int display()
{
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


