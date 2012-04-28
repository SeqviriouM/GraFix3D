#ifndef SPRAVKA_H
#define SPRAVKA_H

#include <QDialog>

namespace Ui {
    class spravka;
}

class spravka : public QDialog
{
    Q_OBJECT

public:
    explicit spravka(QWidget *parent = 0);
    ~spravka();

private:
    Ui::spravka *ui;
public slots:
    void nazad();
};

#endif // SPRAVKA_H
