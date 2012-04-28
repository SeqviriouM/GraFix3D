#include "infa.h"
#include "mainwindow.h"
#include "ellips.h"
#include "ui_ellips.h"
#include "ellipsoid.h"


ellips::ellips(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ellips)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(viz()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(noviz()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pok()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(skryt()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(vmenu()));



    ellips::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);

}

ellips::~ellips()
{
    delete ui;
}

void ellips::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void ellips::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}

void ellips::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void ellips::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void ellips::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
ellips::close();
}

void ellips::nazad()
{
   infa *x = new infa();
    x->show();
    ellips::close();
}

