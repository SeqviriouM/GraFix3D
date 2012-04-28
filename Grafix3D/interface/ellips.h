#ifndef ELLIPS_H
#define ELLIPS_H

#include <QDialog>

namespace Ui {
    class ellips;
}

class ellips : public QDialog
{
    Q_OBJECT

public:
    explicit ellips(QWidget *parent = 0);
    ~ellips();

private:
    Ui::ellips *ui;
public slots:
    void viz();
    void noviz();
    void pok();
    void skryt();
    void nazad();
    void vmenu();
};

#endif // ELLIPS_H
