#ifndef GIPERBOLA_H
#define GIPERBOLA_H

#include <QDialog>

namespace Ui {
    class giperbola;
}

class giperbola : public QDialog
{
    Q_OBJECT

public:
    explicit giperbola(QWidget *parent = 0);
    ~giperbola();

private:
    Ui::giperbola *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void post();
    void gip();
    void par();
};

#endif // GIPERBOLA_H
