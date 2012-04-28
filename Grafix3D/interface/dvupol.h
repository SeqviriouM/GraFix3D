#ifndef DVUPOL_H
#define DVUPOL_H

#include <QDialog>

namespace Ui {
    class dvupol;
}

class dvupol : public QDialog
{
    Q_OBJECT

public:
    explicit dvupol(QWidget *parent = 0);
    ~dvupol();

private:
    Ui::dvupol *ui;

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

#endif // DVUPOL_H
