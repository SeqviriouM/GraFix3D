#include "spravka.h"
#include "ui_spravka.h"
#include "vvod.h"


spravka::spravka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::spravka)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(nazad()));

}

spravka::~spravka()
{
    delete ui;
}

void spravka::nazad()

{
    vvod *x =new vvod();
   x->show();
   spravka::close();
}
