#ifndef DEBUG_LOG_H
#define DEBUG_LOG_H

#ifdef DEBUG_BUILD
#include <QDebug>

/**
 * \def DEBUG_LOG(msg)
 * \brief Macro for logging debug messages.
 *
 * This macro logs debug messages using qDebug() if DEBUG_BUILD is defined.
 *
 * \param msg The message to log.
 */
#define DEBUG_LOG(msg)   \
    do {                 \
        qDebug() << msg; \
    } while (0)
#else
/**
 * \def DEBUG_LOG(msg)
 * \brief Macro for logging debug messages.
 *
 * This macro does nothing if DEBUG_BUILD is not defined.
 *
 * \param msg The message to log.
 */
#define DEBUG_LOG(msg) \
    do {               \
    } while (0)
#endif

#endif