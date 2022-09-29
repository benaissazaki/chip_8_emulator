#include <iostream>
#include "Keyboard.h"

/* Public methods */
Keyboard::Keyboard()
{
    std::cout << "Keyboard created\n";
}

Keyboard::~Keyboard() {}

bool Keyboard::isChip8KeyPressed(short chip8Key)
{
    for (int i = 0; i < 16; i++)
    {
        if (this->keyMap[i].chip8KeyCode == chip8Key)
        {
            return this->keyMap[i].isPressed;
        }
    }
    return false;
}

void Keyboard::checkPressedKeys() 
{
    for (int i = 0; i < 16; i++)
    {
        this->keyMap[i].isPressed = sf::Keyboard::isKeyPressed(this->keyMap[i].keyboardKey);
    }
    
}