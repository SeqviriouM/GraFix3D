#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class dialog;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private:
    Ui::dialog *ui;
public slots:
    void exit();
    void nazadvvod();
    void nazadvibor();
    void nazaddan();
    void vmenu();
};

#endif // DIALOG_H
