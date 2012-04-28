#include "postroenye.h"
#include "ui_postroenye.h"
#include "vibor.h"
#include "vvod.h"
#include "mainwindow.h"
#include "dannie.h"
#include "infa.h"


postroenye::postroenye(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postroenye)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazadvibor()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(nazadvvod()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(nazaddan()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(exit()));
     connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(inform()));


}

postroenye::~postroenye()
{
    delete ui;
}
void postroenye::nazadvibor()
{
   vibor *x = new vibor();
    x->show();
    postroenye::close();

}
void postroenye::nazadvvod()
{
   vvod *x = new vvod();
    x->show();
    postroenye::close();

}
void postroenye::nazaddan()
{
   dannie *x = new dannie();
    x->show();
   postroenye::close();

}
void postroenye::vmenu()
{
   MainWindow *x = new MainWindow();
    x->show();
   postroenye::close();

}
void postroenye::inform()
{
   infa *x = new infa();
    x->show();
   postroenye::close();

}
void postroenye::exit()
{

    postroenye::close();

}
