/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_BUTTON_H
#define SUIL_BUTTON_H

#include <QPushButton>

class SButton : public QPushButton
{
        Q_OBJECT

    public:
        explicit SButton ( QWidget *parent = 0 );
        virtual void setText ( const QString &text );
};

#endif // SUIL_BUTTON_H
