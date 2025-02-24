// Creates an instance of the game
#include "game.h"

game::game(){

    // Initialize class values

    b2WorldDef worldDef = b2DefaultWorldDef();

    // Modify world definition here

    // worldDef.enableContinuous = false; // Objects can pass through eachother but performance is increased
    
    // Multithreading created here
    // worldDef.workerCount = 4;
    // worldDef.enqueueTask = myAddTaskFunction;
    // worldDef.finishTask = myFinishTaskFunction;
    // worldDef.userTaskContext = &myTaskSystem;

    worldId = b2CreateWorld(&worldDef);

    // Add bodies to world
    

}

game::~game() {

    b2DestroyWorld(worldId);
 
    // Nullify id for safety
    worldId = b2_nullWorldId;

    delete this;
}

void game::gameTick(){
    while (true) {
        // One thread does non world related tasks?
        // Thread gets data?

        // Handle player inputs and disconnects

        b2World_Step(worldId, timeStep, subStepCount);

        // Update states based on collisions

        // Add or remove players

        // Update effects

        // Send data?

        std::this_thread::sleep_for(std::chrono::duration<float>(timeStep));
    }
}

std::vector<int> game::getIds(vec2 tl, vec2 br) {
    std::vector<int> ids;
    // Get all ids in a square
    return ids;
}

int game::getData(vec2 tl, vec2 br, void* data) {
    // Get all data in a square
    return 0;
}