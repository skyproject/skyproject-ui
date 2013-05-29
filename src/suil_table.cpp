/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#include <QTableWidgetItem>
#include <QResizeEvent>
#include <QHeaderView>

#include "suil_table.h"
#include "suil_data.h"

STable::STable ( QWidget *parent )
{
    this->horizontalHeader()->setFont ( DEFAULT_FONT );
    this->horizontalHeader()->setSectionResizeMode ( QHeaderView::Fixed );
    const_cast<QFont &> ( this->font() ).setStyleStrategy ( QFont::PreferAntialias );
}

STable::~STable()
{
}

void STable::addRow ( std::vector<QWidget *> items )
{
    this->insertRow ( this->rowCount() );
    for ( int x = 0; x < items.size(); ++x )
    {
        this->setCellWidget ( ( this->rowCount() - 1 ), x, items[x] );
    }
}

void STable::addColumn ( QString title, int relWidth )
{
    this->columnWidth.push_back ( relWidth );
    this->setColumnCount ( this->columnCount() + 1 );
    QTableWidgetItem *item = new QTableWidgetItem ( title, QTableWidgetItem::Type );
    item->setFont ( DEFAULT_FONT );
    this->setHorizontalHeaderItem ( ( this->columnCount() - 1 ), item );
    this->resize ( this->size() );
}

void STable::paintEvent ( QPaintEvent *e )
{
    int totalPoints = 0; //total points of relative width
    for ( int x = 0; x < this->columnWidth.size(); ++x )
    {
        totalPoints += this->columnWidth[x];
    }
    int width = this->width();
    double point = width / ( double ) totalPoints; //1 point of relative width in px
    for ( int x = 0; x < this->columnCount(); ++x )
    {
        int newWidth = this->columnWidth[x] * point;
        this->setColumnWidth ( x, ( newWidth - 5 ) );
    }
}
