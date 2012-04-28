#include "dannye.h"
#include "ui_dannye.h"
#include "vvod.h"
#include "dialog.h"

dannye::dannye(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dannye)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(postr()));
}


dannye::~dannye()
{
    delete ui;
}
void dannye::nazad()
{
     vvod *x =new vvod();
    x->show();
   dannye::close();
}
void dannye::postr()
{
     dialog *x =new dialog();
    x->show();
   dannye::close();
}
