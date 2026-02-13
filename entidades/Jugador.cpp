#include "Jugador.h"
#include <stdexcept>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

  
Jugador :: Jugador() : vida(100){
            if(!textura.loadFromFile("assets/superviviente.png")){
                throw std::runtime_error("No se pudo cargar la imagen del jugador");
            }        
            sprite.setTexture(textura);
        }
        int Jugador::getVida() const{
            return vida;
        }
        const sf::Sprite& Jugador::getSprite()const{
            return sprite;
        }
        