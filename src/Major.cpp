#include "Major.h"

Major::Major(int x, int y): Zolnierz("major_bacznosc.png",x,y)
{
    rozkaz = false;
}
void Major::wydajRozkaz()
{
    rozkaz=true;
}

void Major::odwolajRozkaz()
{
    rozkaz=false;
}

void Major::checkForKeyPressed()
{
    Zolnierz::checkForKeyPressed();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
    {
        rozkaz = !rozkaz;
        if(rozkaz)
            Major::wydajRozkaz();
        else
            Major::odwolajRozkaz();

    }
}

void Major::update_sprite()
{
    Zolnierz::update_sprite();

    if (rozkaz)
        load_sprite("major_rozkaz.png");
    else if (bacznosc)
        load_sprite("major_bacznosc.png");
    else
        load_sprite("major_spocznij.png");
}
