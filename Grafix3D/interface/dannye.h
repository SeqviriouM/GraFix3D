#ifndef DANNYE_H
#define DANNYE_H

#include <QDialog>

namespace Ui {
    class dannye;
}

class dannye : public QDialog
{
    Q_OBJECT

public:
    explicit dannye(QWidget *parent = 0);
    ~dannye();

private:
    Ui::dannye *ui;
    public slots:
    void nazad();
    void postr();

};

#endif // DANNYE_H
