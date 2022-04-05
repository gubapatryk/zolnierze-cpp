#include "General.h"

General::General(int x, int y): Zolnierz("general_bacznosc.png",x,y)
{
    order = false;
}
void General::nadajOrder()
{
    order=true;
}

void General::schowajOrder()
{
    order=false;
}

void General::checkForKeyPressed()
{
    Zolnierz::checkForKeyPressed();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
    {
        order = !order;
        if(order)
            General::nadajOrder();
        else
            General::schowajOrder();

    }
}

void General::update_sprite()
{
    Zolnierz::update_sprite();

    if (order)
        load_sprite("general_order.png");
    else if (bacznosc)
        load_sprite("general_bacznosc.png");
    else
        load_sprite("general_spocznij.png");
}
