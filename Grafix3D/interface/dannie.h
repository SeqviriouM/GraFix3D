#ifndef DANNIE_H
#define DANNIE_H

#include <QDialog>
#include <QThread>
#include <QtGui>

namespace Ui {
    class dannie;
}

class dannie : public QDialog
{
    Q_OBJECT

public:
    explicit dannie(QWidget *parent = 0);
    ~dannie();
    int postr();



private:
    Ui::dannie *ui;
public slots:
    void nazad();
    void post();
    void nacsmesh();
    void koef();
    void color1();
    void color2();
    void color3();
    void color4();
    void color5();
    void color6();
    void color7();
    void color8();
    void color9();
    void color10();
};

class Thread : public QThread
{
public:
    void run();
};


#endif // DANNIE_H
