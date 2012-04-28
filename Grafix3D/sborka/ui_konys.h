/********************************************************************************
** Form generated from reading UI file 'konys.ui'
**
** Created: Sun Oct 16 13:49:14 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONYS_H
#define UI_KONYS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_konys
{
public:
    QLabel *label_2;
    QLabel *label_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *konys)
    {
        if (konys->objectName().isEmpty())
            konys->setObjectName(QString::fromUtf8("konys"));
        konys->resize(712, 491);
        label_2 = new QLabel(konys);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(konys);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 210, 181, 17));
        label_8->setFont(font);
        scrollArea = new QScrollArea(konys);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 702, 171));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(konys);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(40, 290, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 629, 119));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton = new QPushButton(konys);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_3 = new QPushButton(konys);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_2 = new QPushButton(konys);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 85, 27));
        pushButton_4 = new QPushButton(konys);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 240, 85, 27));
        layoutWidget = new QWidget(konys);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 450, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(konys);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 151, 141));

        retranslateUi(konys);

        QMetaObject::connectSlotsByName(konys);
    } // setupUi

    void retranslateUi(QDialog *konys)
    {
        konys->setWindowTitle(QApplication::translate("konys", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("konys", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("konys", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("konys", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\232\320\276\320\275\321\203\321\201</span>-\321\202\320\265\320\273\320\276 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\320\276\320\265 \320\276\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265\320\274 \320\262\321\201\320\265\321\205 \320\273\321\203\321\207\320\265\320\271, \320\270\321\201\321\205\320\276\320\264\321\217\321\211\320\270\321\205 \320\270\320\267 \320\276\320\264\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270(<span style=\" "
                        "font-weight:600;\">\320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\272\320\276\320\275\321\203\321\201\320\260</span>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\270 \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\321\205 \321\207\320\265\321\200\320\265\320\267 \320\277\320\273\320\276\321\201\320\272\321\203\321\216 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">x</span><span style=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">/a</span><span style=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">+y</span><span style=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">/b</span><span s"
                        "tyle=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">-z</span><span style=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">/c</span><span style=\" color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#ff0000;\">=0</span> - <span style=\" font-weight:600;\">\320\272\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\203\321\201\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\321\201\320\273\320\270 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265\320\274 \320\272\320\276\320\275\321\203\321\201\320\260 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\">\320\274\320\275\320\276\320\263\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272, \321\202\320\276 \320\272\320\276\320\275\321\203\321\201 \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\201\321\217 \320\277\320\270\321\200\320\260\320\274\320\270\320\264\320\276\320\271.\320\236\321\202\321\200\320\265\320\267\320\276\320\272 \321\201\320\276\320\265\320\264\320\270\320\275\321\217\321\216\321\211\320\270\320\271 \320\262\320\265\321\200\321\210\320\270\320\275\321\203 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\276\320\261\321\200\320\260\320\267\321\203\321\216\321\211\320\265\320\271 \320\272\320"
                        "\276\320\275\321\203\321\201\320\260. </span>\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\276\320\261\321\200\320\260\320\267\321\203\321\216\321\211\320\270\321\205 \320\272\320\276\320\275\321\203\321\201\320\260 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\276\320\261\321\200\320\260\320\267\321\203\321\216\321\211\320\265\320\271 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\214\321\216. </span>\320\236\320\261\321\200\320\260\320\267\321\203\321\216\321\211\320\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\272\320\276\320\275\321\203\321\201\320\260"
                        " \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\272\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214\321\216.\320\236\321\202\321\200\320\265\320\267\320\276\320\272 \320\276\320\277\321\203\321\211\320\265\320\275\320\275\321\213\320\271 \320\270\320\267 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\275\320\260 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\214 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\262\321\213\321\201\320\276\321\202\320\276\320\271</span>.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("konys", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">x=c </span>\320\270 <span style=\" font-weight:600;\">y=c</span>.\320\222"
                        " \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\261\321\203\320\264\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\260\321\202\321\214 <span style=\" font-weight:600;\">\320\277\320\265\321\200\320\265\321\201\320\265\320\272\320\260\321\216\321\211\320\270\320\265\321\201\321\217 \320\277\321\200\321\217\320\274\321\213\320\265</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">z=c.</span>\320\222 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 <span style=\" font-weight:600;\">\321\215\320\273\320\273\320\270\320\277\321\201\321\213.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\">3)\320\241\320\276\320\265\320\264\320\270\320\275\321\217\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\272\320\276\320\275\321\203\321\201.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("konys", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \321\215\320\273\320\273\320\270\320\277\321\201\320\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("konys", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("konys", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("konys", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("konys", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("konys", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("konys", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class konys: public Ui_konys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONYS_H
