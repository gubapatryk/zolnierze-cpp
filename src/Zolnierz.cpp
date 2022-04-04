#include "Zolnierz.h"
#include <Stale.h>
#include <iostream>


Zolnierz::Zolnierz(std::string image_filename)  : RysowalnyObiekt(image_filename)
{
    init_sprite(image_filename);
    kierunek = 0;
}


void Zolnierz::update_sprite()
{
    if (kierunek > 0) {
        sprite.setScale(kierunek,1);
        sprite.setPosition(sprite.getPosition().x + 1,sprite.getPosition().y);
        kierunek--;
    }

    if (kierunek < 0) {
        sprite.setScale(kierunek,1);
        sprite.setPosition(sprite.getPosition().x - 1,sprite.getPosition().y);
        kierunek++;
    }
}


void Zolnierz::init_sprite(std::string image_filename)
{
        if (!texture.loadFromFile(ASSETS_FILEPATH + "zol1.jpg"))
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

sf::Sprite  Zolnierz::get_sprite()
{
    update_sprite();
    return sprite;
}

void Zolnierz::checkForKeyPressed()
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        kierunek = -1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        kierunek = 1;
    }
}
