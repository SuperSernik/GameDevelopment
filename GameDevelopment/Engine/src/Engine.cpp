#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Engine.h"
#include "Log.h"


void engine::PrintMessage() {
	std::cout << "Hello" << std::endl;

}
	
void engine::PrintSecondMessage() {
	std::cout << "Greetings" << std::endl;
}

void engine::Print(const std::string x) {
    std::cout << x << std::endl;
}


int engine::test()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
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



