#ifndef KONYS_H
#define KONYS_H

#include <QDialog>

namespace Ui {
    class konys;
}

class konys : public QDialog
{
    Q_OBJECT

public:
    explicit konys(QWidget *parent = 0);
    ~konys();

private:
    Ui::konys *ui;
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

#endif // KONYS_H
