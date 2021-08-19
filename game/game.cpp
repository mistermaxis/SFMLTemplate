#include <game.hpp>

App::App()
{ 
    r = g = b = 0;
    a = 255;
    rect.setFillColor(sf::Color(r, g, b, a));
    rect.setSize(sf::Vector2f(40.f, 100.f));
    rect.setPosition(sf::Vector2f(300.f, 200.f));
    
    appWindow.create(sf::VideoMode(600u, 400u), "SFML Template");
}

void App::run()
{
    while (appWindow.isOpen())
    {
        sf::Event appEvent;

        while (appWindow.pollEvent(appEvent))
        {
            if (appEvent.type == sf::Event::Closed)
            {
                appWindow.close();
            }
            if (appEvent.type == sf::Event::MouseButtonPressed)
            {
                if (r < 255)
                {
                    r += 20;
                }
                rect.setFillColor(sf::Color(r, g, b, a));
            }
        }

        appWindow.clear(sf::Color(200, 200, 200, 255));
        appWindow.draw(rect);
        appWindow.display();
    }
}