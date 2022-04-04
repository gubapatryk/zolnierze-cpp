#include <iostream>
#include <RysowalnyObiekt.h>
#include <Zolnierz.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>


int main()
{
    Zolnierz ob("zol1.jpg");
    sf::Event event;


    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");



    bool runApplication = true;
    while (runApplication)
    {

        window.clear();
        sf::Sprite sprite = ob.get_sprite();
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

                break;

            default:

                break;
            }
        }
    }

    std::cout << "\npapa!";
    return 0;
}
