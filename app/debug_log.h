#pragma once
#ifndef DEBUG_LOG_H
#define DEBUG_LOG_H

#ifdef DEBUG_BUILD
#include <QDebug>
#define DEBUG_LOG(msg) \
    do { qDebug() << msg; } while (0)
#else
#define DEBUG_LOG(msg) \
    do {               \
    } while (0)
#endif

#endif