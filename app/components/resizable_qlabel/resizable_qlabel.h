#ifndef resizableqlabel_h
#define resizableqlabel_h

#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QResizeEvent>
#include <QVBoxLayout>
#include <QWidget>

class ResizableQLabel : public QLabel {
  QPixmap originalPixmap;

public:
  ResizableQLabel(QWidget *parent = nullptr);

  ~ResizableQLabel();

  void setPixmap(const QPixmap &pixmap);

  void resizeEvent(QResizeEvent *event) override;

private:
  void updateScaledPixmap();
};

#endif
