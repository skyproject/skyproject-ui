/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#include <QValidator>

#include "suil_number_edit.h"
#include "suil_data.h"

SNumberEdit::SNumberEdit(QWidget *parent)
{
    this->setFont(DEFAULT_FONT);
    QDoubleValidator *validator = new QDoubleValidator();
    this->setValidator(validator);
    this->setMinimumHeight(30);
    this->setMaximumHeight(30);
    const_cast<QFont &>(this->font()).setStyleStrategy(QFont::PreferAntialias);
}
