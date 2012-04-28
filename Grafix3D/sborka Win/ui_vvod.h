/********************************************************************************
** Form generated from reading UI file 'vvod.ui'
**
** Created: Sun 6. Nov 12:33:07 2011
**      by: Qt User Interface Compiler version 4.7.0
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
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_vvod
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *vvod)
    {
        if (vvod->objectName().isEmpty())
            vvod->setObjectName(QString::fromUtf8("vvod"));
        vvod->resize(456, 414);
        gridLayout = new QGridLayout(vvod);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vvod);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 6);

        radioButton = new QRadioButton(vvod);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 1, 0, 1, 4);

        radioButton_2 = new QRadioButton(vvod);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 4);

        label_2 = new QLabel(vvod);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEdit_7 = new QLineEdit(vvod);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 3, 1, 1, 6);

        pushButton_3 = new QPushButton(vvod);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 7, 1, 1);

        label_6 = new QLabel(vvod);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 1, 1, 5);

        lineEdit_2 = new QLineEdit(vvod);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 5, 0, 1, 2);

        label_3 = new QLabel(vvod);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 2, 1, 1);

        lineEdit = new QLineEdit(vvod);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit, 5, 3, 1, 2);

        lineEdit_3 = new QLineEdit(vvod);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 6, 0, 1, 2);

        label_4 = new QLabel(vvod);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 2, 1, 1);

        lineEdit_4 = new QLineEdit(vvod);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 6, 3, 1, 2);

        label_7 = new QLabel(vvod);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 6);

        radioButton_3 = new QRadioButton(vvod);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 8, 0, 1, 4);

        radioButton_5 = new QRadioButton(vvod);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 8, 4, 1, 2);

        radioButton_7 = new QRadioButton(vvod);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout->addWidget(radioButton_7, 8, 6, 1, 2);

        radioButton_4 = new QRadioButton(vvod);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 9, 0, 1, 4);

        radioButton_6 = new QRadioButton(vvod);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout->addWidget(radioButton_6, 9, 4, 1, 2);

        radioButton_8 = new QRadioButton(vvod);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        gridLayout->addWidget(radioButton_8, 9, 6, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(vvod);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(vvod);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 10, 0, 1, 6);

        pushButton_4 = new QPushButton(vvod);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 6, 5, 1, 1);


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
        radioButton->setText(QApplication::translate("vvod", "z=f(x;y)", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("vvod", "z=+/-f(x;y)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("vvod", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">Z=</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_7->setToolTip(QApplication::translate("vvod", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \"?\" \321\207\321\202\320\276\320\261\321\213 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\321\200\320\260\320\262\320\272\321\203\n"
"\320\277\320\276 \320\262\320\262\320\276\320\264\321\203 \321\204\321\203\320\275\320\272\321\206\320\270\320\271", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("vvod", "?", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("vvod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("vvod", "\320\235\320\265 \320\274\320\265\320\275\321\214\321\210\320\265 -7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("vvod", "<x<", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("vvod", "\320\235\320\265 \320\261\320\276\320\273\321\214\321\210\320\265 7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("vvod", "\320\235\320\265 \320\274\320\265\320\275\321\214\321\210\320\265 -7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("vvod", "<y<", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_4->setToolTip(QApplication::translate("vvod", "\320\235\320\265 \320\261\320\276\320\273\321\214\321\210\320\265 7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("vvod", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\206\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("vvod", "\320\247\321\221\321\200\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("vvod", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("vvod", "\320\244\320\270\320\276\320\273\320\265\321\202\320\276\320\262\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("vvod", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("vvod", "\320\241\320\270\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        radioButton_8->setText(QApplication::translate("vvod", "\320\226\321\221\320\273\321\202\321\213\320\271", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("vvod", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("vvod", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("vvod", "\320\222\320\262\320\265\321\201\321\202\320\270\n"
" \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvod: public Ui_vvod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVOD_H
