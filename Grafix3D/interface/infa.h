#ifndef INFA_H
#define INFA_H

#include <QDialog>

namespace Ui {
    class infa;
}

class infa : public QDialog
{
    Q_OBJECT

public:
    explicit infa(QWidget *parent = 0);
    ~infa();

private:
    Ui::infa *ui;
    public slots:
    void glavmenu();
    void elipsoid();
    void odnopolis();
    void dvupolis();
    void elchili();
    void gipchili();
    void parchili();
    void konus();
    void sfer();
    void gip();
    void el();
};

#endif // INFA_H
