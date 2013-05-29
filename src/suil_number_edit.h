/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_NUMBER_EDIT_H
#define SUIL_NUMBER_EDIT_H

#include <QLineEdit>

class SNumberEdit : public QLineEdit
{
        Q_OBJECT

    public:
        explicit SNumberEdit ( QWidget *parent = 0 );
};

#endif // SUIL_NUMBER_EDIT_H
