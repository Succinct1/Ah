#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <vector>
#include "vec2.h"

class gameObject {
public:

    bool isValid; // False if object should be deleted
    gameObject();
    ~gameObject();
    
    int getAsset(); // Gives ID indicating which asset to display
    virtual void remove();
private:
};

#endif // GAMEOBJECT_H