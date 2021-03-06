#pragma once
#ifndef FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H
#define FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H

#include <cinder/ImageIo.h>
#include <cinder/gl/Texture.h>
#include <cinder/Tween.h>
#include <cinder/app/App.h>
#include <poSpritesheet/poSpritesheet.h>
#include <poSpritesheet/poSpritesheetAnimation.h>
#include <cinder/audio/audio.h>
#include <ciWMFVideoPlayer.h>
#include <cinder/params/Params.h>

#include "../src/GameEngine.h"


namespace spaceInvaderApp {
using std::chrono::time_point;
using std::chrono::system_clock;
using cinder::app::KeyEvent;


enum class Game {
    kStartScreen,
    kPlaying,
    kGameOver,
};

class GameApp {

public:
    //empty constructor for space invader application
    GameApp();

    //setting up the background of the application
    void setup() override;

    //updates the acitivities in application
    void update() override;

    //drawing for the game
    void draw() override;

    //clicking the down key
    void keyDown(KeyEvent keyEvent) override;

    //clicking the up key
    void keyUp(KeyEvent keyEvent) override;

    //helper function for NextWave(): setting animation for wave
    void SetWaveAnimation(int wave_number);

    //drawing the wave
    void DrawInvaderWave();

    //helper function for Draw(): drawing player
    void DrawPlayer();

    //helper function for Draw(): drawing projectile from player
    void DrawPlayerProjectile();

    //helper function for Draw(): drawing projectile from invader
    void DrawInvaderProjectile();

    //helper function for Draw(): drawing the starting screen
    void DrawStartScreen();

    //helper function for Draw(): drawing the game over screen
    void DrawGameOver();

private:
    space_invader::GameEngine gameEngine;

    Game game;

    ciWMFVideoPlayer m_Video;

    bool gameover_ = false;

    time_point<system_clock> last_time_invader;
    time_point<system_clock> last_time_player;
    time_point<system_clock> last_time_projectile;
    time_point<system_clock> last_time_invader_projectile;

    int invader_speed = 400;
    int player_speed = 20;
    int projectile_speed = 12;
    int invader_projectile_speed = 19;

    int wave_count = 0;


};  //class space_invader_app

} //namespace spaceInvaderApp



#endif //FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H
