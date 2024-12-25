#ifndef GAME_LAYOUT_H
#define GAME_LAYOUT_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

#include "debug_log.h"

/**
 * \class GameLayout
 * \brief A QGridLayout subclass for the game layout.
 */
class GameLayout : public QGridLayout {
    Q_OBJECT

public:
    /**
     * \brief Constructs a GameLayout.
     */
    GameLayout();

    /**
     * \brief Destructor for GameLayout.
     */
    ~GameLayout() override;

private:
    // Add private members and methods here if needed
};

#endif