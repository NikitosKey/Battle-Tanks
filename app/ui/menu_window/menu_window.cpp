#include "menu_window.h"
#include "components/resizable_qlabel/resizable_qlabel.h"

MenuWindow::MenuWindow()
{
    this->setStyleSheet("background-color: black;");
    this->setWindowTitle("Menu");

    ResizableQLabel *imageLabel = new ResizableQLabel(this);
    imageLabel->setPixmap(QPixmap(":/assets/ui/menu/logo.png"));
    imageLabel->setAlignment(Qt::AlignCenter);

    QPushButton *_1playerButton = new QPushButton("1 Player", this);
    QPushButton *_2playersButton = new QPushButton("2 Players", this);
    QPushButton *constructionButton = new QPushButton("Constructon", this);
    //connect(_1playerButton, &QPushButton::clicked, qApp, &QCoreApplication::quit);


    int id = QFontDatabase::addApplicationFont(":/assets/fonts/Pixel Emulator.otf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont Buttonfont(family, 24);


    _1playerButton->setFont(Buttonfont);
    _2playersButton->setFont(Buttonfont);
    constructionButton->setFont(Buttonfont);

     
    QSpacerItem *leftSpacer = new QSpacerItem(100,100, QSizePolicy::Expanding, QSizePolicy::Expanding);
    QSpacerItem *rightSpacer = new QSpacerItem(100,100, QSizePolicy::Expanding, QSizePolicy::Expanding);


    QGridLayout *layout = new QGridLayout(this);

    layout->addWidget(imageLabel, 0, 0, 1, 3);
    layout->addWidget(_1playerButton, 1, 1, Qt::AlignLeft);
    layout->addWidget(_2playersButton, 2, 1, Qt::AlignLeft);
    layout->addWidget(constructionButton, 3, 1, Qt::AlignLeft);
    layout->addItem(leftSpacer, 1, 0, 2, 1);
    layout->addItem(rightSpacer, 1, 2, 2, 1);

    qDebug() << "MenuWindow created";
}
