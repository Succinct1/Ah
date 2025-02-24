#include "game.h"

main() {
    game* myGame = new game();
    myGame->gameTick();
    delete myGame;
    return 0;
}