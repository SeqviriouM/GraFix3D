#ifndef GIPER_H
#define GIPER_H

#include <QDialog>

namespace Ui {
    class giper;
}

class giper : public QDialog
{
    Q_OBJECT

public:
    explicit giper(QWidget *parent = 0);
    ~giper();

private:
    Ui::giper *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
};

#endif // GIPER_H
