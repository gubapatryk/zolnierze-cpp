#include <iostream>
#include <RysowalnyObiekt.h>
#include <Zolnierz.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>
#include <Mapa.h>

int main()
{
    Mapa mapa;
    Zolnierz ob(20,20);
    sf::Event event;
    sf::Sprite sprite;


    sf::RenderWindow window(sf::VideoMode(400, 400), "Toy soldier");



    bool runApplication = true;
    while (runApplication)
    {

        window.clear();
        sprite = mapa.get_sprite();
        window.draw(sprite);
        sprite = ob.get_sprite();
        window.draw(sprite);
        window.display();

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                runApplication = false;
                break;

            case sf::Event::KeyPressed:
                std::cout << "Key press event detected\n";
                ob.checkForKeyPressed();
                mapa.checkForKeyPressed();

                break;

            default:

                break;
            }
        }
    }

    std::cout << "\npapa!";
    return 0;
}
