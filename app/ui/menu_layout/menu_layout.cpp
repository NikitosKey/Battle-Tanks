#include "menu_layout.h"


MenuLayout::MenuLayout() {
    imageLabel = new ResizableLabel();
    imageLabel->setPixmap(QPixmap(":/assets/ui/menu/logo.png"));
    imageLabel->setAlignment(Qt::AlignCenter);

    playerButton = new QPushButton("1 Player");
    playersButton = new QPushButton("2 Players");
    constructionButton = new QPushButton("Construction");

    connect(playerButton, &QPushButton::clicked, this,
            &MenuLayout::playerButtonClicked);
    connect(playersButton, &QPushButton::clicked, this,
            &MenuLayout::playerButtonClicked);
    connect(constructionButton, &QPushButton::clicked, this,
            &MenuLayout::constructionButtonClicked);

    int id =
            QFontDatabase::addApplicationFont(":/assets/fonts/Pixel Emulator.otf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont buttonFont(family, 24);

    playerButton->setFont(buttonFont);
    playersButton->setFont(buttonFont);
    constructionButton->setFont(buttonFont);

    leftSpacer = new QSpacerItem(100, 100, QSizePolicy::Expanding, QSizePolicy::Expanding);
    rightSpacer = new QSpacerItem(100, 100, QSizePolicy::Expanding, QSizePolicy::Expanding);

    this->addWidget(imageLabel, 0, 0, 1, 3);
    this->addWidget(playerButton, 1, 1, Qt::AlignLeft);
    this->addWidget(playersButton, 2, 1, Qt::AlignLeft);
    this->addWidget(constructionButton, 3, 1, Qt::AlignLeft);
    this->addItem(leftSpacer, 1, 0, 2, 1);
    this->addItem(rightSpacer, 1, 2, 2, 1);


    DEBUG_LOG("MenuLayout created");
}
MenuLayout::~MenuLayout() {
    qDeleteAll(this->children());

    DEBUG_LOG("MenuLayout deleted!");
}
void MenuLayout::playerButtonClicked() {
    QWidget *parent = parentWidget();
    qDeleteAll(parent->children());
    parent->setStyleSheet("background-color: gray;");
    auto *levels = new LevelsLayout;
    parent->setLayout(levels);
    DEBUG_LOG("playerButton clicked");
}
void MenuLayout::constructionButtonClicked() {
    QWidget *parent = parentWidget();
    qDeleteAll(parent->children());
    auto *construction = new ConstructionLayout;
    parent->setLayout(construction);
    DEBUG_LOG("constructionButton clicked");
}
