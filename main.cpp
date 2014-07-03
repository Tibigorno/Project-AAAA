#include <SFML/Graphics.hpp>
#include "character.hpp"
#include "event.hpp"


int main()
{
	
    sf::RenderWindow window;
    window.create(sf::VideoMode::getDesktopMode(), "Project AAAA",sf::Style::Fullscreen);

    while (window.isOpen())
    {
		window.clear(sf::Color::White);	
		mainEventHandler(window);
		window.display(); 
    }

    return 0;
}
