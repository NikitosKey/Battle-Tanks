#ifndef MENU_WINDOW_H
#define MENU_WINDOW_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

#include "components/resizable_qlabel/resizable_qlabel.h"

class MenuWindow : public QWidget {
  Q_OBJECT

public:
  MenuWindow();

private:
  ResizableQLabel *imageLabel;
  QGridLayout *layout;
  QPushButton *_1playerButton;
  QPushButton *_2playersButton;
  QPushButton *constructionButton;
  QSpacerItem *leftSpacer;
  QSpacerItem *rightSpacer;
};

#endif // MENU_WINDOW_H
