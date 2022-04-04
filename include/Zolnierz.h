#ifndef ZOLNIERZ_H
#define ZOLNIERZ_H

#include <RysowalnyObiekt.h>


class Zolnierz : public RysowalnyObiekt
{
    public:
        Zolnierz() {}
        Zolnierz(std::string filename, int x,int y);
        void checkForKeyPressed();
        sf::Sprite  get_sprite();
        bool bacznosc;
        void update_sprite();

    protected:

    private:
        bool kierunek; //1 if right, 0 if left
        bool poprzedniKierunek;
        bool ruszylSie;
};

#endif // ZOLNIERZ_H
