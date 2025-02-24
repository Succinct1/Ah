#ifndef DRAWERGAME_H
#define DRAWERGAME_H

#include "game.h"

class drawerGame : public game {
public:
    std::vector<b2BodyId> boxes;
    drawerGame();
    ~drawerGame ();
    void addRandBox();
    void removeLastBox();
    void gameTick() override;
    int getData(vec2 tl, vec2 br, void* data) override;
private:
};

#endif // DRAWERGAME_H