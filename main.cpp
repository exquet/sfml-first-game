#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{
    //window
    sf::Window window(sf::VideoMode(600, 800), "first game", sf::Style::Titlebar | sf::Style::Close);

    //game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.key.code == sf::Keyboard::Escape) {
				window.close();
            }
        }

        window.display();
    }

    //end
    return 0;
}