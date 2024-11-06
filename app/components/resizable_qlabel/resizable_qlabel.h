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
    ResizableQLabel(QWidget* parent = nullptr);
    
    ~ResizableQLabel();

    void setPixmap(const QPixmap& pixmap);

    void resizeEvent(QResizeEvent* event) override;

private:
    void updateScaledPixmap();
};

#endif
