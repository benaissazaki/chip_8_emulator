const int CHIP_8_ROWS = 32;
const int CHIP_8_COLS = 64;

class Renderer
{
private:
    static const unsigned int width = CHIP_8_COLS;
    static const unsigned int height = CHIP_8_ROWS;
    float scale;
    bool **display;

    void initDisplay();

public:
    Renderer(float);
    ~Renderer();
    bool setPixel(int, int);
    void clearDisplay();
    void render();
};
