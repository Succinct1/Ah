#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "gameObject.h"
#include "hitbox.h"

class interactable : public gameObject {
public:
    vec2 pos; // Position   
    float angle; // -pi to pi radians

    hitbox* hitbox;

    interactable();
    ~interactable();
    virtual bool isCollide(interactable* other);
    virtual void collide(interactable* other);
private:
};

// Function for collision detection
bool checkCollision(const rectangle& rect1, const rectangle& rect2);
bool checkCollision(const rectangle& rect, const circle& circ);
bool checkCollision(const rectangle& rect, const polygon& poly);
bool checkCollision(const circle& circ1, const circle& circ2);
bool checkCollision(const circle& circ, const polygon& poly);
bool checkCollision(const polygon& poly1, const polygon& poly2);


#endif // INTERACTABLE_H