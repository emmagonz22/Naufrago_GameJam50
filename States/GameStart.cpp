//
// Created by emmagonz22 on 04/01/22.
//

#include "GameStart.h"

GameStart::GameStart() {

    //Load everything needed
    buttonSound=LoadSound("Sounds/buttonSound.mp3");
    startMusic=LoadMusicStream("Sounds/bensound-retrosoul.mp3");
    backgroundImg=LoadImage("../Resources/Images/background.png"); //Load menu screen

    text = "Start";
    titleText = "Dinner dash";
    startButton = new Button(GetScreenWidth() / 2, GetScreenHeight(), 30, 30, text);

}
void GameStart::tick() {
    if(!startMusic.looping){ // Beginning music play
        PlayMusicStream(startMusic);
    }
    startButton->tick();
    if(startButton->wasPressed()){
        PlaySound(buttonSound);
        StopMusicStream(startMusic);
        setNextState("Game");
        setFinished(true);

    }
}
void GameStart::render() {
    //Draw the panel with instruction

}

void GameStart::keyPressed(int key){
    switch (key) //Press h to hide the instruction
    {

    }
}

void GameStart::mousePressed(int x, int y, int button){
    startButton->mousePressed(x, y);
}

void GameStart::reset(){
    setFinished(false);
    setNextState("");
    startButton->reset();
}