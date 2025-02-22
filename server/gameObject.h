#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <vector>
#include "vec2.h"

class gameObject {
public:
    gameObject();
    ~gameObject();
    int getAsset();
    virtual void remove();
private:
};

#endif // GAMEOBJECT_H