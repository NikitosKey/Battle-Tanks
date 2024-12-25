#ifndef LEVELS_WINDOW_H
#define LEVELS_WINDOW_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QString>
#include <QtWidgets/QWidget>

#include "debug_log.h"
#include "ui/game_layout/game_layout.h"

/**
 * \class LevelsLayout
 * \brief A QGridLayout subclass for the levels layout.
 */
class LevelsLayout : public QGridLayout {
    Q_OBJECT

public:
    /**
     * \brief Constructs a LevelsLayout.
     */
    LevelsLayout();

    /**
     * \brief Destructor for LevelsLayout.
     */
    ~LevelsLayout() override;

private slots:
    /**
     * \brief Slot for handling the before button click event.
     */
    static void beforeButtonClicked();

    /**
     * \brief Slot for handling the level button click event.
     */
    void levelButtonClicked();

    /**
     * \brief Slot for handling the next button click event.
     */
    static void nextButtonClicked();

private:
    QPushButton *beforeButton_;  ///< Button to navigate to the previous level.
    QPushButton *levelButton_;   ///< Button to select the current level.
    QPushButton *nextButton_;    ///< Button to navigate to the next level.
};

#endif