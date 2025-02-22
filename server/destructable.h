#ifndef DESTRUCTABLE_H
#define DESTRUCTABLE_H

#include "moveable.h"

class destructable : public moveable
{
public:
    int maxHealth;
    int health;
    int armor;
    destructable();
    ~destructable();
    virtual void takeDamage(int damage);
    void update() override;

private:
};

#endif // DESTRUCTABLE_H