#ifndef WINDOW_H
#define WINDOW_H

#include "ui/levels_layout/levels_layout.h"
#include "ui/menu_layout/menu_layout.h"
#include <QWidget>


class Window : public QWidget {
    Q_OBJECT

public:
    Window();
    ~Window() override;

private:
    MenuLayout *menu;
};

#endif
