#include "gameObject.cpp"
#include "game.h"

int main(int argc, char* argv[]){
    game* myGame = new game();
    myGame->gameTick();
    delete myGame;
    return 0;
}

