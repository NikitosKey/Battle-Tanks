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


class MenuLayout : public QGridLayout {
    Q_OBJECT

public:
    explicit MenuLayout();
    ~MenuLayout() override;

private slots:
    void playerButtonClicked();
    void constructionButtonClicked();

private:
    ResizableLabel *imageLabel;
    QPushButton *playerButton;
    QPushButton *playersButton;
    QPushButton *constructionButton;
    QSpacerItem *leftSpacer;
    QSpacerItem *rightSpacer;
};

#endif
