#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class player : public entity{
public:
    int playerID;
    bool left,right,up,down; // Buttons pressed
    player();
    ~player();

private:
};

#endif // PLAYER_H