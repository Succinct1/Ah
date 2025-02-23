#include "interactable.h"

interactable::interactable() {
}

interactable::~interactable() {
}

// True if hitboxes are overlapping
bool interactable::isCollide(interactable* other) {
    
    // Offset hitboxes by their positions
    vec2 thisPos = this->pos;
    vec2 otherPos = other->pos;
    return false;
}

// Handles collision between two objects
// Should be overloaded to handle specific interactions
void interactable::collide(interactable* other) {
}

// Rectangle-Rectangle collision detection
bool checkCollision(const rectangle& rect1, const rectangle& rect2) {
    return !(rect1.br.x < rect2.tl.x || rect1.tl.x > rect2.br.x ||
             rect1.br.y < rect2.tl.y || rect1.tl.y > rect2.br.y);
}

// Circle-Circle collision detection
bool checkCollision(const circle& circ1, const circle& circ2) {
    float distance = std::sqrt(std::pow(circ1.radius - circ2.radius, 2) + std::pow(circ1.radius - circ2.radius, 2));
    return distance < (circ1.radius + circ2.radius);
}

// Polygon-Polygon collision detection using SAT (Separating Axis Theorem)
bool checkCollision(const polygon& poly1, const polygon& poly2) {
    // Implement SAT algorithm here
    // This is a placeholder implementation
    return false;
}