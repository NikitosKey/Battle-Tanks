#include "test_resizable_label.h"

#include "resizable_label.h"

void TestResizableQLabel::testPixmapScalingOnResize() {
    ResizableLabel label;
    label.resize(200, 200);

    QPixmap pixmap(400, 400);
    pixmap.fill(Qt::red);

    label.setOriginalPixmap(pixmap);
    label.resizeEvent(new QResizeEvent(QSize(200, 200), QSize(400, 400)));
    QVERIFY(!label.pixmap().isNull());
    QCOMPARE(label.pixmap().size(), QSize(200, 200));

    label.resize(300, 200);
    label.resizeEvent(new QResizeEvent(QSize(300, 200), QSize(200, 200)));
    QCOMPARE(label.pixmap().size(), QSize(200, 200));

    label.resize(200, 300);
    label.resizeEvent(new QResizeEvent(QSize(200, 300), QSize(300, 200)));
    QCOMPARE(label.pixmap().size(), QSize(200, 200));
}

QTEST_MAIN(TestResizableQLabel)
#include "test_resizable_label.moc"
