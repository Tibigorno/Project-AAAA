#include <SFML/Graphics.hpp>
#include "character.hpp"

int main()
{
	sf::VideoMode myvm = sf::VideoMode(200, 200);
    sf::RenderWindow window(myvm, "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
