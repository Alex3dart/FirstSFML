#include <SFML/Graphics.hpp>


using namespace sf;
typedef Keyboard::Key Ekey;



int main()
{

	float changeX=15.f ;
	float changeY =15.f;

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	window.setFramerateLimit(60);

	sf::CircleShape character(10,10);
	character.setFillColor(sf::Color::Green);
	character.setPosition(changeX,changeY);


	


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(character);
		window.display();

		if (sf::Keyboard::isKeyPressed(Keyboard::A)) {
			changeX += -2;
			character.setPosition(changeX, changeY);
		}
		else if (sf::Keyboard::isKeyPressed(Keyboard::D)) {
			changeX += 2;
	
			character.setPosition(changeX, changeY);
		}
		else if (sf::Keyboard::isKeyPressed(Keyboard::W)) {
			changeY += -2;
			character.setPosition(changeX, changeY);
		}
		else if (sf::Keyboard::isKeyPressed(Keyboard::S)) {
			changeY += 2;
			
			character.setPosition(changeX, changeY);
		}

	}

	return 0;
}
