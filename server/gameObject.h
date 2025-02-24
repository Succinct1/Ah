#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <vector>
#include "vec2.h"

/// @brief GameObjects are objects that are tied to a game instance
class gameObject {
public:

    gameObject();
    ~gameObject();
    
    int getAsset(); // Gives ID indicating which asset to display
private:
};

#endif // GAMEOBJECT_H