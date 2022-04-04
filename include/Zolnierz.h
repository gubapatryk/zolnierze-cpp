#ifndef ZOLNIERZ_H
#define ZOLNIERZ_H

#include <RysowalnyObiekt.h>


class Zolnierz : public RysowalnyObiekt
{
    public:
        Zolnierz(std::string image_filename);
        void init_sprite(std::string image_filename);
        void checkForKeyPressed();
        sf::Sprite  get_sprite();

    protected:

    private:
        void update_sprite();
        int kierunek;
};

#endif // ZOLNIERZ_H
