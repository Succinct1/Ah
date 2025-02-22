#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "gameObject.h"

class interactable : public gameObject {
public:
    interactable();
    ~interactable();
    virtual bool isCollide(interactable* other);
    virtual void collide(interactable* other);
private:
};

#endif // INTERACTABLE_H