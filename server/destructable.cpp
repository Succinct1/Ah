#include "destructable.h"

destructable::destructable(int health, int maxHealth, int armor):maxHealth(maxHealth), health(health), armor(armor){}

destructable::~destructable() {
}

// Take damage from an attack. Damage is reduced by armor
// 100 armor = 50% damage reduction
// 200 armor = 66.67% damage reduction
// 300 armor = 75% damage reduction
// etc.
void destructable::takeDamage(int damage) {
    health -= damage / (armor + 100);
}

void destructable::update() {
    if (health <= 0) {
        remove();
    }
    else if (health > maxHealth) {
        health = maxHealth;
    }
}