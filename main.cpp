#include <SFML/Graphics.hpp>
#include "character.hpp"
#include "event.hpp"


int main()
{
	
    sf::Window window(sf::VideoMode::getDesktopMode(), "Project AAAA");

    while (window.isOpen())
    {
		mainEventHandler(window);
    }

    return 0;
}
