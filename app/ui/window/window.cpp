#include "window.h"

Window::Window() {
    setWindowTitle("BattleTanks");
    setStyleSheet("background-color: black;");
    menu = new MenuLayout();
    setLayout(menu);
}

Window::~Window() {
    qDeleteAll(this->children());
    deleteLater();
}
