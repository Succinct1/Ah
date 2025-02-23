#include "effect.h"

effect::effect() {
}

effect::~effect() {
}

void effect::update() {
    if (time >= duration){
        isValid = false;
    }
    else{
        time++;
    }
}