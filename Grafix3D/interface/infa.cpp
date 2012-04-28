#include "infa.h"
#include "ui_infa.h"
#include "mainwindow.h"
#include "ellipsoid.h"
#include "odnopol.h"
#include "dvupol.h"
#include "elchil.h"
#include "parchil.h"
#include "gipchil.h"
#include "konys.h"
#include "sfera.h"
#include "elparabol.h"
#include "giperbola.h"




infa::infa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infa)
{
    ui->setupUi(this);
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(glavmenu()));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(elipsoid()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(odnopolis()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(dvupolis()));
    connect(ui->radioButton_4,SIGNAL(clicked(bool)),this,SLOT(elchili()));
    connect(ui->radioButton_5,SIGNAL(clicked(bool)),this,SLOT(gipchili()));
    connect(ui->radioButton_6,SIGNAL(clicked(bool)),this,SLOT(parchili()));
    connect(ui->radioButton_7,SIGNAL(clicked(bool)),this,SLOT(konus()));
    connect(ui->radioButton_8,SIGNAL(clicked(bool)),this,SLOT(sfer()));
    connect(ui->radioButton_9,SIGNAL(clicked(bool)),this,SLOT(el()));
    connect(ui->radioButton_10,SIGNAL(clicked(bool)),this,SLOT(gip()));
    infa::setPalette(Qt::white);



}

infa::~infa()
{
    delete ui;
}
void infa::glavmenu()
{
   MainWindow *x = new MainWindow();
    x->show();
    infa::close();

}

void infa::elipsoid()
{
    ellipsoid *x = new ellipsoid();
    x->show();
    infa::close();

}
void infa::odnopolis()
{
    odnopol *x = new odnopol();
    x->show();
    infa::close();

}

void infa::dvupolis()
{
    dvupol *x = new dvupol();
    x->show();
    infa::close();

}

void infa::elchili()
{
    elchil *x = new elchil();
    x->show();
    infa::close();

}

void infa::gipchili()
{
    gipchil *x = new gipchil();
    x->show();
    infa::close();

}

void infa::parchili()
{
    parchil *x = new parchil();
    x->show();
    infa::close();

}

void infa::konus()
{
    konys *x = new konys();
    x->show();
    infa::close();

}
void infa::sfer()
{
    sfera *x = new sfera();
    x->show();
    infa::close();

}
void infa::el()
{
    elparabol *x = new elparabol();
    x->show();
    infa::close();

}
void infa::gip()
{
    giperbola *x = new giperbola();
    x->show();
    infa::close();

}


