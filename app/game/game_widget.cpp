//
// Created by Никита Морозов on 19.11.2024.
//

#include "game_widget.h"

namespace game {

GameWidget::GameWidget(QWidget *parent) : QWidget(parent) {
    auto *layout = new QGridLayout;
    this->setLayout(layout);
    this->setStyleSheet("background-color: black;");
    DEBUG_LOG("GameWidget created!");
}

GameWidget::~GameWidget() {
    qDeleteAll(this->children());
    DEBUG_LOG("GameWidget deleted!");
}
}  // namespace game