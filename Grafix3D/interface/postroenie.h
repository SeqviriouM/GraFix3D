#ifndef POSTROENIE_H
#define POSTROENIE_H

#include <QDialog>

namespace Ui {
    class postroenie;
}

class postroenie : public QDialog
{
    Q_OBJECT

public:
    explicit postroenie(QWidget *parent = 0);
    ~postroenie();

private:
    Ui::postroenie *ui;
};

#endif // POSTROENIE_H
