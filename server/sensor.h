#ifndef SENSOR_H
#define SENSOR_H

#include "moveable.h"
#include "hitbox.h"

class sensor{
public:

    // Box2d user data has pointer to get the moveable detected
    hitbox* hitbox;
    sensor();
    ~sensor();
    void onEnter(moveable* object);
    void onExit(moveable* object);

private:
};

#endif // SENSOR_H