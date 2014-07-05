#include <SFML/Graphics.hpp>
#include "character.hpp"
#include "event.hpp"
#include <iostream>

void draw(sf::RenderWindow &window){

    sf::Texture texture;
    sf::Sprite sprite;
    
    std::string image_name = "image.png";
    if (!texture.loadFromFile("./source/image/"+image_name)) {
        std::cerr << "Can't load " << image_name << std::endl;
        exit(1);
    }

    sprite.setTexture(texture);

    window.draw(sprite);
}

int main()
{

    sf::RenderWindow main_window(sf::VideoMode::getDesktopMode(), "Project AAAA", sf::Style::Fullscreen);
    //sf::RenderWindow main_window(sf::VideoMode(800,600), "Debug", sf::Style::Default);
    sf::Clock timer1;
    double framerate = 60.f;
    double ms_delay1 = (1.f / framerate) * 1000.f;

    while (main_window.isOpen())
    {

        mainEventHandler(main_window);

        if(timer1.getElapsedTime().asMilliseconds() >= ms_delay1){
            main_window.clear(sf::Color::White);

            
            /*float fps = ( 1.f / timer1.getElapsedTime().asMilliseconds() ) * 1000.f;
            std::cout << timer1.getElapsedTime().asMilliseconds() << " : " << fps << std::endl;*/

            draw(main_window);

            main_window.display();
            timer1.restart();
        }

    }

    return 0;
}
