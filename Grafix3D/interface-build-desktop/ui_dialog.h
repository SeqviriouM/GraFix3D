/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Mon Sep 19 09:48:26 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(367, 154);
        pushButton = new QPushButton(dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 311, 27));
        pushButton_2 = new QPushButton(dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 50, 311, 27));
        pushButton_3 = new QPushButton(dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 120, 151, 27));
        pushButton_4 = new QPushButton(dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 80, 311, 27));
        pushButton_5 = new QPushButton(dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 120, 151, 27));

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\264\321\200\321\203\320\263\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272 \320\270\320\267 \320\270\320\274\320\265\321\216\321\211\320\270\321\205\321\201\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dialog", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\321\200\321\203\320\263\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272 \320\262\321\200\321\203\321\207\320\275\321\203\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("dialog", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("dialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("dialog", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
