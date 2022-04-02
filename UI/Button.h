//
// Created by emmagonz22 on 04/02/22.
//


#pragma once
#include <string>
#include "raylib.h"

class Button {

public:
    Button();
    Button(int, int, int, int, std::string);
    Button(int, int, int, int, Image);
    void mousePressed(int x, int y);
    void tick();
    void render();
    bool wasPressed();
    void reset();

private:
    int xPos, yPos, width, height;
    Image buttonImage;
    Image clickedButtonImage;
    bool pressed = false;
    int pressedCounter = -1;
    std::string buttonText = "";
};