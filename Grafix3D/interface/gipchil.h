#ifndef GIPCHIL_H
#define GIPCHIL_H

#include <QDialog>

namespace Ui {
    class gipchil;
}

class gipchil : public QDialog
{
    Q_OBJECT

public:
    explicit gipchil(QWidget *parent = 0);
    ~gipchil();

private:
    Ui::gipchil *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
    void gip();
    void post();
};

#endif // GIPCHIL_H
