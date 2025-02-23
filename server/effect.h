#ifndef EFFECT_H
#define EFFECT_H

#include "gameObject.h"

class effect : public gameObject{
public:
    int duration; // Total number of ticks effect lasts
    int time;     // How long the effect has lasted
    vec2 pos;     
    float sizeX;    // Scalar
    float sizeY;    // Scalar

    effect();
    ~effect();
    void update();

private:
};

#endif // EFFECT_H