#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vibor.h"
#include "vvod.h"
#include "infa.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(postr()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(vod()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(exit()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(inform()));
    MainWindow::setPalette(Qt::darkCyan);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::postr()
{
   vibor *x = new vibor();
    x->show();
    MainWindow::close();

}
void MainWindow::vod()

{
   vvod *x = new vvod();
    x->show();
    MainWindow::close();
}
void MainWindow::exit()
{
MainWindow::close();
}

void MainWindow::inform()
{
   infa *x = new infa();
    x->show();
    MainWindow::close();
}

