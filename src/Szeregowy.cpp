#include "Szeregowy.h"
#include <iostream>

Szeregowy::Szeregowy(int x, int y) : Zolnierz("szeregowy_bacznosc.png",x,y)
{
    bron = false;
}

void Szeregowy::prezentujBron()
{
    bron=true;
}

void Szeregowy::chowajBron()
{
    bron=false;
}
void Szeregowy::checkForKeyPressed()
{
    Zolnierz::checkForKeyPressed();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
    {
        std::cout<<"h";
        bron = !bron;
        if(bron)
            Szeregowy::prezentujBron();
        else
            Szeregowy::chowajBron();

    }
}

void Szeregowy::update_sprite()
{
    Zolnierz::update_sprite();

    if (bron)
        load_sprite("szeregowy_bron.png");
    else if (bacznosc)
        load_sprite("szeregowy_bacznosc.png");
    else
        load_sprite("szeregowy_spocznij.png");
}

