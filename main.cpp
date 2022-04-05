#include <iostream>
#include <vector>
#include <RysowalnyObiekt.h>
#include <Zolnierz.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>
#include <Mapa.h>
#include <Szeregowy.h>
#include <Major.h>
#include <General.h>
#define N 5
#define M 2

int main()
{

    std::vector <Szeregowy> oddzial1;


    for (int i = 0; i < N; i++) {
        oddzial1.push_back(Szeregowy(20+ 30*i, 20));
    }

    std::vector <Major> oddzial2;


    for (int i = 0; i < N-1; i++) {
        oddzial2.push_back(Major(30+ 30*i, 140));
    }

    std::vector <General> oddzial3;


    for (int i = 0; i < M; i++) {
        oddzial3.push_back(General(60+ 30*i, 280));
    }

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

        for( size_t i = 0; i < oddzial1.size(); i++ )
        {
            oddzial1[i].update_sprite();
            window.draw(oddzial1[i].get_sprite());
        }
        for( size_t i = 0; i < oddzial2.size(); i++ )
        {
            oddzial2[i].update_sprite();
            window.draw(oddzial2[i].get_sprite());
        }
        for( size_t i = 0; i < oddzial3.size(); i++ )
        {
            oddzial3[i].update_sprite();
            window.draw(oddzial3[i].get_sprite());
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
                //std::cout << "Key press event detected\n";

                for( size_t i = 0; i < oddzial1.size(); i++ )
                {
                    oddzial1[i].checkForKeyPressed();
                }

                for( size_t i = 0; i < oddzial2.size(); i++ )
                {
                    oddzial2[i].checkForKeyPressed();
                }
                for( size_t i = 0; i < oddzial3.size(); i++ )
                {
                    oddzial3[i].checkForKeyPressed();
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
