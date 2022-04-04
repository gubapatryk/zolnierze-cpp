#include "Zolnierz.h"
#include <Stale.h>
#include <iostream>


Zolnierz::Zolnierz(std::string filename,int x, int y)  : RysowalnyObiekt(filename)
{
    kierunek = true;
    poprzedniKierunek = false;
    ruszylSie = true;
    bacznosc = true;
    sprite.setPosition(sprite.getPosition().x + texture.getSize().x - WALKSPEED + x,sprite.getPosition().y + y);
}


void Zolnierz::update_sprite()
{
    if (ruszylSie)
    {
        if (kierunek)
        {
            if (poprzedniKierunek != kierunek)
            {
                sprite.setScale(1,1);
                poprzedniKierunek = kierunek;
                sprite.setPosition(sprite.getPosition().x - texture.getSize().x + 1,sprite.getPosition().y);
            }
            sprite.setPosition(sprite.getPosition().x + WALKSPEED,sprite.getPosition().y);
        }

        else
        {
            if (poprzedniKierunek != kierunek)
            {
                sprite.setScale(-1,1);
                poprzedniKierunek = kierunek;
                sprite.setPosition(sprite.getPosition().x + texture.getSize().x + 1,sprite.getPosition().y);
            }
            sprite.setPosition(sprite.getPosition().x - WALKSPEED,sprite.getPosition().y);
        }
        ruszylSie = false;

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
        ruszylSie = true;
        kierunek = false;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        ruszylSie = true;
        kierunek = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
    {
        bacznosc = !bacznosc;
    }
}
