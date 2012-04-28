#ifndef VVOD_H
#define VVOD_H

#include <QDialog>
#include <QThread>
#include <QtGui>

namespace Ui {
    class vvod;
}

class vvod : public QDialog
{
    Q_OBJECT

public:
    explicit vvod(QWidget *parent = 0);
    ~vvod();

private:
    Ui::vvod *ui;
public slots:
  void  nazad();
  void dalee();
  void one();
  void two();
  void sprav();
  void color1();
  void color3();
  void color4();
  void color5();
  void color6();
  void color7();
  void gran();
};

class Thread1 : public QThread
{
public:
    void run();
};

#endif // VVOD_H
