#include <iostream>
#include <RysowalnyObiekt.h>
#include <Zolnierz.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>
#include <Mapa.h>
#include <Szeregowy.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#define N 5

int main()
{

    std::vector <Szeregowy> armia;


    for (int i = 0; i < N; i++) {
        armia.push_back(Szeregowy(20+ 20*i, 20));
    }
    /*

    for (int i =20; i< 100; i+=20)
    {
    }
    */
    int iSecret = rand() % 3;
    std::cout<<iSecret;
    Mapa mapa;
    sf::Event event;


    sf::RenderWindow window(sf::VideoMode(400, 400), "Toy soldier");



    bool runApplication = true;
    while (runApplication)
    {

        window.clear();
        sf::Sprite map_sprite;
        map_sprite = mapa.get_sprite();
        window.draw(map_sprite);

        for( size_t i = 0; i < armia.size(); i++ )
        {
            armia[i].update_sprite();
            window.draw(armia[i].get_sprite());
        }
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

                for( size_t i = 0; i < armia.size(); i++ )
                {
                    armia[i].checkForKeyPressed();
                }
                mapa.checkForKeyPressed();

                break;

            default:

                break;
            }
        }
    }

    return 0;
}
