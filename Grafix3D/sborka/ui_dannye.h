/********************************************************************************
** Form generated from reading UI file 'dannye.ui'
**
** Created: Sun Oct 16 13:49:14 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANNYE_H
#define UI_DANNYE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_dannye
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox;

    void setupUi(QDialog *dannye)
    {
        if (dannye->objectName().isEmpty())
            dannye->setObjectName(QString::fromUtf8("dannye"));
        dannye->resize(347, 345);
        pushButton = new QPushButton(dannye);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 280, 97, 27));
        pushButton_2 = new QPushButton(dannye);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 280, 97, 27));
        label = new QLabel(dannye);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 251, 17));
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        textEdit = new QTextEdit(dannye);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 60, 104, 16));
        textEdit_2 = new QTextEdit(dannye);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(170, 100, 104, 16));
        textEdit_3 = new QTextEdit(dannye);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(170, 140, 104, 16));
        label_2 = new QLabel(dannye);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 60, 31, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(dannye);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 100, 31, 17));
        label_3->setFont(font1);
        label_4 = new QLabel(dannye);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 140, 31, 17));
        label_4->setFont(font1);
        textEdit_4 = new QTextEdit(dannye);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(33, 60, 111, 20));
        textEdit_5 = new QTextEdit(dannye);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(30, 100, 104, 16));
        textEdit_6 = new QTextEdit(dannye);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(30, 140, 104, 16));
        label_5 = new QLabel(dannye);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 170, 251, 17));
        label_5->setFont(font);
        label_6 = new QLabel(dannye);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 200, 31, 17));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        spinBox = new QSpinBox(dannye);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 200, 59, 27));

        retranslateUi(dannye);

        QMetaObject::connectSlotsByName(dannye);
    } // setupUi

    void retranslateUi(QDialog *dannye)
    {
        dannye->setWindowTitle(QApplication::translate("dannye", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dannye", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dannye", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dannye", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dannye", " <x<", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dannye", "<y<", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dannye", "<z<", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dannye", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\201\321\210\321\202\320\260\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dannye", "1:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dannye: public Ui_dannye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANNYE_H
