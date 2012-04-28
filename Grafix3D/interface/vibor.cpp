#include "vibor.h"
#include "ui_vibor.h"
#include "mainwindow.h"
#include "dannie.h"
#include <fstream>


vibor::vibor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vibor)
{
    ui->setupUi(this);
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(nazad()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(danie()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(danie8()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(danie2()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(danie3()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(danie4()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(danie5()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(danie6()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(danie7()));


}

vibor::~vibor()
{
    delete ui;
}
void vibor::nazad()
{
     MainWindow *x =new MainWindow();
    x->show();
    vibor::close();
}
void vibor::danie()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 0 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie2()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 2 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie5()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 5 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie4()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 4 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie3()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 3 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie7()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 7 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}
void vibor::danie8()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 8 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}

void vibor::danie6()
{
    std::ofstream out;
    out.open ("dannee.txt");
    out << 6 << std::endl;
    dannie *x =new dannie();
   x->show();
   vibor::close();
}

