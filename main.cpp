#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "entidades/Jugador.h"

int main(){
    //creamos una ventana los dos puntos se refieren a crear una insstancia 
    sf::RenderWindow window (sf::VideoMode(800,600),"Swat Zombies Game");
    Jugador jugador;
    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if(event.type == sf::Event::Closed){
                window.close();
            }        
        }
        window.clear(sf::Color::Black);
        window.draw(jugador.getSprite());
        window.display();
    
    }
    
    return 0;
}