#ifndef resizableqlabel_h
#define resizableqlabel_h

#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QResizeEvent>
#include <QPixmap>

class ResizableQLabel : public QLabel {
    QPixmap originalPixmap;

public:
    ResizableQLabel(QWidget* parent = nullptr) : QLabel(parent) {
        setMinimumSize(100, 100);
    }

    void setPixmap(const QPixmap& pixmap);

protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    void updateScaledPixmap();
};

#endif
