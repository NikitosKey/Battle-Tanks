#ifndef LEVELS_WINDOW_H
#define LEVELS_WINDOW_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

class LevelsLayout : public QGridLayout {
    Q_OBJECT

public:
    LevelsLayout();
    ~LevelsLayout() override;

private:
};

#endif
