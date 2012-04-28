#ifndef SFERA_H
#define SFERA_H

#include <QDialog>

namespace Ui {
    class sfera;
}

class sfera : public QDialog
{
    Q_OBJECT

public:
    explicit sfera(QWidget *parent = 0);
    ~sfera();

private:
    Ui::sfera *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void post();
};

#endif // SFERA_H
