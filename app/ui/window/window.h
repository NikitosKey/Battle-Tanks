#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

#include "ui/levels_layout/levels_layout.h"
#include "ui/menu_layout/menu_layout.h"

/**
 * \class Window
 * \brief A QWidget subclass for the main application window.
 */
class Window : public QWidget {
    Q_OBJECT

public:
    /**
     * \brief Constructs a Window.
     */
    Window();

    /**
     * \brief Destructor for Window.
     */
    ~Window() override;

private:
    MenuLayout *menu_;  ///< Layout for the menu.
};

#endif