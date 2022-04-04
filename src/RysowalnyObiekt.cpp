#include "RysowalnyObiekt.h"
#include <iostream>
#include <SFML/Window/Event.hpp>
#include <Stale.h>

RysowalnyObiekt::RysowalnyObiekt(std::string image_filename)
{
    init_sprite(image_filename);
}

void RysowalnyObiekt::init_sprite(std::string image_filename)
{
        if (!texture.loadFromFile(ASSETS_FILEPATH + "cat.jpg"))
    {
        std::cout << "blad";

    }
    else
    {
        sprite.setTexture(texture);
        sprite.setPosition(0,0);
        //std::cout << texture.getSize()->x;

    }
}

void RysowalnyObiekt::checkForKeyPressed()
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        std::cout << "kliklo";
    }

}

void RysowalnyObiekt::update_sprite()
{
    std::cout << "from inside\n";

}

sf::Sprite  RysowalnyObiekt::get_sprite()
{
    update_sprite();
    std::cout << "updated";
    return sprite;

}
