/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#include <QFontMetrics>

#include "suil_button.h"
#include "suil_data.h"

SButton::SButton(QWidget *parent)
{
    this->setMinimumHeight(35);
    this->setMaximumHeight(35);
    this->setFont(DEFAULT_FONT);
    const_cast<QFont &>(this->font()).setStyleStrategy(QFont::PreferAntialias);
}

void SButton::setText(const QString &text)
{
    if (this->text() != text)
    {
        QFontMetrics mtr(this->font());
        int textWidth = mtr.width(text);
        this->setMinimumWidth((textWidth + 40));
        this->setMaximumWidth((textWidth + 40));
        QPushButton::setText(text);
    }
}
