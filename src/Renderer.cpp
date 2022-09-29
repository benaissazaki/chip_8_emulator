#include <iostream>
#include "Renderer.h"

/* Private methods */
void Renderer::initDisplay() {
    this->display = (bool**) malloc(this->width * sizeof(bool*));

    for (int i = 0; i < this->width; i++)
    {
        this->display[i] = (bool*) malloc(this->height * sizeof(bool));
    }
    
}


/* Public methods */
Renderer::Renderer(int scale)
{
    this->width = scale * CHIP_8_COLS;
    this->height = scale * CHIP_8_ROWS;

    initDisplay();
    std::cout << "Renderer created with scale " << scale << std::endl;
}

Renderer::~Renderer()
{
    for (int i = 0; i < this->width; i++)
    {
        free(this->display[i]);
    }
    free(this->display);
    
    std::cout << "Renderer destroyed\n";
}

bool Renderer::setPixel(int x, int y) {
    // Wrap if outside the bounds of the display
    if (x > this->width)
    {
        x -= this->width;
    } else if (x < 0)
    {
        x += this->width;
    }

    if (y > this->height)
    {
        y -= this->height;
    } else if (y < 0)
    {
        y += this->height;
    }
    
    // Toggle the pixel's value
    this->display[x][y] = !this->display[x][y];

    // Returns whether a pixel has been erased or no
    return !this->display[x][y];
}

void Renderer::clearDisplay() {
    for (int i = 0; i < this->width; i++)
    {
        for (int j = 0; j < this->height; j++)
        {
            this->display[i][j] = 0;
        }
        
    }
    
}