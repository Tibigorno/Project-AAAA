#include <SFML/Graphics.hpp>
#include "character.hpp"
#include "event.hpp"


int main()
{
	
    sf::RenderWindow window;
    window.create(sf::VideoMode::getDesktopMode(), "Project AAAA");

    while (window.isOpen())
    {
		
		mainEventHandler(window);
		
		window.clear(sf::Color::White);
		
		window.display(); 
    }

    return 0;
}
