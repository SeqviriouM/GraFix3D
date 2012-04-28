#ifndef PARCHIL_H
#define PARCHIL_H

#include <QDialog>

namespace Ui {
    class parchil;
}

class parchil : public QDialog
{
    Q_OBJECT

public:
    explicit parchil(QWidget *parent = 0);
    ~parchil();

private:
    Ui::parchil *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void par();
    void post();
};

#endif // PARCHIL_H
