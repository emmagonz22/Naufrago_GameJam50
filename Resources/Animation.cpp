//
// Created by emmagonz22 on 04/01/22.
//
#include "Animation.h"

Animation::Animation(int speed, std::vector<Image> frames){
    this->speed = speed;
    this->frames = frames;
    this->index = 0;
    this->timer = 0;
}
void Animation::tick(){
    timer++;
    if(timer > speed){
        index++;
        timer = 0;
        if(index == frames.size()){
            index = 0;
        }
    }
}
Image Animation::getCurrentFrame() {

    return frames[index];
}

void Animation::reset(){
    index = 0;
}