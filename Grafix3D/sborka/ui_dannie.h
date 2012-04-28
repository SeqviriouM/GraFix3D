/********************************************************************************
** Form generated from reading UI file 'dannie.ui'
**
** Created: Sun Oct 16 13:52:27 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANNIE_H
#define UI_DANNIE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_dannie
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *dannie)
    {
        if (dannie->objectName().isEmpty())
            dannie->setObjectName(QString::fromUtf8("dannie"));
        dannie->resize(359, 382);
        pushButton = new QPushButton(dannie);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 350, 97, 27));
        label = new QLabel(dannie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 231, 17));
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(dannie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 31, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(dannie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 40, 31, 17));
        label_3->setFont(font1);
        label_4 = new QLabel(dannie);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 31, 17));
        label_4->setFont(font1);
        label_5 = new QLabel(dannie);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 110, 241, 17));
        label_5->setFont(font);
        label_6 = new QLabel(dannie);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 140, 31, 17));
        label_6->setFont(font1);
        label_7 = new QLabel(dannie);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 170, 31, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(dannie);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 140, 51, 17));
        label_8->setFont(font1);
        pushButton_2 = new QPushButton(dannie);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 350, 97, 27));
        label_9 = new QLabel(dannie);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 200, 231, 17));
        label_9->setFont(font);
        lineEdit = new QLineEdit(dannie);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 40, 81, 21));
        lineEdit_2 = new QLineEdit(dannie);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 40, 81, 21));
        lineEdit_3 = new QLineEdit(dannie);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 80, 81, 21));
        lineEdit_4 = new QLineEdit(dannie);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(50, 140, 81, 21));
        lineEdit_5 = new QLineEdit(dannie);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 140, 81, 21));
        lineEdit_6 = new QLineEdit(dannie);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(50, 170, 81, 21));
        pushButton_3 = new QPushButton(dannie);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 80, 161, 21));
        pushButton_4 = new QPushButton(dannie);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 170, 161, 21));
        radioButton = new QRadioButton(dannie);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 230, 116, 22));
        radioButton_2 = new QRadioButton(dannie);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 260, 116, 22));
        radioButton_3 = new QRadioButton(dannie);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(40, 290, 116, 22));

        retranslateUi(dannie);

        QMetaObject::connectSlotsByName(dannie);
    } // setupUi

    void retranslateUi(QDialog *dannie)
    {
        dannie->setWindowTitle(QApplication::translate("dannie", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dannie", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dannie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\262\320\265\321\200\321\210\320\270\320\275\321\213:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dannie", "x0=", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dannie", "y0=", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dannie", "z0=", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dannie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213 \321\201\320\266\320\260\321\202\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dannie", "b=", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("dannie", "c=", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("dannie", "a=", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dannie", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("dannie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\206\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("dannie", "0", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("dannie", "0", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("dannie", "0", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("dannie", "1", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setText(QApplication::translate("dannie", "1", 0, QApplication::UnicodeUTF8));
        lineEdit_6->setText(QApplication::translate("dannie", "1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("dannie", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("dannie", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("dannie", "\320\247\321\221\321\200\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("dannie", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("dannie", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dannie: public Ui_dannie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANNIE_H
