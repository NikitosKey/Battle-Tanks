#include "resizable_qlabel.h"

ResizableQLabel::ResizableQLabel(QWidget *parent) : QLabel(parent) {
  setMinimumSize(100, 100);
}

void ResizableQLabel::setPixmap(const QPixmap &pixmap) {
  originalPixmap = pixmap;
}

void ResizableQLabel::resizeEvent(QResizeEvent *event) {
  QLabel::resizeEvent(event);
  updateScaledPixmap();
}

void ResizableQLabel::updateScaledPixmap() {
  if (!originalPixmap.isNull()) {
    QLabel::setPixmap(originalPixmap.scaled(size(), Qt::KeepAspectRatio,
                                            Qt::SmoothTransformation));
  }
}

ResizableQLabel::~ResizableQLabel() {}
