#ifndef MAPA_H
#define MAPA_H

#include <RysowalnyObiekt.h>


class Mapa : public RysowalnyObiekt
{
    public:
        Mapa();
        void checkForKeyPressed();
        int id;

    protected:

    private:
};

#endif // MAPA_H
