#include "levels_layout.h"

LevelsLayout::LevelsLayout() {
    QString levelNumber = "01";
    QString levelButtonText = "level " + levelNumber;
    QString buttonStyleCSS = ("QPushButton{color: black; background: none; background-color: transparent; border:none;} "
                              "QPushButton:hover{background: none; border:none;}; ");

    levelButton = new QPushButton(levelButtonText);
    beforeButton = new QPushButton();
    nextButton = new QPushButton();

    int id =
            QFontDatabase::addApplicationFont(":/assets/fonts/Pixel Emulator.otf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont buttonFont(family, 24);
    levelButton->setFont(buttonFont);

    beforeButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    levelButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    nextButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    beforeButton->setStyleSheet(buttonStyleCSS);
    levelButton->setStyleSheet(buttonStyleCSS);
    nextButton->setStyleSheet(buttonStyleCSS);

    connect(beforeButton, &QPushButton::clicked, this,
            &LevelsLayout::beforeButtonClicked);
    connect(levelButton, &QPushButton::clicked, this,
            &LevelsLayout::levelButtonClicked);
    connect(nextButton, &QPushButton::clicked, this,
            &LevelsLayout::nextButtonClicked);

    // TODO add keybinding

    addWidget(beforeButton, 0, 0, 1, 1);
    addWidget(levelButton, 0, 1, 1, 1);
    addWidget(nextButton, 0, 2, 1, 1);

    DEBUG_LOG("LevelsLayout created!");
}

LevelsLayout::~LevelsLayout() {
    qDeleteAll(this->children());

    DEBUG_LOG("LevelsLayout deleted!");
}

void LevelsLayout::beforeButtonClicked() {

    DEBUG_LOG("beforeButtonClicked");
}

void LevelsLayout::levelButtonClicked() {
    QWidget *parent = parentWidget();
    qDeleteAll(parent->children());
    parent->setStyleSheet("background-color: gray;");
    auto gameLayout = new GameLayout;
    parent->setLayout(gameLayout);
    DEBUG_LOG("levelButtonClicked");
}

void LevelsLayout::nextButtonClicked() {

    DEBUG_LOG("nextButtonClicked");
}
