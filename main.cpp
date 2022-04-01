#include <iostream>
#include <RysowalnyObiekt.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>


int main()
{
    RysowalnyObiekt ob;
    sf::Event event;


    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");


    sf::Texture texture;
    sf::Sprite sprite;
    std::cout << "kot";
    if (!texture.loadFromFile("C:\\SFML\\assets\\cat.jpg"))
    {
        std::cout << "blad";

    }
    else
    {
        sprite.setTexture(texture);
        std::cout << "kot";

    }

    bool runApplication = true;
    while (runApplication)
    {
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                runApplication = false;
                break;

            case sf::Event::KeyPressed:
                std::cout << "beep";
                ob.checkForKeyPressed();

                break;

            default:

                window.clear();
                window.draw(sprite);
                window.display();
                break;
            }
        }
    }

    std::cout << "\npapa!";
    return 0;
}
