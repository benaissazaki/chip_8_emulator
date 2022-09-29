const int CHIP_8_ROWS = 32;
const int CHIP_8_COLS = 64;

class Renderer
{
private:
    int width;
    int height;
    bool **display;

    void initDisplay();

public:
    Renderer(int);
    ~Renderer();
    bool setPixel(int, int);
    void clearDisplay();
};
