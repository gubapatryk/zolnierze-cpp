#include "RysowalnyObiekt.h"
#include <iostream>
#include <SFML/Window/Event.hpp>
#include <Stale.h>

RysowalnyObiekt::RysowalnyObiekt(std::string image_filename)
{
    load_sprite(image_filename);
}

void RysowalnyObiekt::load_sprite(std::string image_filename)
{
        if (!texture.loadFromFile(ASSETS_FILEPATH + image_filename))
    {
        std::cout << "Blad wczytywania pliku, czy plik istnieje w folderze assets?";

    }
    else
    {
        sprite.setTexture(texture);

    }
}

void RysowalnyObiekt::update_sprite() {}

sf::Sprite  RysowalnyObiekt::get_sprite()
{
    update_sprite();
    return sprite;

}
