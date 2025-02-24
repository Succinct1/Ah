#ifndef PLAYER_H
#define PLAYER_H

#include "destructable.h"
#include "moveable.h"

class player : public destructable, public moveable {
public:
    int playerID;
    bool left,right,up,down; // Buttons pressed
    player();
    ~player();

private:
};

#endif // PLAYER_H