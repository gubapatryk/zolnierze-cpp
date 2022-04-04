#include "Mapa.h"
#include <iostream>
#include <Stale.h>

Mapa::Mapa() : RysowalnyObiekt("desert.png")
{
    id=0;
}

void Mapa::checkForKeyPressed()
{
    std::string nazwa_mapy;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
    {
        id++;
        if (id>2)
            id=0;
        switch (id)
        {
        case 0:
            nazwa_mapy = "desert.png";
            break;
        case 1:
            nazwa_mapy = "las.png";
            break;
        case 2:
            nazwa_mapy = "ulica.png";
            break;
        }
        init_sprite(nazwa_mapy);
        std::cout<<"costam";
    }
}
