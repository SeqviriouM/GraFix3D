/********************************************************************************
** Form generated from reading UI file 'sfera.ui'
**
** Created: Mon Sep 19 09:48:26 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFERA_H
#define UI_SFERA_H

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

class Ui_sfera
{
public:
    QLabel *label_2;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *sfera)
    {
        if (sfera->objectName().isEmpty())
            sfera->setObjectName(QString::fromUtf8("sfera"));
        sfera->resize(712, 491);
        label_2 = new QLabel(sfera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(sfera);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 210, 231, 17));
        label_8->setFont(font);
        pushButton = new QPushButton(sfera);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_3 = new QPushButton(sfera);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_2 = new QPushButton(sfera);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 240, 85, 27));
        pushButton_4 = new QPushButton(sfera);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 240, 85, 27));
        scrollArea = new QScrollArea(sfera);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 552, 154));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(sfera);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 270, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 594, 103));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        layoutWidget = new QWidget(sfera);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 440, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(sfera);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 161, 161));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/\320\270\320\275\321\204\320\260/220px-Sphere-wireframe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(150, 150));

        retranslateUi(sfera);

        QMetaObject::connectSlotsByName(sfera);
    } // setupUi

    void retranslateUi(QDialog *sfera)
    {
        sfera->setWindowTitle(QApplication::translate("sfera", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("sfera", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("sfera", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("sfera", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("sfera", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("sfera", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("sfera", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("sfera", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\241\321\204\320\265\321\200\320\260-</span><span style=\" color:#000000;\">\320\267\320\260\320\274\320\272\320\275\321\203\321\202\320\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214, \320\263\320\265\320\274\320\265\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\274\320\265\321\201\321\202\320\276 \321\202\320\276\321\207\320\265\320\272 \320\262 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320"
                        "\262\320\265,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\321\200\320\260\320\262\320\275\320\276\321\203\320\264\320\260\320\273\321\221\320\275\320\275\321\213\321\205 \320\276\321\202 \320\264\320\260\320\275\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\320\276\320\271 \321\206\320\265\320\275\321\202\321\200\320\276\320\274 \321\201\321\204\320\265\321\200\321\213.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\241\321\204\320\265\321\200\320\260 \321\202\320\260\320\272\320\266\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\202\320\265\320\273\320\276\320\274 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217, \320\276\320\261\321"
                        "\200\320\260\320\267\320\276\320\262\320\260\320\275\320\275\321\213\320\274 \320\277\321\200\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\320\270 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\277\320\276\320\273\321\203\320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270 \320\262\320\276\320\272\321\200\321\203\320\263 \321\201\320\262\320\276\320\265\320\263\320\276 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><sp"
                        "an style=\" font-weight:600; color:#ff0000;\">+z</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=r</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#000000;\"> - \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\201\321\204\320\265\321\200\321\213 \320\262 \320\275\320\260\321\207\320\260\320\273\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">(x-x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">0</span><span style=\" font-weight:600; color:#ff0000;\">)</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+(y-y</span><spa"
                        "n style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">0</span><span style=\" font-weight:600; color:#ff0000;\">)</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+(z-z</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">0</span><span style=\" font-weight:600; color:#ff0000;\">)</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=r</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" color:#000000;\">- \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\201\321\204\320\265\321\200\321\213 \321\201 \320\275\320\260\321\207\320\260\320\273\320\276\320\274 \320\262 \321\202\320\276\321\207\320\272\320\265 (x0;y0;z0)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><span style=\" color:#000000;\">r-\321\200\320\260\320\264\320\270\321\203\321\201 \321\201\321\204\320\265\321\200\321\213.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("sfera", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271</span>:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">x=x</span><span style=\" font-weight:600; vertical-align:sub;\">0</spa"
                        "n><span style=\" font-weight:600;\"> ; </span><span style=\" font-weight:600;\"> y=y</span><span style=\" font-weight:600; vertical-align:sub;\">0</span><span style=\" font-weight:600;\"> ; z=z</span><span style=\" font-weight:600; vertical-align:sub;\">0</span><span style=\" vertical-align:sub;\"> </span>.(\320\265\321\201\320\273\320\270 x<span style=\" vertical-align:sub;\">0</span>=0;y<span style=\" vertical-align:sub;\">0</span>=0;z<span style=\" vertical-align:sub;\">0</span>=0, \321\202\320\276 \321\201\320\265\321\207\321\221 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\320\262\320\265\320\275\320\275\320\276 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 Ozy, Ozx, Oxy) \320\222 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\276"
                        "\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\320\241\320\276\320\265\320\264\320\270\320\275\321\217\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3)\320\237\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \321\201\321\204\320\265\321\200\321\203.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("sfera", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("sfera", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sfera: public Ui_sfera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFERA_H
