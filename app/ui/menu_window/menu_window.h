#ifndef MENU_WINDOW_H
#define MENU_WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

#include "components/resizable_qlabel/resizable_qlabel.h"

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
        MenuWindow();

private:
    ResizableQLabel *imageLabel;
    QVBoxLayout *layout;
    QPushButton *_1playerButton;
    QPushButton *_2playersButton;
    QSpacerItem *leftSpacer;
    QSpacerItem *rightSpacer;
    QPushButton *constructionButton;


};


#endif //MENU_WINDOW_H
