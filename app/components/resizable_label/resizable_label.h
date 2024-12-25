#ifndef RESIZABLE_LABEL_H
#define RESIZABLE_LABEL_H

#include <QLabel>
#include <QPixmap>
#include <QResizeEvent>

/**
 * \class ResizableLabel
 * \brief A QLabel subclass that resizes its pixmap while maintaining the aspect
 * ratio.
 */
class ResizableLabel : public QLabel {
    Q_OBJECT

public:
    /**
     * \brief Constructs a ResizableLabel with an optional parent.
     * \param parent The parent widget.
     */
    explicit ResizableLabel(QWidget *parent = nullptr);

    /**
     * \brief Sets the original pixmap to be displayed and resized.
     * \param pixmap The original QPixmap.
     */
    void setOriginalPixmap(const QPixmap &pixmap);

    /**
     * \brief Destructor for ResizableLabel.
     */
    ~ResizableLabel() override;

protected:
    /**
     * \brief Handles the resize event to update the pixmap size.
     * \param event The resize event.
     */
    void resizeEvent(QResizeEvent *event) override;

private:
    /**
     * \brief Updates the pixmap to fit the current size while maintaining the
     * aspect ratio.
     */
    void updateScaledPixmap();

    QPixmap originalPixmap_;  ///< The original pixmap to be resized.
};

#endif