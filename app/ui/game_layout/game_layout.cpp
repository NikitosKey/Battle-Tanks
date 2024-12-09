#include "game_layout.h"

GameLayout::GameLayout() {


    DEBUG_LOG("GameLayout created!");
}

GameLayout::~GameLayout() {
    qDeleteAll(this->children());
    DEBUG_LOG("GameLayout deleted!");
}
