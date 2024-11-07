#include "ui/menu_window/menu_window.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MenuWindow w;
  w.show();
  return a.exec();
}
