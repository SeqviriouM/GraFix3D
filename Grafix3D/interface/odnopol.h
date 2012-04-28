#ifndef ODNOPOL_H
#define ODNOPOL_H

#include <QDialog>

namespace Ui {
    class odnopol;
}

class odnopol : public QDialog
{
    Q_OBJECT

public:
    explicit odnopol(QWidget *parent = 0);
    ~odnopol();

private:
    Ui::odnopol *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void ellip();
    void gip();
    void post();
};

#endif // ODNOPOL_H
