#ifndef ELLIPSOID_H
#define ELLIPSOID_H

#include <QDialog>

namespace Ui {
    class ellipsoid;
}

class ellipsoid : public QDialog
{
    Q_OBJECT

public:
    explicit ellipsoid(QWidget *parent = 0);
    ~ellipsoid();


private:
    Ui::ellipsoid *ui;
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

#endif // ELLIPSOID_H
