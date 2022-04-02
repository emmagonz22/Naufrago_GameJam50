#pragma once

#include <vector>
#include "raylib.h"
//
// Created by emmagonz22 on 04/01/22.
//

#ifndef UNTITLED1_ANIMATION_H
#define UNTITLED1_ANIMATION_H

#endif //UNTITLED1_ANIMATION_H


class Animation{
    private:
        int speed, index;
        int timer;
        std::vector<Image> frames;
        bool end = false;
    public:
        Animation(int speed, std::vector<Image> frames);
        void tick();
        Image getCurrentFrame();
        void reset();
};