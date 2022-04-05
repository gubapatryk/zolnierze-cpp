#ifndef MAJOR_H
#define MAJOR_H

#include <Zolnierz.h>


class Major : public Zolnierz
{
    public:
        Major();
        Major(int x,int y);
        void wydajRozkaz();
        void odwolajRozkaz();
        void checkForKeyPressed();
        void update_sprite();

    protected:

    private:
        bool rozkaz;
};

#endif // MAJOR_H
