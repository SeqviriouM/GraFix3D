/********************************************************************************
** Form generated from reading UI file 'vvod.ui'
**
** Created: Sun Oct 16 13:49:14 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVOD_H
#define UI_VVOD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvod
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *vvod)
    {
        if (vvod->objectName().isEmpty())
            vvod->setObjectName(QString::fromUtf8("vvod"));
        vvod->resize(400, 363);
        label = new QLabel(vvod);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 251, 17));
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(vvod);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 120, 21, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        radioButton = new QRadioButton(vvod);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(70, 50, 116, 22));
        radioButton_2 = new QRadioButton(vvod);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(70, 80, 116, 22));
        label_3 = new QLabel(vvod);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 180, 31, 17));
        lineEdit = new QLineEdit(vvod);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 180, 61, 21));
        label_6 = new QLabel(vvod);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 150, 231, 17));
        lineEdit_2 = new QLineEdit(vvod);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 180, 61, 21));
        lineEdit_3 = new QLineEdit(vvod);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 210, 61, 21));
        lineEdit_4 = new QLineEdit(vvod);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 210, 61, 21));
        label_4 = new QLabel(vvod);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 210, 31, 17));
        lineEdit_5 = new QLineEdit(vvod);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 240, 61, 21));
        label_5 = new QLabel(vvod);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 240, 31, 17));
        lineEdit_6 = new QLineEdit(vvod);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(50, 240, 61, 21));
        lineEdit_7 = new QLineEdit(vvod);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 120, 241, 21));
        layoutWidget = new QWidget(vvod);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 320, 301, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(vvod);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 120, 41, 21));

        retranslateUi(vvod);

        QMetaObject::connectSlotsByName(vvod);
    } // setupUi

    void retranslateUi(QDialog *vvod)
    {
        vvod->setWindowTitle(QApplication::translate("vvod", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("vvod", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00007f;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("vvod", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">Z=</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("vvod", "z=f(x;y)", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("vvod", "z=+/-f(x;y)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("vvod", ">x>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("vvod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("vvod", ">y>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("vvod", ">z>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("vvod", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("vvod", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("vvod", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvod: public Ui_vvod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVOD_H
