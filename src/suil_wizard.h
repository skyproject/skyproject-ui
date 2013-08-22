/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_WIZARD_H
#define SUIL_WIZARD_H

#include <vector>
#include <QWidget>

#include "suil_button.h"

namespace Ui
{
    class SWizard;
}

class SWizard : public QWidget
{
        Q_OBJECT

    public:
        explicit SWizard(QWidget *parent = 0);
        ~SWizard();
        void loadPages();
        std::vector<QWidget *> wizardPages;

    signals:
        void wizardFinished();

    private slots:
        void stepNext();
        void stepBack();

    private:
        void switchPage();
        Ui::SWizard *ui;
        short currentPage = 0;
};

#endif // SUIL_WIZARD_H
