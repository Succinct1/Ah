#include "entity.h"

entity::entity() {
}

entity::~entity() {
}

void entity::update() {
    // Update the entity
    moveable::update();
    // Update all connected objects
    for (int i = 0; i < connectedObjects.size(); i++) {
        connectedObjects[i]->update();
    }
}