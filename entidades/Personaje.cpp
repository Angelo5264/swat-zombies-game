#include "Personaje.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include <iostream>
namespace Personaje{
    sf::Sprite personaje( sf::Texture texture){
        if(!texture.loadFromFile("asssets/superviviente.png")){
            std :: cout << "La imagen no se cargo";
            return sf::Sprite();
        }
        sf::Sprite sprite;
        sprite.setTexture(texture);
        return sprite;
    }
}