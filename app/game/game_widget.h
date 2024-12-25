#ifndef BATTLETANKS_GAME_WIDGET_H
#define BATTLETANKS_GAME_WIDGET_H

#include <QGridLayout>
#include <QWidget>

#include "debug_log.h"

namespace game {

class GameWidget : public QWidget {
    Q_OBJECT

public:
    explicit GameWidget(QWidget *parent = nullptr);

    ~GameWidget() override;
};

}  // namespace game

#endif  // BATTLETANKS_GAME_WIDGET_H
