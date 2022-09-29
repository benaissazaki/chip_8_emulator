#include <iostream>
#include "Renderer.h"
#include "Keyboard.h"

int main() {
    float scale = 10;
    Renderer renderer(scale);
    Keyboard keyboard;
    renderer.setPixel(20, 20);
    renderer.setPixel(40, 15);
    renderer.render();
    return 0;
}