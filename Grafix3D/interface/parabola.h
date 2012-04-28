#ifndef PARABOLA_H
#define PARABOLA_H

#include <QDialog>

namespace Ui {
    class parabola;
}

class parabola : public QDialog
{
    Q_OBJECT

public:
    explicit parabola(QWidget *parent = 0);
    ~parabola();

private:
    Ui::parabola *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
};

#endif // PARABOLA_H
