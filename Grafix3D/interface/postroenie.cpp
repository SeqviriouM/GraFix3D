#include "postroenie.h"
#include "ui_postroenie.h"

postroenie::postroenie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::postroenie)
{
    ui->setupUi(this);
}

postroenie::~postroenie()
{
    delete ui;
}
