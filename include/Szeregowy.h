#ifndef SZEREGOWY_H
#define SZEREGOWY_H

#include <Zolnierz.h>


class Szeregowy : public Zolnierz
{
    public:
        Szeregowy() {};
        Szeregowy(int x,int y);
        void prezentujBron();
        void chowajBron();
        void checkForKeyPressed();
        void update_sprite();

    protected:

    private:
        bool bron;
};

#endif // SZEREGOWY_H
