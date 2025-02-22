# define MAX_PLAYERS 256
# define pixSize 100000
# define zoneSize 10000
# define zoneWidth pixSize/zoneSize
# define zoneCount zoneWidth*zoneWidth

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "gameObject.h"

class game {
public:

    //Game is divided into zones to reduce the number of objects that need to be checked for collisions
    std::vector<gameObject*>* gameObjects[zoneWidth][zoneWidth];
    game();
    ~game();
    void gameTick();

    int numPlayers;
private:
};

#endif // GAME_H