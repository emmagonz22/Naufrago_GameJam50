//
// Created by emmagonz22 on 04/01/22.
//

#pragma once

#include <string>
#include "raylib.h"
#include "../UI/Button.h"
using namespace std;
class States{
public:
    States(){}
    virtual void reset()=0;
    virtual void tick()=0;
    virtual void render()=0;
    virtual void keypressed(int key)=0;
    virtual void mousePressed(int x, int y, int button) = 0;
    virtual void mouseReleased(int key) = 0;

    void mouseMoved(int x, int y){}
    void mouseDragged(int x, int y, int button){}
    void mouseReleased(int x, int y, int button){}
    void mouseEntered(int x, int y){}
    void mouseExited(int x, int y){}
    void windowResized(int w, int h){}
    void gotMessage(char msg){}
    void dragEvent(string msg){}

    bool hasFinished(){
        return finished;
    }
    string getNextState(){
        return nextState;
    }
    void setFinished(bool finished){
        this->finished = finished;
    }
    void setNextState(string nextState){
        this->nextState = nextState;
    }
private:
    string nextState;
    bool finished = false;
};
