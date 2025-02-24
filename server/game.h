# define MAX_PLAYERS 256
# define pixSize 100000
# define zoneSize 10000
# define zoneWidth pixSize/zoneSize
# define zoneCount zoneWidth*zoneWidth

# define tps 60.0
# define step 1/tps
# define subSteps 4

#ifndef GAME_H
#define GAME_H

#include <vector>
#include <thread>
#include <chrono>

#include "player.h"
#include "effect.h"
#include "box2d/box2d.h"

class game {
public:

    int gameID; // Used for accessing this simulation
    int subStepCount = subSteps; // Number of substeps to take each tick

    float timeStep = step; // Time between game ticks

    std::vector<player*> players; // List of player in this game
    std::vector<effect*> effects; // Currently ongoing effects
    std::vector<gameObject*> gameObjects; // Other gameObjects
    std::vector<int> updateList; // List of objects to update

    b2WorldId worldId;

    game();
    ~game();

    virtual void gameTick();

    std::vector<int> getIds(vec2 tl, vec2 br); // Get every id in a square
    virtual int getData(vec2 tl, vec2 br, void* data); // Get all data in a square

    virtual void addPlayer(int playerID = 0);
    virtual void addEffect(effect* newEffect);
    virtual void removePlayer(int playerID = 0);
    virtual void removeEffect(effect* oldEffect);

    int numPlayers;
private:
};

#endif // GAME_H