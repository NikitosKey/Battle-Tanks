#include "levels_layout.h"

namespace {
const QString kLevelNumber = "01";
const QString kButtonStyleCss =
        "QPushButton{color: black; background: none; background-color: "
        "transparent; border:none;} "
        "QPushButton:hover{background: none; border:none;}; ";
const QString kFontPath = ":/assets/fonts/Pixel Emulator.otf";
const int kButtonFontSize = 24;
const QString kBackgroundColor = "background-color: gray;";
}  // namespace

LevelsLayout::LevelsLayout() {
    QString level_button_text = "level " + kLevelNumber;

    levelButton_ = new QPushButton(level_button_text);
    beforeButton_ = new QPushButton();
    nextButton_ = new QPushButton();

    int id = QFontDatabase::addApplicationFont(kFontPath);
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont button_font(family, kButtonFontSize);
    levelButton_->setFont(button_font);

    beforeButton_->setSizePolicy(QSizePolicy::Expanding,
                                 QSizePolicy::Expanding);
    levelButton_->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    nextButton_->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    beforeButton_->setStyleSheet(kButtonStyleCss);
    levelButton_->setStyleSheet(kButtonStyleCss);
    nextButton_->setStyleSheet(kButtonStyleCss);

    connect(beforeButton_, &QPushButton::clicked, this,
            &LevelsLayout::beforeButtonClicked);
    connect(levelButton_, &QPushButton::clicked, this,
            &LevelsLayout::levelButtonClicked);
    connect(nextButton_, &QPushButton::clicked, this,
            &LevelsLayout::nextButtonClicked);

    // TODO add keybinding

    addWidget(beforeButton_, 0, 0, 1, 1);
    addWidget(levelButton_, 0, 1, 1, 1);
    addWidget(nextButton_, 0, 2, 1, 1);

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
    parent->setStyleSheet(kBackgroundColor);
    auto *game_layout = new GameLayout;
    parent->setLayout(game_layout);
    DEBUG_LOG("levelButtonClicked");
}

void LevelsLayout::nextButtonClicked() {
    DEBUG_LOG("nextButtonClicked");
}