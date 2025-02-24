#ifndef DESTRUCTABLE_H
#define DESTRUCTABLE_H

class destructable
{
public:
    int maxHealth;
    int health;
    int armor;
    destructable(int maxHealth = 1, int health = 1, int armor = 0);
    ~destructable();
    virtual void takeDamage(int damage);

private:
};

#endif // DESTRUCTABLE_H