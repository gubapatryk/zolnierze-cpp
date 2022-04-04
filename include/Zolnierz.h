#ifndef ZOLNIERZ_H
#define ZOLNIERZ_H

#include <RysowalnyObiekt.h>


class Zolnierz : public RysowalnyObiekt
{
    public:
        Zolnierz(int x,int y);
        void checkForKeyPressed();
        sf::Sprite  get_sprite();

    protected:

    private:
        void update_sprite();
        bool kierunek; //1 if right, 0 if left
        bool poprzedniKierunek;
        bool ruszylSie;
        std::string stan;
};

#endif // ZOLNIERZ_H
