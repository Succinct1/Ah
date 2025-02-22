#ifndef ENTITY_H
#define ENTITY_H

#include "destructable.h"
#include "moveable.h"
#include <vector>

class entity : public destructable{
public:
    // List of everything that is interacting with the entity
    std::vector<moveable*> connectedObjects; 
    vec2 jerk;

    entity();
    ~entity();

    virtual void update() override;

private:
};

#endif // ENTITY_H