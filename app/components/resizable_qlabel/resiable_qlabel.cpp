#include "resizable_qlabel.h"

void ResizableQLabel::setPixmap(const QPixmap& pixmap) {
    originalPixmap = pixmap;
    QLabel::setPixmap(pixmap);
    updateScaledPixmap();
}

void ResizableQLabel::resizeEvent(QResizeEvent* event) {
    QLabel::resizeEvent(event);
    updateScaledPixmap(); // Scale the pixmap every time the label is resized
}

void ResizableQLabel::updateScaledPixmap() {
    if (!originalPixmap.isNull()) {
        // Scale pixmap proportionally, but allow the window to shrink
        QLabel::setPixmap(originalPixmap.scaled(size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
