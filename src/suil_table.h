/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#ifndef SUIL_TABLE_H
#define SUIL_TABLE_H

#include <QTableWidget>
#include <QWidget>
#include <QString>

namespace Ui
{
    class STable;
}

class STable : public QTableWidget
{
        Q_OBJECT

    public:
        explicit STable ( QWidget *parent = 0 );
        ~STable();
        void addRow ( std::vector<QWidget *> items );
        void addColumn ( QString title, int relWidth );

    protected:
        void paintEvent ( QPaintEvent *e );
        std::vector<int> columnWidth;
};

#endif // SUIL_TABLE_H
