/*
 * Copyright (C) Mikhail Labushev. All rights reserved.
 *
 * This file is a part of skyproject-ui library licensed
 * under the GNU Lesser General Public License, version 3.
 * For full terms see LICENSE file.
 */

#include "ui_suil_wizard.h"
#include "suil_wizard.h"

SWizard::SWizard ( QWidget *parent ) :
    QWidget ( parent ),
    ui ( new Ui::SWizard )
{
    ui->setupUi ( this );
    connect ( ui->buttonNext, SIGNAL ( clicked() ),
              this, SLOT ( stepNext() ) );
    connect ( ui->buttonBack, SIGNAL ( clicked() ),
              this, SLOT ( stepBack() ) );
}

SWizard::~SWizard()
{
    delete ui;
    for ( int x = 0; x < this->wizardPages.size(); ++x )
    {
        delete this->wizardPages[x];
    }
}

void SWizard::loadPages()
{
    for ( int x = 0; x < this->wizardPages.size(); x++ )
    {
        ui->pageLayout->addWidget ( this->wizardPages[x] );
    }
    switchPage();
}

void SWizard::stepNext()
{
    if ( this->currentPage == ( this->wizardPages.size() - 1 ) )
    {
        emit wizardFinished();
    }
    else
    {
        this->currentPage++;
        switchPage();
    }
}

void SWizard::stepBack()
{
    this->currentPage--;
    switchPage();
}

void SWizard::switchPage()
{
    for ( short x = 0; x < this->wizardPages.size(); ++x )
    {
        if ( x != currentPage )
        {
            this->wizardPages[x]->setVisible ( false );
        }
        else
        {
            this->wizardPages[x]->setVisible ( true );
        }
    }
    if ( this->currentPage == 0 )
    {
        ui->buttonBack->setVisible ( false );
    }
    else
    {
        ui->buttonBack->setVisible ( true );
    }
}
