#ifndef GENERAL_H
#define GENERAL_H

#include <Zolnierz.h>


class General : public Zolnierz
{
    public:
        General();
        General(int x,int y);
        void nadajOrder();
        void schowajOrder();
        void checkForKeyPressed();
        void update_sprite();

    protected:

    private:
        bool order;
};

#endif // GENERAL_H
