#include "interactable.h"

interactable::interactable() {
}

interactable::~interactable() {
}

// True if hitboxes are overlapping
bool interactable::isCollide(interactable* other) {
}

// Handles collision between two objects
// Should be overloaded to handle specific interactions
void interactable::collide(interactable* other) {
}