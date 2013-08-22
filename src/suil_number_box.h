/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_NUMBER_BOX_H
#define SUIL_NUMBER_BOX_H

#include <QSpinBox>
#include <QObject>

class SNumberBox : public QSpinBox
{
    public:
        explicit SNumberBox(QWidget *parent = 0);
};

#endif // SUIL_NUMBER_BOX_H
