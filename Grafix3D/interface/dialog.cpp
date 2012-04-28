#include "dialog.h"
#include "ui_dialog.h"
#include "vibor.h"
#include "vvod.h"
#include "mainwindow.h"
#include "vvod.h"

dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazadvibor()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(nazadvvod()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(nazaddan()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(vmenu()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(exit()));
}

dialog::~dialog()
{
    delete ui;
}

void dialog::nazadvibor()
{
   vibor *x = new vibor();
    x->show();
    dialog::close();

}
void dialog::nazadvvod()
{
   vvod *x = new vvod();
    x->show();
    dialog::close();

}
void dialog::nazaddan()
{
   vvod *x = new vvod();
    x->show();
   dialog::close();

}
void dialog::vmenu()
{
   MainWindow *x = new MainWindow();
    x->show();
   dialog::close();

}
void dialog::exit()
{

    dialog::close();

}
