#ifndef BATTLETANKS_GAME_WIDGET_H
#define BATTLETANKS_GAME_WIDGET_H

#include <QWidget>
#include <QGridLayout>

#include "debug_log.h"

namespace game {

    class GameWidget : public QWidget {
        Q_OBJECT

    public:
        explicit GameWidget(QWidget *parent = nullptr);
        ~GameWidget() override;
    };

}

#endif//BATTLETANKS_GAME_WIDGET_H
