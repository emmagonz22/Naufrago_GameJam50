//
// Created by emmagonz22 on 04/02/22.
//

#include "Button.h"
Button::Button(){
    this->xPos = GetScreenWidth()/2;
    this->yPos = GetScreenHeight()/2;
    this->width = 64;
    this->height = 20;
}
Button::Button(int xPos, int yPos, int width, int height, std::string buttonText){
    this->xPos = xPos;
    this->yPos = yPos;
    this->width = width;
    this->height = height;
    this->buttonText = buttonText;
}
// makes an image a button
Button::Button(int xPos, int yPos, int width, int height, Image buttonImage){
    this->xPos = xPos;
    this->yPos = yPos;
    this->width = width;
    this->height = height;
    this->buttonImage = buttonImage;
}

void Button::reset(){
    pressedCounter = -1;
    pressed = false;
}
void Button::tick(){
    pressedCounter--;
    if(pressedCounter == 0){
        pressed = false;
        pressedCounter = -1;
    }

}

void Button::mousePressed(int x, int y){
    if(xPos + width >= x && x >= xPos &&  yPos + height >= y && y >= yPos){
        pressed = true;
        pressedCounter = 10;
    }
}

void Button::render(){

    if(!this->buttonText.empty()) {

    }

}

bool Button::wasPressed(){
    return pressed;
}