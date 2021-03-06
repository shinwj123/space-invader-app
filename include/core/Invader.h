#pragma once
#ifndef FINAL_PROJECT_SHINWJ123_INVADER_H
#define FINAL_PROJECT_SHINWJ123_INVADER_H

namespace space_invader_game {
    //class for invader
class Invader {
public:
    //constructor for invader
    Invaders(const Location& location);

    Location GetLocation() const;
    Location SetLocation(const Location&);

    void SetAlive(bool alive);
    bool IsAlive() const;

    constexpr static float WIDTH = 50;
    constexpr static float HEIGHT = 27;

    int kAliensPerRow = 7;

private:
    Location location_;
    bool alive_;

}; //class invader
} //namespace space_invader_game



#endif //FINAL_PROJECT_SHINWJ123_INVADER_H
