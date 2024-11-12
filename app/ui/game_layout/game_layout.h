#ifndef GAME_LAYOUT_H
#define GAME_LAYOUT_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

class GameLayout : public QGridLayout {
    Q_OBJECT

public:
    GameLayout();
    ~GameLayout() override;

private:
};

#endif
