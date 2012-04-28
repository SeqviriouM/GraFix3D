/********************************************************************************
** Form generated from reading UI file 'ellips.ui'
**
** Created: Sat Oct 29 18:17:58 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPS_H
#define UI_ELLIPS_H

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

class Ui_ellips
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
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
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *ellips)
    {
        if (ellips->objectName().isEmpty())
            ellips->setObjectName(QString::fromUtf8("ellips"));
        ellips->resize(712, 491);
        pushButton = new QPushButton(ellips);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_2 = new QPushButton(ellips);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 240, 85, 27));
        pushButton_3 = new QPushButton(ellips);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_4 = new QPushButton(ellips);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(261, 241, 85, 27));
        label_2 = new QLabel(ellips);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        label_8 = new QLabel(ellips);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 210, 181, 17));
        scrollArea = new QScrollArea(ellips);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1042, 652));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(ellips);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 290, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 653, 120));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_7 = new QPushButton(ellips);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 90, 151, 111));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Res/Ellipse_parameters.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(150, 150));
        layoutWidget = new QWidget(ellips);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 420, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);


        retranslateUi(ellips);

        QMetaObject::connectSlotsByName(ellips);
    } // setupUi

    void retranslateUi(QDialog *ellips)
    {
        ellips->setWindowTitle(QApplication::translate("ellips", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ellips", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ellips", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ellips", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ellips", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ellips", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ellips", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ellips", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\255\320\273\320\273\320\270\320\277\321\201</span>  \342\200\224\320\263\320\265\320\276\320\274\320\265\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\274\320\265\321\201\321\202\320\276 \321\202\320\276\321\207\320\265\320\272 <span style=\" font-style:italic;\">M</span>  \320\225\320\262\320\272\320\273\320\270\320\264\320\276\320\262\320\276\320\271 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\320\270, \320\264\320\273\321\217 \320\272\320\276\321\202\320\276"
                        "\321\200\321\213\321\205 \321\201\321\203\320\274\320\274\320\260 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\271 \320\264\320\276 \320\264\320\262\321\203\321\205 \320\264\320\260\320\275\320\275\321\213\321\205</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \321\202\320\276\321\207\320\265\320\272 <span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">1</span> \320\270 <span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">2</span> (\320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\321\213\321\205 <span style=\" font-weight:600;\">\321\204\320\276\320\272\321\203\321\201\320\260\320\274\320\270</span>) \320\277\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\260 \320\270 \320\261\320\276\320\273\321\214\321\210\320\265 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \320\274\320\265\320"
                        "\266\320\264\321\203 \321\204\320\276\320\272\321\203\321\201\320\260\320\274\320\270, \321\202\320\276 \320\265\321\201\321\202\321\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; font-style:italic;\">| F</span><span style=\" font-weight:600; font-style:italic; vertical-align:sub;\">1</span><span style=\" font-weight:600; font-style:italic;\">M | + | F</span><span style=\" font-weight:600; font-style:italic; vertical-align:sub;\">2</span><span style=\" font-weight:600; font-style:italic;\">M | = 2a, \320\277\321\200\320\270\321\207\320\265\320\274 | F</span><span style=\" font-weight:600; font-style:italic; vertical-align:sub;\">1</span><span style=\" font-weight:600; font-style:italic;\">F</span><span style=\" font-weight:600; font-style:italic; vertical-align:sub;\">2</span><span style=\" font-weight:600; font-style:italic;\"> | &lt; 2a.</span></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; font-style:italic;\">\320\232\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/a</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/b</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; colo"
                        "r:#ff0000;\">=1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\236\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214</span> \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\207\320\260\321\201\321\202\320\275\321\213\320\274 \321\201\320\273\321\203\321\207\320\260\320\265\320\274 \321\215\320\273\320\273\320\270\320\277\321\201\320\260. \320\235\320\260\321\200\321\217\320\264\321\203 \321\201  \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\271 \320\270 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\271, \321\215\320\273\320\273\320\270\320\277\321\201 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\272\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\274</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bl"
                        "ock-indent:0; text-indent:0px;\"> \321\201\320\265\321\207\320\265\320\275\320\270\320\265\320\274 \320\270 \320\272\320\262\320\260\320\264\321\200\320\270\320\272\320\276\320\271. \320\255\320\273\320\273\320\270\320\277\321\201 \321\202\320\260\320\272\320\266\320\265 \320\274\320\276\320\266\320\275\320\276 \320\276\320\277\320\270\321\201\320\260\321\202\321\214 \320\272\320\260\320\272 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\320\265 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\320\270 \320\270 \320\272\321\200\321\203\320\263\320\276\320\262\320\276\320\263\320\276 \321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260 \320\270\320\273\320\270 \320\272\320\260\320\272</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\276\321\200\321\202\320\276\320\263\320\276\320\275\320\260\320\273\321\214\320\275\321\203\321\216 \320\277\321\200\320\276\320\265\320\272"
                        "\321\206\320\270\321\216 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270 \320\275\320\260 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\214.</p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \321\207\320\265\321\200\320\265\320\267 \321\204\320\276\320\272\321\203\321\201\321\213 \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\276\321\202\321\200\320\265\320\267\320\276\320\272 AB, \320\272\320\276\320\275\321\206\321\213 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\273\320\265\320\266\320\260\321\202 \320\275\320\260 \321\215\320\273\320\273\320\270\320\277\321\201\320\265, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217"
                        "</li>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-weight:600;\">\320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\321\214\321\216</span> \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \321\215\320\273\320\273\320\270\320\277\321\201\320\260. \320\224\320\273\320\270\320\275\320\260 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270 \321\200\320\260\320\262\320\275\320\260 2<span style=\" font-family:'times,serif,palatino linotype,new athena unicode,athena,gentium,code2000'; font-style:italic;\">a</span> \320\262 \320\262\321\213\321\210\320\265\320\277\321\200\320\270\320\262\320\265\320\264\321\221\320\275\320\275\320\276\320\274 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\270.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-inde"
                        "nt:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\321\202\321\200\320\265\320\267\320\276\320\272 CD, \320\277\320\265\321\200\320\277\320\265\320\275\320\264\320\270\320\272\321\203\320\273\321\217\321\200\320\275\321\213\320\271 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270 \321\215\320\273\320\273\320\270\320\277\321\201\320\260, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \321\207\320\265\321\200\320\265\320\267 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\321\203\321\216 \321\202\320\276\321\207\320\272\321\203 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270,</li>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"> \320\272\320\276\320\275\321\206\321\213 \320\272\320\276\321\202\320\276\321\200\320\276"
                        "\320\263\320\276 \320\273\320\265\320\266\320\260\321\202 \320\275\320\260 \321\215\320\273\320\273\320\270\320\277\321\201\320\265, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\274\320\260\320\273\320\276\320\271 \320\276\321\201\321\214\321\216</span> \321\215\320\273\320\273\320\270\320\277\321\201\320\260.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\321\202\321\200\320\265\320\267\320\272\320\270, \320\277\321\200\320\276\320\262\320\265\320\264\321\221\320\275\320\275\321\213\320\265 \320\270\320\267 \321\206\320\265\320\275\321\202\321\200\320\260 \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\272 \320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274 \320\275\320"
                        "\260 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\270 \320\274\320\260\320\273\320\276\320\271 \320\276\321\201\321\217\321\205 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217,</li>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"> \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276, <span style=\" font-weight:600;\">\320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\277\320\276\320\273\321\203\320\276\321\201\321\214\321\216</span> \320\270 <span style=\" font-weight:600;\">\320\274\320\260\320\273\320\276\320\271 \320\277\320\276\320\273\321\203\320\276\321\201\321\214\321\216</span> \321\215\320\273\320\273\320\270\320\277\321\201\320\260, \320\270 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\321\216\321\202\321\201\321\217 <span style=\" font-family:'times,serif,palatino linotype,new athena u"
                        "nicode,athena,gentium,code2000'; font-style:italic;\">a</span> \320\270 <span style=\" font-family:'times,serif,palatino linotype,new athena unicode,athena,gentium,code2000'; font-style:italic;\">b</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\242\320\276\321\207\320\272\320\260 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\321\217 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\270 \320\274\320\260\320\273\320\276\320\271 \320\276\321\201\320\265\320\271 \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \320\265\320\263\320\276 <span style=\" font-weight:600;\">\321\206\320\265\320\275\321\202\321\200\320\276\320\274</span>.</l"
                        "i>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217 <span style=\" font-style:italic;\">r</span><span style=\" vertical-align:sub;\">1</span> \320\270 <span style=\" font-style:italic;\">r</span><span style=\" vertical-align:sub;\">2</span> \320\276\321\202 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\270\320\267 \321\204\320\276\320\272\321\203\321\201\320\276\320\262 \320\264\320\276 \320\264\320\260\320\275\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270 \320\275\320\260 \321\215\320\273\320\273\320\270\320\277\321\201\320\265 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 <span style=\" font-weight:600;\">\321\204\320\276\320\272\320"
                        "\260\320\273\321\214\320\275\321\213\320\274\320\270 \321\200\320\260\320\264\320\270\321\203\321\201\320\260\320\274\320\270</span> \320\262 \321\215\321\202\320\276\320\271 \321\202\320\276\321\207\320\272\320\265.</li>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 <span style=\" font-weight:600; color:#ff0000;\">c=F</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">1</span><span style=\" font-weight:600; color:#ff0000;\">F</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/2</span> \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;"
                        "\">\321\204\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265\320\274</span>.</li>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\224\320\270\320\260\320\274\320\265\321\202\321\200\320\276\320\274</span> \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\321\203\321\216 \321\205\320\276\321\200\320\264\321\203, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\321\203\321\216 \321\207\320\265\321\200\320\265\320\267 \320\265\320\263\320\276 \321\206\320\265\320\275\321\202\321\200. </"
                        "li>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-weight:600;\">\320\241\320\276\320\277\321\200\321\217\320\266\321\221\320\275\320\275\321\213\320\274\320\270</span> \320\264\320\270\320\260\320\274\320\265\321\202\321\200\320\260\320\274\320\270 \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202 \320\277\320\260\321\200\321\203 \320\265\320\263\320\276 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\320\276\320\262, \320\276\320\261\320\273\320\260\320\264\320\260\321\216\321\211\320\270\321\205 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\274 \321\201\320\262\320\276\320\271\321\201\321\202\320\262\320\276\320\274:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"> \321\201\320\265\321\200\320\265\320\264\320\270\320\275\321\213 \321\205\320\276\321\200\320\264, \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\321\213\321\205 \320\277\320\265\321\200\320\262\320\276\320\274\321\203 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\321\203, \320\273\320\265\320\266\320\260\321\202 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\274 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\320\265. \320\222 \321\215\321\202\320\276\320\274 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\">\321\201\320\273\321\203\321\207\320\260\320\265 \320\270 \321\201\320\265\321\200\320\265\320\264\320\270\320\275\321\213 \321\205\320\276\321\200\320\264, \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\321\213\321\205 \320\262\321\202\320"
                        "\276\321\200\320\276\320\274\321\203 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\321\203, \320\273\320\265\320\266\320\260\321\202 \320\275\320\260 \320\277\320\265\321\200\320\262\320\276\320\274 \320\264\320\270\320\260\320\274\320\265\321\202\321\200\320\265.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\240\320\260\320\264\320\270\321\203\321\201</span> \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\262 \320\264\320\260\320\275\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\265 \320\262\321\213\321\207\320\270\321\201\320\273\321\217\320\265\321\202\321\201\321\217 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 <span style=\" font-weight:600; color:#ff0000;\">R</spa"
                        "n><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=b</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">*sin</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">(t)+a</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">*cos</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">(t)</span></li>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"> \320\263\320\264\320\265 <span style=\" font-family:'times,serif,palatino linotype,new athena unicode,athena,gentium,code2000'; font-style:italic;\">t</span>\302\240\342\200\224 \321\203\320\263\320"
                        "\276\320\273 \320\275\320\260\320\272\320\273\320\276\320\275\320\260 \320\264\320\276 \320\264\320\260\320\275\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270 (\320\270\320\273\320\270 \320\277\321\200\320\276\321\201\321\202\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \321\215\320\273\320\273\320\270\320\277\321\201\320\260).</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\244\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\274 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\274 </span><span style=\" font-weight:600; color:#ff0000;\">p=b</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600;"
                        " color:#ff0000;\">/a</span>  \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\320\260 \320\264\320\273\320\270\320\275\321\213 <a href=\"http://ru.wikipedia.org/wiki/%D0%A5%D0%BE%D1%80%D0%B4%D0%B0_%28%D0%B3%D0%B5%D0%BE%D0%BC%D0%B5%D1%82%D1%80%D0%B8%D1%8F%29\"><span style=\" text-decoration: underline; color:#0000ff;\">\321\205\320\276\321\200\320\264\321\213</span></a>, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 \321\204\320\276\320\272\321\203\321\201 \320\270 \320\277\320\265\321\200\320\277\320\265\320\275\320\264\320\270\320\272\321\203\320\273\321\217\321\200\320\275\320\276\320\271 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270 \321\215\320\273\320\273\320\270\320\277\321\201\320\260.</li>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bl"
                        "ock-indent:1; text-indent:0px;\"></p>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\321\202\320\275\320\276\321\210\320\265\320\275\320\270\320\265 \320\264\320\273\320\270\320\275 \320\274\320\260\320\273\320\276\320\271 \320\270 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\277\320\276\320\273\321\203\320\276\321\201\320\265\320\271 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\276\320\274 \321\201\320\266\320\260\321\202\320\270\321\217</span> \321\215\320\273\320\273\320\270\320\277\321\201\320\260 \320\270\320\273\320\270 <span style=\" font-weight:600;\">\321\215\320\273\320\273\320\270\320\277\321\202\320\270\321\207\320\275\320\276\321\201\321\202\321\214\321\216.</span></li></ul></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ellips", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\234\320\265\321\202\320\276\320\264 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217, \320\265\321\201\320\273\320\270 \320\265\320\273\320\273\320\270\320\277\321\201 \320\267\320\260\320\264\320\260\320\275 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265\320\274 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">x</span><span style=\" font-weight:600"
                        "; vertical-align:super;\">2</span><span style=\" font-weight:600;\">/a</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">+y</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">/b</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">=1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1) \320\235\320\260 \320\276\321\201\320\270 x \320\276\321\202\320\272\320\273\320\260\320\264\321\213\320\262\320\260\320\265\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\260 \320\270 -\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2) \320\235\320\260 \320\276\321\201\320\270 \321\203 \320\276\321\202\320\272\320\273\320\260\320\264\321\213\320\262\320\260"
                        "\320\265\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217  b \320\270 -b</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3) \320\241\321\202\321\200\320\276\320\270\320\274 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \321\207\320\265\321\200\320\265\320\267 \320\276\321\202\320\274\320\265\321\207\320\265\320\275\320\275\321\213\320\265 \321\202\320\276\321\207\320\272\320\270 \321\201 \320\264\320\273\320\270\320\275\320\260\320\274\320\270 \321\201\321\202\320\276\321\200\320\276\320\275 2a \320\270 2b</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4) \320\222 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\275\321\213\320\271 \320\277\321\200\321\217"
                        "\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 \320\262\320\277\320\270\321\201\321\213\320\262\320\260\320\265\320\274 \321\215\320\273\320\273\320\270\320\277\321\201 </p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
        pushButton_5->setText(QApplication::translate("ellips", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ellips", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ellips: public Ui_ellips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPS_H
