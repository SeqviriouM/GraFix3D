#ifndef ELPARABOL_H
#define ELPARABOL_H

#include <QDialog>

namespace Ui {
    class elparabol;
}

class elparabol : public QDialog
{
    Q_OBJECT

public:
    explicit elparabol(QWidget *parent = 0);
    ~elparabol();

private:
    Ui::elparabol *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void post();
    void el();
    void par();
};

#endif // ELPARABOL_H
