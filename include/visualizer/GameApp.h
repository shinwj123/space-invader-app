#pragma once
#ifndef FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H
#define FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H

namespace spaceInvaderApp {

class GameApp {

public:
    //empty constructor for space invader application
    GameApp();

    //setting up the background of the application
    void setup() override;

    //updates the acitivities in application
    void update() override;

};  //class space_invader_app

} //namespace spaceInvaderApp



#endif //FINAL_PROJECT_SHINWJ123_SPACE_INVADER_APP_H