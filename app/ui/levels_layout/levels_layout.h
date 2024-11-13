#ifndef LEVELS_WINDOW_H
#define LEVELS_WINDOW_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QString>
#include <QWidget>

#include "debug_log.h"
#include "ui/game_layout/game_layout.h"

class LevelsLayout : public QGridLayout {
    Q_OBJECT

public:
    LevelsLayout();
    ~LevelsLayout() override;

private slots:
    static void beforeButtonClicked();
    static void levelButtonClicked();
    static void nextButtonClicked();

private:
    QPushButton *beforeButton;
    QPushButton *levelButton;
    QPushButton *nextButton;
};

#endif
