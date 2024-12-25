#include "menu_layout.h"

#include <QFont>
#include <QString>
#include <cstdint>

namespace {
const std::uint8_t kLeftSpacerWidth = 100;
const std::uint8_t kLeftSpacerHeight = 100;
const std::uint8_t kRightSpacerWidth = 100;
const std::uint8_t kRightSpacerHeight = 100;
const std::uint8_t kButtonFontSize = 24;
const QString kButtonFontPath = ":/assets/fonts/Pixel Emulator.otf";
const QString kLogoPath = ":/assets/ui/menu/logo.png";
const QString kPlayerButtonText = "1 Player";
const QString kPlayersButtonText = "2 Players";
const QString kConstructionButtonText = "Construction";
const QString kBackgroundColor = "background-color: gray;";
}  // namespace

MenuLayout::MenuLayout() {
    imageLabel_ = new ResizableLabel();
    imageLabel_->setOriginalPixmap(QPixmap(kLogoPath));
    imageLabel_->setAlignment(Qt::AlignCenter);

    playerButton_ = new QPushButton(kPlayerButtonText);
    playersButton_ = new QPushButton(kPlayersButtonText);
    constructionButton_ = new QPushButton(kConstructionButtonText);

    connect(playerButton_, &QPushButton::clicked, this,
            &MenuLayout::playerButtonClicked);
    connect(playersButton_, &QPushButton::clicked, this,
            &MenuLayout::playerButtonClicked);
    connect(constructionButton_, &QPushButton::clicked, this,
            &MenuLayout::constructionButtonClicked);

    int id = QFontDatabase::addApplicationFont(kButtonFontPath);
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont button_font(family, kButtonFontSize);

    playerButton_->setFont(button_font);
    playersButton_->setFont(button_font);
    constructionButton_->setFont(button_font);

    leftSpacer_ =
            new QSpacerItem(kLeftSpacerWidth, kLeftSpacerHeight,
                            QSizePolicy::Expanding, QSizePolicy::Expanding);
    rightSpacer_ =
            new QSpacerItem(kRightSpacerWidth, kRightSpacerHeight,
                            QSizePolicy::Expanding, QSizePolicy::Expanding);

    this->addWidget(imageLabel_, 0, 0, 1, 3);
    this->addWidget(playerButton_, 1, 1, Qt::AlignLeft);
    this->addWidget(playersButton_, 2, 1, Qt::AlignLeft);
    this->addWidget(constructionButton_, 3, 1, Qt::AlignLeft);
    this->addItem(leftSpacer_, 1, 0, 2, 1);
    this->addItem(rightSpacer_, 1, 2, 2, 1);

    DEBUG_LOG("MenuLayout created");
}

MenuLayout::~MenuLayout() {
    qDeleteAll(this->children());
    DEBUG_LOG("MenuLayout deleted!");
}

void MenuLayout::playerButtonClicked() {
    QWidget *parent = parentWidget();
    qDeleteAll(parent->children());
    parent->setStyleSheet(kBackgroundColor);
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
