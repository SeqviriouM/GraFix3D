#include "elchil.h"
#include "ui_elchil.h"
#include "infa.h"
#include "mainwindow.h"
#include "ellips.h"
#include "vibor.h"



elchil::elchil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::elchil)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(viz()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(noviz()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pok()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(skryt()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(ellip()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(post()));





    elchil::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);
    ui->pushButton_9->setGeometry(550,310,161,101);



}

elchil::~elchil()
{
    delete ui;
}

void elchil::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void elchil::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}

void elchil::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void elchil::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void elchil::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
elchil::close();
}

void elchil::nazad()
{
   infa *x = new infa();
    x->show();
    elchil::close();
}

void elchil::ellip()
{
    ellips *x = new ellips();
    x->show();
    elchil::close();
}


void elchil::post()
{

    vibor *x = new vibor();
x->show();
elchil::close();
}
