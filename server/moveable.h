#ifndef MOVEABLE_H
#define MOVEABLE_H

#include "interactable.h"

class moveable : public interactable {
public:
    moveable();
    ~moveable();
    virtual void move();
    virtual void update();
private:
};

#endif // MOVEABLE_H