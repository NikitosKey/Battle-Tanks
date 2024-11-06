#include "test_resizable_qlabel.h"
#include "resizable_qlabel.h"

void TestResizableQLabel::testPixmapScalingOnResize() {
    ResizableQLabel label;
    label.resize(200, 200);

    QPixmap pixmap(400, 400);
    pixmap.fill(Qt::red);

    label.setPixmap(pixmap);
    label.resizeEvent(new QResizeEvent(QSize(200, 200), QSize(400, 400))); // Принудительно вызываем событие
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
#include "test_resizable_qlabel.moc"
