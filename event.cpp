#include "event.hpp"

void mainEventHandler(sf::Window &window){

	    sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
}
