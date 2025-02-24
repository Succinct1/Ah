#ifndef MOVEABLE_H
#define MOVEABLE_H

#include "interactable.h"


/// @brief Moveable are objects that move but are not simulated in box2d
/// Do not use this class without asking max
class moveable : public interactable {
public:
    
    // Position and angle are stored in interactable    
    int mass;
    vec2 vel;  // Velocity vetor
    vec2 acc;  // Acceleration vector
    vec2 mom;  // Momentum

    // Common values for calculations. Not guarenteed to be updated 
    vec2 vel2; // Velocity Squared
    int speed; // Dot product of velocity
    int maxSpeed; // Only checked once per tick

    // Rotational values. 
    float moi;  // Angular "mass"
    float velr; // Angular velocity
    float accr; // Angular acceleration

    float csf; // Coefficcient of static friction
    float ckf; // Coefficcient of kinetic friction
    float csfr; // Coefficcient of static rotational friction
    float ckfr; // Coefficcient of kinetic rotational friction

    moveable();
    ~moveable();
    virtual void move(); // Changes position and rotation according to velocities 
    virtual void update(); // Updates vel, acc, velr, and accr according to internal values only
private:
};

#endif // MOVEABLE_H