#ifndef RYSOWALNYOBIEKT_H
#define RYSOWALNYOBIEKT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>


class RysowalnyObiekt
{
    public:
        RysowalnyObiekt(std::string image_filename);

        unsigned int Getpos_y() { return m_pos_y; }
        void Setpos_y(unsigned int val) { m_pos_y = val; }
        unsigned int Getpos_x() { return m_pos_x; }
        void Setpos_x(unsigned int val) { m_pos_x = val; }
        void checkForKeyPressed();
        void init_sprite(std::string image_filename);
        sf::Sprite get_sprite();
        sf::Texture texture;
        sf::Sprite sprite;

    protected:

    private:
        void update_sprite();
        unsigned int m_pos_y;
        unsigned int m_pos_x;
};

#endif // RYSOWALNYOBIEKT_H
