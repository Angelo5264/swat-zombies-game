#ifndef JUGADOR_H
#define JUGADOR_H

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
class Jugador{
    private:
        int vida;
        sf::Texture textura;
        sf::Sprite sprite;
    
    public:
        Jugador();
        int getVida() const;
        
        const sf::Sprite& getSprite() const;    
};

#endif