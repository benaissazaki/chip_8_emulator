#include <iostream>
#include "Renderer.h"

int main() {
    Renderer renderer(10);
    renderer.setPixel(20, 20);
    renderer.setPixel(40, 15);
    renderer.render();
    return 0;
}