#ifndef DESTRUCTABLE_H
#define DESTRUCTABLE_H

#include "moveable.h"

class destructable : public moveable
{
public:
    int maxHealth;
    int health;
    int armor;
    destructable(int maxHealth = 1, int health = 1, int armor = 0);
    ~destructable();
    virtual void takeDamage(int damage);
    void update() override;

private:
};

#endif // DESTRUCTABLE_H