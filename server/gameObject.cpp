#include "gameObject.h"

gameObject::gameObject() {
}

gameObject::~gameObject() {
}

int gameObject::getAsset() {
    return 0;
}
void gameObject::remove() {
    delete this;
}