const int CHIP_8_ROWS = 32;
const int CHIP_8_COLS = 64;

class Renderer
{
private:
    int width = CHIP_8_COLS;
    int height = CHIP_8_ROWS;
    float scale;
    bool **display;

    void initDisplay();

public:
    Renderer(float);
    ~Renderer();
    bool setPixel(int, int);
    void clearDisplay();
};
