#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Window.hpp>
#include "game.h"
#include <iostream>

int main() {
    // Create a window with a resolution of 800x600
    sf::RenderWindow window(sf::VideoMode(window_width, window_height), "SFML Window");



    sf::Texture texture;
    if (!texture.loadFromFile("C:\\AAAAAAAAAA\\test.png)))", sf::IntRect(0, 0, 512, 512))) {
        {
            std::cout << "Texture not loading!!!!!!!!!" << std::endl;
        }

        sf::Sprite sprite;
        sprite.setTexture(texture);

        // Main loop
        while (window.isOpen()) {
            // Process events
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    // Close the window when the close button is clicked
                    window.close();
                }
            }

            window.clear(sf::Color(0, 100, 150));

            // Draw the sprite (image) on the window
            window.draw(sprite);


            // Display the contents of the window
            window.display();
        }

        return 0;
    }
}
