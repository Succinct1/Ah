#ifndef ENEMY_H
#define ENEMY_H

#include "gameObject.h"
#include "destructable.h"
#include "moveable.h"

class enemy : public gameObject , public destructable, public moveable {
public:
    enemy();
    ~enemy();
    

private:
};

#endif // ENEMY_H