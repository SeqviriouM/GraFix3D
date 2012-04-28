/********************************************************************************
** Form generated from reading UI file 'ellipsoid.ui'
**
** Created: Sun Oct 16 13:49:14 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPSOID_H
#define UI_ELLIPSOID_H

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

class Ui_ellipsoid
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_8;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QPushButton *pushButton_8;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;

    void setupUi(QDialog *ellipsoid)
    {
        if (ellipsoid->objectName().isEmpty())
            ellipsoid->setObjectName(QString::fromUtf8("ellipsoid"));
        ellipsoid->resize(712, 491);
        label = new QLabel(ellipsoid);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 67, 17));
        pushButton = new QPushButton(ellipsoid);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        scrollArea = new QScrollArea(ellipsoid);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(-201, -64, 674, 171));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_3 = new QPushButton(ellipsoid);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        label_2 = new QLabel(ellipsoid);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(ellipsoid);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 220, 181, 17));
        label_8->setFont(font);
        scrollArea_2 = new QScrollArea(ellipsoid);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(40, 270, 491, 171));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 593, 153));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        layoutWidget_2 = new QWidget(ellipsoid);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 450, 511, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_2 = new QPushButton(ellipsoid);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 240, 85, 27));
        pushButton_4 = new QPushButton(ellipsoid);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(261, 241, 85, 27));
        pushButton_7 = new QPushButton(ellipsoid);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 151, 141));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/\320\270\320\275\321\204\320\260/600px-Gnuplot_ellipsoid.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(200, 200));

        retranslateUi(ellipsoid);

        QMetaObject::connectSlotsByName(ellipsoid);
    } // setupUi

    void retranslateUi(QDialog *ellipsoid)
    {
        ellipsoid->setWindowTitle(QApplication::translate("ellipsoid", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ellipsoid", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ellipsoid", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\255\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264</span> - \320\267\320\260\320\274\320\272\320\275\321\203\321\202\320\260\321\217 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\276\321\200\321\217\320\264\320\272\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\">,\320\270\320\274\320\265\320\265\321\202 \321\206\320\265\320\275\321\202\321\200 \321\201\320\270\320\274\320\274\320\265\321\202\321\200\320\270\320\270 \321\202\320\276\321\207\320\272\321\203 \320\236(0,0) \320\270 \321\202\321\200\320\270 \320\276\321\201\320\270 \321\201\320\270\320\274\320\274\320\265\321\202\321\200\320\270\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 <span style=\" font-weight:600;\">\320\276\321\201\321\217\320\274\320\270 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264\320\260</span>. \320\242\320\276\321\207\320\272\320\270 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\321\217 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260"
                        "\321\202\320\275\321\213\321\205</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\276\321\201\320\265\320\271 \321\201 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264\320\276\320\274 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 \320\265\320\263\320\276 <span style=\" font-weight:600;\">\320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274\320\270</span>. \320\222 \321\201\320\273\321\203\321\207\320\260\320\265 \320\272\320\276\320\263\320\264\320\260 \320\277\320\260\321\200\320\260 \320\277\320\276\320\273\321\203\320\276\321\201\320\265\320\271 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\270\320\274\320\265\320\265\321\202 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\203\321\216 \320\264\320\273\320\270\320\275\321\203, \321\215\320\273\320"
                        "\273\320\270\320\277\321\201\320\276\320\270\320\264 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\277\320\276\320\273\321\203\321\207\320\265\320\275 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\320\265\320\274 \321\215\320\273\320\273\320\270\320\277\321\201\320\260 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\262\320\276\320\272\321\200\321\203\320\263 \320\276\320\264\320\275\320\276\320\271 \320\270\320\267 \320\276\321\201\320\265\320\271. \320\242\320\260\320\272\320\276\320\271 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202 <span style=\" font-weight:600; color:#ff0000;\">\321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264\320\276\320\274 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217</span> \320\270\320\273\320\270 <span style=\" font-weigh"
                        "t:600; color:#ff0000;\">\321\201\321\204\320\265\321\200\320\276\320\270\320\264\320\276\320\274</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2/</span><span style=\" font-weight:600; color:#ff0000;\">a</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/b</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+z</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/c</span><span style=\" font-weight:600; color:#ff0000; ve"
                        "rtical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=1</span><span style=\" color:#ff0000;\"> </span><span style=\" color:#ff0000; vertical-align:super;\"> </span>- <span style=\" font-weight:600;\">\320\272\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\215\320\273\320\273\320\270\320\277\321\201\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ellipsoid", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ellipsoid", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\320\276\321\204\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ellipsoid", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ellipsoid", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\321\202\321\214 \320\261\321\203\320\264\320\265\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\222 \320\275\320\260\321\207\320\260\320\273\320\265 \321\201\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270"
                        " <span style=\" font-weight:600;\">z=\321\201</span>. \320\222 \320\270\321\202\320\276\320\263\320\265 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\262 \321\201\320\265\321\207\320\265\320\275\320\270\320\270 <span style=\" font-weight:600;\">\321\215\320\273\320\273\320\270\320\277\321\201\321\213</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\320\220 \320\275\320\260\320\273\320\276\320\263\320\270\321\207\320\275\320\276 \320\265\321\201\320\273\320\270 \321\201\320\265\321\207\321\214 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">y=\321\201</span>  \320\270\320\273\320\270 <span style=\" font-weight:600;\">x=\321\201</span>  \320\262 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 <span style=\" font-weight:600;\">\321\215\320\273\320"
                        "\273\320\270\320\277\321\201\321\213</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3)\320\241\320\276\320\265\320\264\320\270\320\275\321\217\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264   </p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ellipsoid", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \321\215\320\273\320\273\320\270\320\277\321\201\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ellipsoid", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ellipsoid", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ellipsoid", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ellipsoid", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ellipsoid: public Ui_ellipsoid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPSOID_H
