/********************************************************************************
** Form generated from reading UI file 'giper.ui'
**
** Created: Sun 6. Nov 12:33:13 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIPER_H
#define UI_GIPER_H

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

class Ui_giper
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

    void setupUi(QDialog *giper)
    {
        if (giper->objectName().isEmpty())
            giper->setObjectName(QString::fromUtf8("giper"));
        giper->resize(712, 491);
        pushButton = new QPushButton(giper);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_2 = new QPushButton(giper);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 240, 85, 27));
        pushButton_3 = new QPushButton(giper);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_4 = new QPushButton(giper);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(261, 241, 85, 27));
        label_2 = new QLabel(giper);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        label_8 = new QLabel(giper);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 210, 211, 17));
        scrollArea = new QScrollArea(giper);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 957, 524));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(giper);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 290, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 653, 137));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_7 = new QPushButton(giper);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 90, 151, 101));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Res/270011.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(150, 150));
        layoutWidget = new QWidget(giper);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 430, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);


        retranslateUi(giper);

        QMetaObject::connectSlotsByName(giper);
    } // setupUi

    void retranslateUi(QDialog *giper)
    {
        giper->setWindowTitle(QApplication::translate("giper", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("giper", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("giper", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("giper", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("giper", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("giper", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("giper", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("giper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\223\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\260</span><span style=\" color:#aaaa00;\">\302\240</span>\302\240\342\200\224 \320\263\320\265\320\276\320\270\320\265\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\274\320\265\321\201\321\202\320\276 \321\202\320\276\321\207\320\265\320\272 <span style=\" font-style:italic;\">M \320\225\320\262\320\272\320\273\320\270\320\264\320\276\320\262\320\276\320\271 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321"
                        "\202\320\270</span>, \320\264\320\273\321\217 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\270 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\271 \320\276\321\202 <span style=\" font-style:italic;\">M</span> \320\264\320\276 \320\264\320\262\321\203\321\205 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \321\202\320\276\321\207\320\265\320\272 <span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">1</span> \320\270 <span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">2</span> (\320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\321\213\321"
                        "\205 <span style=\" font-weight:600;\">\321\204\320\276\320\272\321\203\321\201\320\260\320\274\320\270</span>) \320\277\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\276. \320\242\320\276\321\207\320\275\320\265\320\265,</p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">||F</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">1</span><span style=\" font-weight:600; color:#ff0000;\">M|-|F</span><span style=\" font-weight:600; color:#ff0000; vertical-align:sub;\">2</span><span style=\" font-weight:600; color:#ff0000;\">M|| = 2*a</span> \320\277\321\200\320\270\321\207\320\265\320\274 | <span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">1</span><span style=\" font-style:italic;\">F</span><span style=\" vertical-align:sub;\">2</span> | &gt; 2<span style=\" font-style:italic;\">a</span> &gt; 0.</p>\n"
"<p style=\" margin-t"
                        "op:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; font-style:italic;\">\320\232\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213:</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/a</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">-y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/b</span><span style=\" font-w"
                        "eight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=1</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\223\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\260 \321\201\320\276\321\201\321\202\320\276\320\270\321\202 \320\270\320\267 \320\264\320\262\321\203\321\205 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\213\321\205 \320\272\321\200\320\270\320\262\321\213\321\205, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202 <span style=\" font-weight:600;\">\320\262\320\265\321\202\320\262\321\217\320\274\320\270</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\">\320\221\320\273\320\270\320\266\320\260\320\271\321\210\320\270\320\265 \320\264\321\200\321\203\320\263 \320\272 \320\264\321\200\321\203\320\263\321\203 \321\202\320\276\321\207\320\272\320\270 \320\264\320\262\321\203\321\205 \320\262\320\265\321\202\320\262\320\265\320\271 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274\320\270</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\321\200\320\260\321\202\321\207\320\260\320\271\321\210\320\265\320\265 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 "
                        "\320\274\320\265\320\266\320\264\321\203 \320\264\320\262\321\203\320\274\321\217 \320\262\320\265\321\202\320\262\321\217\320\274\320\270 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\321\214\321\216</span><span style=\" font-weight:600;\"> \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\265\321\200\320\265\320\264\320\270\320\275\320\260 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270 \320\275\320\260\320"
                        "\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\321\206\320\265\320\275\321\202\321\200\320\276\320\274</span> \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\276\321\202 \321\206\320\265\320\275\321\202\321\200\320\260 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\264\320\276 \320\276\320\264\320\275\320\276\320\271 \320\270\320\267 \320\262\320\265\321\200\321\210\320\270\320\275</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\320\261\320\276\320\273\321\214\321"
                        "\210\320\276\320\271 \320\277\320\276\320\273\321\203\320\276\321\201\321\214\321\216</span><span style=\" font-weight:600;\"> </span>\320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213. \320\236\320\261\321\213\321\207\320\275\320\276 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\320\265\321\202\321\201\321\217 <span style=\" font-style:italic;\">a</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\276\321\202 \321\206\320\265\320\275\321\202\321\200\320\260 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\264\320\276 \320\276\320\264\320\275\320\276\320\263\320\276 \320\270\320\267 \321\204\320\276\320\272\321\203\321\201"
                        "\320\276\320\262 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600;\">\321\204\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265\320\274</span>. \320\236\320\261\321\213\321\207\320\275\320\276 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\320\265\321\202\321\201\321\217 <span style=\" font-style:italic;\">c</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\320\261\320\260 \321\204\320\276\320\272\321\203\321\201\320\260 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\273\320\265\320\266\320\260\321\202 \320\275\320\260 \320\277\321\200\320\276\320\264\320\276\320"
                        "\273\320\266\320\265\320\275\320\270\320\270 \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\276\321\201\320\270 \320\275\320\260 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\320\276\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\270 \320\276\321\202 \321\206\320\265\320\275\321\202\321\200\320\260 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\321\217\320\274\320\260\321\217, \321\201\320\276\320\264\320\265\321\200\320\266\320\260\321\211\320\260\321\217 \320\261\320\276\320\273\321\214\321\210\321\203\321\216 \320\276\321\201\321\214 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\320\264\320\265\320\271\321"
                        "\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271</span><span style=\" font-weight:600;\"> \320\270\320\273\320\270 </span><span style=\" font-weight:600; font-style:italic;\">\320\277\320\276\320\277\320\265\321\200\320\265\321\207\320\275\320\276\320\271</span><span style=\" font-weight:600;\"> \320\276\321\201\321\214\321\216</span> \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\321\217\320\274\320\260\321\217, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\265\321\200\320\277\320\265\320\275\320\264\320\270\320\272\321\203\320\273\321\217\321\200\320\275\320\260\321\217 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \320\276\321\201\320\270 \320"
                        "\270 \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\260\321\217 \321\207\320\265\321\200\320\265\320\267 \320\265\321\221 \321\206\320\265\320\275\321\202\321\200 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\320\274\320\275\320\270\320\274\320\276\320\271</span><span style=\" font-weight:600;\"> \320\270\320\273\320\270 </span><span style=\" font-weight:600; font-style:italic;\">\321\201\320\276\320\277\321\200\321\217\320\266\320\265\320\275\320\275\320\276\320\271</span><span style=\" font-weight:600;\"> </span>\320\276\321\201\321\214\321\216 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320"
                        "\236\321\202\321\200\320\265\320\267\320\276\320\272 \320\274\320\265\320\266\320\264\321\203 \321\204\320\276\320\272\321\203\321\201\320\276\320\274 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\270 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\271, \320\277\320\265\321\200\320\277\320\265\320\275\320\264\320\270\320\272\321\203\320\273\321\217\321\200\320\275\321\213\320\271 \320\265\321\221 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \320\276\321\201\320\270, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\321\204\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\274 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\274</span><span style=\" font-weight:600;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\276\321\202 \321\204\320\276\320\272\321\203\321\201\320\260 \320\264\320\276 <span style=\" font-weight:600;\">\320\260\321\201\320\270\320\274\320\277\321\202\320\276\321\202\321\213</span> \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 <span style=\" font-weight:600; font-style:italic;\">\320\277\321\200\320\270\321\206\320\265\320\273\321\214\320\275\321\213\320\274 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\274</span><span style=\" font-weight:600;\">.</span> \320\236\320\261\321\213\321\207\320\275\320\276 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\320"
                        "\265\321\202\321\201\321\217 <span style=\" font-style:italic;\">b</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("giper", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\234\320\265\321\202\320\276\320\264 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217  </span>\320\265\321\201\320\273\320\270 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\260 \320\267\320\260\320\264\320\260\320\275\320\260 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265\320\274 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">x</span><span "
                        "style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">/a</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">-y</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">/b</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">=1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1) \320\235\320\260 \320\276\321\201\320\270 x \320\276\321\202\320\272\320\273\320\260\320\264\321\213\320\262\320\260\320\265\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\260 \320\270 -\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2) \320\235\320\260 \320\276\321\201\320\270 \321\203 \320\276\321\202\320\272\320\273\320\260\320\264"
                        "\321\213\320\262\320\260\320\265\320\274 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217  b \320\270 -b</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3) \320\241\321\202\321\200\320\276\320\270\320\274 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \321\207\320\265\321\200\320\265\320\267 \320\276\321\202\320\274\320\265\321\207\320\265\320\275\320\275\321\213\320\265 \321\202\320\276\321\207\320\272\320\270 \321\201 \320\264\320\273\320\270\320\275\320\260\320\274\320\270 \321\201\321\202\320\276\321\200\320\276\320\275 2a \320\270 2b</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4) \320\247\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\321\202\320\270\320\262\320\276"
                        "\320\277\320\276\320\273\320\276\320\266\320\275\321\213\320\265 \320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\277\321\200\320\276\320\262\320\276\320\264\320\270\320\274 \320\260\321\201\320\270\320\277\320\274\321\202\320\276\321\202\321\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5) \320\227\320\260\321\202\320\265\320\274 \320\270\320\267 \321\204\320\276\320\272\321\203\321\201\320\260, \321\203\321\207\320\270\321\202\321\213\320\262\320\260\321\217 \320\260\321\201\320\270\320\274\320\277\321\202\320\276\321\202\321\213 \321\201\321\202\321\200\320\276\320\270\320\274 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\203</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
        pushButton_5->setText(QApplication::translate("giper", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("giper", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class giper: public Ui_giper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIPER_H
