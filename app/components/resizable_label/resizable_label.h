#ifndef RESIZABLE_LABEL_H
#define RESIZABLE_LABEL_H

#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QResizeEvent>
#include <QVBoxLayout>
#include <QWidget>

class ResizableLabel : public QLabel {
    QPixmap originalPixmap;

public:
    explicit ResizableLabel(QWidget *parent = nullptr);

    ~ResizableLabel() override;

    void setPixmap(const QPixmap &pixmap);

    void resizeEvent(QResizeEvent *event) override;

private:
    void updateScaledPixmap();
};

#endif
