#include <QtGui>
#include <QApplication>
#include <QDesktopWidget>
#include "mainwindow.h"
#include "OGLGelikoid.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    OGLGelikoid oglGelikoid;

    w.show();
    a.exec();

    return 0;

}
