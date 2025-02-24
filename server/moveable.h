#ifndef MOVEABLE_H
#define MOVEABLE_H

#include "interactable.h"


/// @brief Moveable are objects that might move during normal gameplay
class moveable : public interactable {
public:
    moveable();
    ~moveable();
    virtual void move(); // Changes position and rotation according to velocities 
    virtual void update(); // Updates vel, acc, velr, and accr according to internal values only
private:
};

#endif // MOVEABLE_H