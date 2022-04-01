#ifndef RYSOWALNYOBIEKT_H
#define RYSOWALNYOBIEKT_H


class RysowalnyObiekt
{
    public:
        RysowalnyObiekt();

        unsigned int Getpos_y() { return m_pos_y; }
        void Setpos_y(unsigned int val) { m_pos_y = val; }
        unsigned int Getpos_x() { return m_pos_x; }
        void Setpos_x(unsigned int val) { m_pos_x = val; }
        void checkForKeyPressed();

    protected:

    private:
        unsigned int m_pos_y;
        unsigned int m_pos_x;
};

#endif // RYSOWALNYOBIEKT_H
