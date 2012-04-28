#ifndef VIBOR_H
#define VIBOR_H

#include <QDialog>

namespace Ui {
    class vibor;
}

class vibor : public QDialog
{
    Q_OBJECT

public:
    explicit vibor(QWidget *parent = 0);
    ~vibor();

private:
    Ui::vibor *ui;
public slots:
  void  nazad();
  void danie();
  void danie2();
  void danie5();
  void danie4();
  void danie3();
  void danie7();
  void danie8();
  void danie6();
};

#endif // VIBOR_H
