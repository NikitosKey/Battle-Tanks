#ifndef CONSTRUCTION_LAYOUT_H
#define CONSTRUCTION_LAYOUT_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

#include "debug_log.h"

class ConstructionLayout : public QGridLayout {
    Q_OBJECT

public:
    ConstructionLayout();
    ~ConstructionLayout() override;

private:
};

#endif
