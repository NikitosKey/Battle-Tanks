#include "resizable_label.h"

ResizableLabel::ResizableLabel(QWidget *parent) : QLabel(parent) {
    setMinimumSize(100, 100);
}

void ResizableLabel::setPixmap(const QPixmap &pixmap) {
    originalPixmap = pixmap;
}

void ResizableLabel::resizeEvent(QResizeEvent *event) {
    QLabel::resizeEvent(event);
    updateScaledPixmap();
}

void ResizableLabel::updateScaledPixmap() {
    if (!originalPixmap.isNull()) {
        QLabel::setPixmap(originalPixmap.scaled(size(), Qt::KeepAspectRatio,
                                                Qt::SmoothTransformation));
    }
}

ResizableLabel::~ResizableLabel() = default;
