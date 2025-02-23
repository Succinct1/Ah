# define MAX_PLAYERS 256
# define pixSize 100000
# define zoneSize 10000
# define zoneWidth pixSize/zoneSize
# define zoneCount zoneWidth*zoneWidth

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "player.h"
#include "effect.h"
class game {
public:

    //Game is divided into zones to reduce the number of objects that need to be checked for collisions
    std::vector<interactable*>* interactables[zoneWidth][zoneWidth];
    std::vector<int> players; // List of player IDs in this game
    std::vector<effect*> effects; // Currently ongoing effects
    std::vector<moveable*> moveables; // moveables
    std::vector<gameObject*> gameObjects; // Other gameObjects

    game();
    ~game();
    void gameTick();

    int numPlayers;
private:
};

#endif // GAME_H