#include <iostream>
#include <SFML/Graphics.hpp>
#include "Renderer.h"
#include "Keyboard.h"

int main()
{
    float scale = 10;
    int windowWidth = Renderer::width * scale;
    int windowHeight = Renderer::height * scale;

    Renderer renderer(scale);
    Keyboard keyboard;

    renderer.setPixel(20, 20);
    renderer.setPixel(40, 15);

    // Create window
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Chip 8 Emulator");
    window.setFramerateLimit(60);

    // Create toggled pixel
    sf::RectangleShape pixel(sf::Vector2f(scale, scale));
    pixel.setFillColor(sf::Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        renderer.render(&window, pixel);
        window.display();
    }

    return 0;
}