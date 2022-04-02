//
// Created by emmagonz22 on 04/01/22.
//

#include "States.h"
#include "raylib.h"
class GameStart : public States {
private:
    Image backgroundImg;
    Button *startButton;
    Image textImage;
public:
    GameStart();
    void setup();
    void tick();
    void render();
    void keyPressed(int key);
    void mousePressed(int x, int y, int button);
    void reset();
    string text;
    const char *titleText;
    Music startMusic;
    Sound buttonSound;

};