#include <SFML/Graphics.hpp>

const int CHIP_8_COLS = 64;
const int CHIP_8_ROWS = 32;

class Renderer
{
private:
    float scale;
    bool **display;

    void initDisplay();

public:
    static const unsigned int width = CHIP_8_COLS;
    static const unsigned int height = CHIP_8_ROWS;

    Renderer(float);
    ~Renderer();
    bool setPixel(int, int);
    void clearDisplay();
    void render(sf::RenderWindow*, sf::RectangleShape);
};
