#include "sfera.h"
#include "ui_sfera.h"
#include "infa.h"
#include "mainwindow.h"
#include "vibor.h"


sfera::sfera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sfera)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(viz()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(noviz()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pok()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(skryt()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(post()));



    sfera::setPalette(Qt::white);
    ui->scrollArea->setHidden(true);
    ui->scrollArea_2->setHidden(true);
    ui->pushButton_2->setGeometry(60,100,85,27);
    ui->pushButton_4->setGeometry(260,100,85,27);
    ui->label_8->setGeometry(60,80,181,17);
    ui->scrollArea_2->setGeometry(50,145,491,111);
    ui->pushButton_8->setGeometry(550,310,161,101);


}

sfera::~sfera()
{
    delete ui;
}

void sfera::viz()
{
    ui->scrollArea->setHidden(false);
  ui->pushButton_2->setGeometry(60,240,85,27);
  ui->pushButton_4->setGeometry(260,241,85,27);
  ui->label_8->setGeometry(60,220,181,17);
  ui->scrollArea_2->setGeometry(50,300,491,111);
}
void sfera::noviz()
{
    ui->scrollArea->setHidden(true);
   ui->pushButton_2->setGeometry(60,100,85,27);
   ui->pushButton_4->setGeometry(260,100,85,27);
   ui->label_8->setGeometry(60,80,181,17);
   ui->scrollArea_2->setGeometry(50,145,491,111);

}

void sfera::pok()
{
    ui->scrollArea_2->setHidden(false);
}

void sfera::skryt()
{
    ui->scrollArea_2->setHidden(true);
}

void sfera::vmenu()
{
 MainWindow *x = new MainWindow();
x->show();
sfera::close();
}

void sfera::nazad()
{
   infa *x = new infa();
    x->show();
    sfera::close();
}

void sfera::post()
{

    vibor *x = new vibor();
x->show();
sfera::close();
}
