#ifndef POSTROENYE_H
#define POSTROENYE_H

#include <QDialog>

namespace Ui {
    class postroenye;
}

class postroenye : public QDialog
{
    Q_OBJECT

public:
    explicit postroenye(QWidget *parent = 0);
    ~postroenye();

private:
    Ui::postroenye *ui;
public slots:
    void exit();
    void nazadvvod();
    void nazadvibor();
    void nazaddan();
    void vmenu();
    void inform();
};

#endif // POSTROENYE_H
