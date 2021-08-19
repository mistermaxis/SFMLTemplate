#include <SFML/Graphics.hpp>

class App
{
private:
    sf::RenderWindow appWindow;
    sf::RectangleShape rect;
    unsigned char r, g, b, a;
public:
    App();
    void run();
};
