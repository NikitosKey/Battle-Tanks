#ifndef MENU_WINDOW_H
#define MENU_WINDOW_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

#include "components/resizable_label/resizable_label.h"
#include "debug_log.h"
#include "ui/construction_layout/construction_layout.h"
#include "ui/levels_layout/levels_layout.h"

/**
 * \class MenuLayout
 * \brief A QGridLayout subclass for the menu layout.
 */
class MenuLayout : public QGridLayout {
    Q_OBJECT

public:
    /**
     * \brief Constructs a MenuLayout.
     */
    explicit MenuLayout();

    /**
     * \brief Destructor for MenuLayout.
     */
    ~MenuLayout() override;

private slots:
    /**
     * \brief Slot for handling the player button click event.
     */
    void playerButtonClicked();

    /**
     * \brief Slot for handling the construction button click event.
     */
    void constructionButtonClicked();

private:
    ResizableLabel *imageLabel_;  ///< Label to display the logo image.
    QPushButton *playerButton_;   ///< Button to start a single-player game.
    QPushButton *playersButton_;  ///< Button to start a multiplayer game.
    QPushButton
            *constructionButton_;  ///< Button to enter the construction mode.
    QSpacerItem *leftSpacer_;      ///< Spacer item for left alignment.
    QSpacerItem *rightSpacer_;     ///< Spacer item for right alignment.
};

#endif