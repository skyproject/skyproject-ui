/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_GLOBAL_H
#define SUIL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SKYPROJECTUI_LIBRARY)
#  define SKYPROJECTUISHARED_EXPORT Q_DECL_EXPORT
#else
#  define SKYPROJECTUISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SUIL_GLOBAL_H
