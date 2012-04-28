/********************************************************************************
** Form generated from reading UI file 'postroenye.ui'
**
** Created: Sun 6. Nov 12:33:08 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTROENYE_H
#define UI_POSTROENYE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_postroenye
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *postroenye)
    {
        if (postroenye->objectName().isEmpty())
            postroenye->setObjectName(QString::fromUtf8("postroenye"));
        postroenye->resize(400, 212);
        gridLayout = new QGridLayout(postroenye);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(postroenye);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(postroenye);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 2);

        pushButton_3 = new QPushButton(postroenye);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 2);

        pushButton_4 = new QPushButton(postroenye);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(postroenye);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(postroenye);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 4, 0, 1, 2);


        retranslateUi(postroenye);

        QMetaObject::connectSlotsByName(postroenye);
    } // setupUi

    void retranslateUi(QDialog *postroenye)
    {
        postroenye->setWindowTitle(QApplication::translate("postroenye", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("postroenye", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\264\321\200\321\203\320\263\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272 \320\270\320\267 \320\270\320\274\320\265\321\216\321\211\320\270\321\205\321\201\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("postroenye", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\321\200\321\203\320\263\321\203\321\216 \321\204\321\203\320\275\320\272\321\206\320\270\321\216 \320\262\321\200\321\203\321\207\320\275\321\203\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("postroenye", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("postroenye", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("postroenye", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("postroenye", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postroenye: public Ui_postroenye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTROENYE_H
