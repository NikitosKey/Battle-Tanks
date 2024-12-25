#include "components/resizable_label/resizable_label.h"

namespace {
const int kMinWidth = 100;
const int kMinHeight = 100;
}  // namespace

ResizableLabel::ResizableLabel(QWidget *parent) : QLabel(parent) {
    setMinimumSize(kMinWidth, kMinHeight);
}

void ResizableLabel::setOriginalPixmap(const QPixmap &pixmap) {
    originalPixmap_ = pixmap;
}

void ResizableLabel::resizeEvent(QResizeEvent *event) {
    QLabel::resizeEvent(event);
    updateScaledPixmap();
}

void ResizableLabel::updateScaledPixmap() {
    if (!originalPixmap_.isNull()) {
        QLabel::setPixmap(originalPixmap_.scaled(size(), Qt::KeepAspectRatio,
                                                 Qt::SmoothTransformation));
    }
}

ResizableLabel::~ResizableLabel() = default;