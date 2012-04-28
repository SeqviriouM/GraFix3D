#include "ellipsoid.h"
#include "ui_ellipsoid.h"
#include "infa.h"
#include "mainwindow.h"
#include "ellips.h"
#include "vibor.h"



ellipsoid::ellipsoid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ellipsoid)
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



    ellipsoid::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);
    ui->pushButton_9->setGeometry(550,310,161,101);


}

ellipsoid::~ellipsoid()
{
    delete ui;
}

void ellipsoid::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void ellipsoid::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}

void ellipsoid::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void ellipsoid::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void ellipsoid::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
ellipsoid::close();
}

void ellipsoid::nazad()
{
   infa *x = new infa();
    x->show();
    ellipsoid::close();
}
void ellipsoid::ellip()
{
    ellips *x = new ellips();
    x->show();
    ellipsoid::close();
}

void ellipsoid::post()
{

    vibor *x = new vibor();
x->show();
ellipsoid::close();
}
