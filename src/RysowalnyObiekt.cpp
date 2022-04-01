#include "RysowalnyObiekt.h"
#include <iostream>
#include <SFML/Window/Event.hpp>

RysowalnyObiekt::RysowalnyObiekt()
{
    std::cout << "Konstruktor" << std::endl;

}

void RysowalnyObiekt::checkForKeyPressed()
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        std::cout << "kliklo";
    }

}
