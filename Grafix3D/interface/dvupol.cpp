#include "dvupol.h"
#include "ui_dvupol.h"
#include "infa.h"
#include "mainwindow.h"
#include "ellips.h"
#include "giper.h"
#include "vibor.h"



dvupol::dvupol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dvupol)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(viz()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(noviz()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pok()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(skryt()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(ellip()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(ellip()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(gip()));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),this,SLOT(post()));





    dvupol::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);
    ui->pushButton_10->setGeometry(550,310,161,101);


}

dvupol::~dvupol()
{
    delete ui;
}

void dvupol::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void dvupol::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}


void dvupol::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void dvupol::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void dvupol::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
dvupol::close();
}

void dvupol::nazad()
{
   infa *x = new infa();
    x->show();
    dvupol::close();
}
void dvupol::ellip()
{
    ellips *x = new ellips();
    x->show();
    dvupol::close();
}

void dvupol::gip()
{
    giper *x = new giper();
    x->show();
    dvupol::close();
}

void dvupol::post()
{

    vibor *x = new vibor();
x->show();
dvupol::close();
}
