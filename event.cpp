#include "event.hpp"


static void keyPressedHandler(sf::Event event){
	switch(event.key.code){
		case sf::Keyboard::Escape:
			exit(0);
			break;
		default: break;
	}
	
}

static void keyReleasedHandler(sf::Event event){
	
}

void mainEventHandler(sf::Window &window){

	    sf::Event event;
        while (window.pollEvent(event))
        {
			switch (event.type){
				case sf::Event::Closed:
					window.close();
					break;
				
				case sf::Event::KeyPressed:
					keyPressedHandler(event);
					break;
					
				case sf::Event::KeyReleased:
					keyReleasedHandler(event);
					break;
				
				case sf::Event::LostFocus:
					/* pause(); */
					break;
					
				case sf::Event::GainedFocus:
					/* resume(); */
					break;

				
				default: break;
			}
        }
        
}
