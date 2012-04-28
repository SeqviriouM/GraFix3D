#include "elparabol.h"
#include "ui_elparabol.h"
#include "infa.h"
#include "mainwindow.h"
#include "ellips.h"
#include "vibor.h"
#include "parabola.h"


elparabol::elparabol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::elparabol)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(viz()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(noviz()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pok()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(skryt()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(post()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(el()));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),this,SLOT(par()));



    elparabol::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);
    ui->pushButton_8->setGeometry(550,310,161,101);


}

elparabol::~elparabol()
{
    delete ui;
}

void elparabol::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void elparabol::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}

void elparabol::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void elparabol::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void elparabol::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
elparabol::close();
}

void elparabol::nazad()
{
   infa *x = new infa();
    x->show();
    elparabol::close();
}
void elparabol::post()
{

    vibor *x = new vibor();
x->show();
elparabol::close();
}

void elparabol::el()
{

    ellips *x = new ellips();
x->show();
elparabol::close();
}

void elparabol::par()
{

    parabola *x = new parabola();
x->show();
elparabol::close();
}
