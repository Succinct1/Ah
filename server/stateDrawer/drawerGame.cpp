#include "drawerGame.h"

drawerGame::drawerGame() : game() {
    b2BodyDef bodyDef = b2DefaultBodyDef();
    bodyDef.type = b2_dynamicBody;
    bodyDef.position = (b2Vec2){0.0f, 0.0f};
    b2BodyId bodyId = b2CreateBody(worldId, &bodyDef);
    boxes.push_back(bodyId);

    b2Polygon dynamicBox = b2MakeBox(1.0f, 1.0f);
    
    b2ShapeDef shapeDef = b2DefaultShapeDef();
    shapeDef.density = 1.0f;
    shapeDef.friction = 0.3f;

    b2CreatePolygonShape(bodyId, &shapeDef, &dynamicBox);

}

drawerGame::~drawerGame() {
}

void drawerGame::addRandBox() {

    b2BodyDef bodyDef = b2DefaultBodyDef();
    bodyDef.type = b2_dynamicBody;
    bodyDef.position = (b2Vec2){0.0f, 4.0f};
    b2BodyId bodyId = b2CreateBody(worldId, &bodyDef);
    boxes.push_back(bodyId);

    std::srand(std::time(nullptr));
    float randomX = static_cast<float>(std::rand() % 2001 - 1000);
    float randomY = static_cast<float>(std::rand() % 2001 - 1000);
    b2Polygon dynamicBox = b2MakeBox(randomX, randomY);

    b2ShapeDef shapeDef = b2DefaultShapeDef();
    shapeDef.density = 1.0f;
    shapeDef.friction = 0.3f;

    b2CreatePolygonShape(bodyId, &shapeDef, &dynamicBox);

}

void drawerGame::removeLastBox() {
    if (boxes.size() > 1) {
        b2DestroyBody(boxes.back());
        boxes.pop_back();
    }
}
