#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "gameObject.h"
#include "hitbox.h"
#include "box2d.h"

// Every object that is part of simulation should inherit from this class
// Represents a b2Body
class interactable {
public:
    b2BodyId Body;
    int id;

    int collideMask;    
    int objectCategory;
    float mass;
    float friction;
    float elasticity;

    // Thread safe data
    void* data; // Data to send to user
    int dataLength; // Length of data

    hitbox* hitbox;

    interactable();
    ~interactable();
    
    // These need parameters but idk what they are
    virtual void addSensor();
    virtual void removeSensor();
    virtual void addHitbox();
    virtual void removeHitbox();
    virtual void addJoint(); 
    virtual void removeJoint(b2JointId jointId);

private:
};


#endif // INTERACTABLE_H