#include "window.h"

namespace {
const char* const kWindowTitle = "BattleTanks";
const char* const kBackgroundColor = "background-color: black;";
}  // namespace

Window::Window() {
    setWindowTitle(kWindowTitle);
    setStyleSheet(kBackgroundColor);
    menu_ = new MenuLayout();
    setLayout(menu_);
}

Window::~Window() {
    qDeleteAll(this->children());
    deleteLater();
}