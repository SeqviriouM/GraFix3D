#ifndef ELCHIL_H
#define ELCHIL_H

#include <QDialog>

namespace Ui {
    class elchil;
}

class elchil : public QDialog
{
    Q_OBJECT

public:
    explicit elchil(QWidget *parent = 0);
    ~elchil();

private:
    Ui::elchil *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void ellip();
    void post();

};

#endif // ELCHIL_H
