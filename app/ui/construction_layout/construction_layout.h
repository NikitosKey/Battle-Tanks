#ifndef CONSTRUCTION_LAYOUT_H
#define CONSTRUCTION_LAYOUT_H

#include <QFont>
#include <QFontDatabase>
#include <QGridLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

#include "debug_log.h"

/**
 * \class ConstructionLayout
 * \brief A QGridLayout subclass for the construction layout.
 */
class ConstructionLayout : public QGridLayout {
    Q_OBJECT

public:
    /**
     * \brief Constructs a ConstructionLayout.
     */
    ConstructionLayout();

    /**
     * \brief Destructor for ConstructionLayout.
     */
    ~ConstructionLayout() override;

private:
    // Add private members and methods here if needed
};

#endif