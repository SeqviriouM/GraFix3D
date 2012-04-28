/********************************************************************************
** Form generated from reading UI file 'giperbola.ui'
**
** Created: Sat Oct 29 18:27:22 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIPERBOLA_H
#define UI_GIPERBOLA_H

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

class Ui_giperbola
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_2;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *giperbola)
    {
        if (giperbola->objectName().isEmpty())
            giperbola->setObjectName(QString::fromUtf8("giperbola"));
        giperbola->resize(712, 491);
        scrollArea = new QScrollArea(giperbola);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -50, 809, 305));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(giperbola);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 270, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -59, 607, 152));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_2 = new QLabel(giperbola);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(giperbola);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 210, 201, 17));
        label_8->setFont(font);
        pushButton = new QPushButton(giperbola);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_3 = new QPushButton(giperbola);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_2 = new QPushButton(giperbola);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 240, 85, 27));
        pushButton_4 = new QPushButton(giperbola);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 240, 85, 27));
        layoutWidget = new QWidget(giperbola);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 410, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(giperbola);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 151, 141));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Res/i.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(250, 250));
        pushButton_8 = new QPushButton(giperbola);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(550, 270, 97, 27));

        retranslateUi(giperbola);

        QMetaObject::connectSlotsByName(giperbola);
    } // setupUi

    void retranslateUi(QDialog *giperbola)
    {
        giperbola->setWindowTitle(QApplication::translate("giperbola", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("giperbola", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\270\320\264</span> \342\200\225 \321\202\320\270\320\277 <a href=\"http://ru.wikipedia.org/wiki/%D0%9F%D0%BE%D0%B2%D0%B5%D1%80%D1%85%D0%BD%D0%BE%D1%81%D1%82%D1%8C_%D0%B2%D1%82%D0%BE%D1%80%D0%BE%D0%B3%D0%BE_%D0%BF%D0%BE%D1%80%D1%8F%D0%B4%D0%BA%D0%B0\"><span style=\" text-decoration: underline; color:#000000;\">\320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\202\320\276\321\200\320\276\320\263\320"
                        "\276 \320\277\320\276\321\200\321\217\320\264\320\272\320\260</span></a>. \320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\270\320\264 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\276\321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\320\267\320\276\320\262\320\260\320\275 \320\272\320\260\320\272 \320\275\320\265\320\267\320\260\320\274\320\272\320\275\321\203\321\202\320\260\321\217</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \320\275\320\265\321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217 (\321\202\320\276 \320\265\321\201\321\202\321\214 \320\275\320\265 \320\270\320\274\320\265\321\216\321\211\320\260\321\217 <span style=\" font-weight:600; font-style:italic;\">\321\206</span><a href=\"http://ru.wikipedia.org/w/index.php?title=%D0%A6%D0%B5%D0%BD%D1%82%D1%80_%D1%81%D0%B8%D0%BC%D0%BC%D0%B5%D1%82%D1%80%D0%B8"
                        "%D0%B8&amp;action=edit&amp;redlink=1\"><span style=\" font-weight:600; font-style:italic; text-decoration: underline; color:#000000;\">\320\265\320\275\321\202\321\200\320\260 \321\201\320\270\320\274\320\274\320\265\321\202\321\200\320\270\320\270</span></a>) \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\276\321\200\321\217\320\264\320\272\320\260.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\270\320\264\320\260 \320\262 <a href=\"http://ru.wikipedia.org/wiki/%D0%94%D0%B5%D0%BA%D0%B0%D1%80%D1%82%D0%BE%D0%B2%D1%8B_%D0%BA%D0%BE%D0%BE%D1%80%D0%B4%D0%B8%D0%BD%D0%B0%D1%82%D1%8B\"><spa"
                        "n style=\" text-decoration: underline; color:#000000;\">\320\264\320\265\320\272\320\260\321\200\321\202\320\276\320\262\321\213\321\205 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260\321\205</span></a>:</p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">z=a*x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">-</span><span style=\" font-weight:600; color:#ff0000;\"> b*y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\223\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\277\320\260\321\200\320\260\320"
                        "\261\320\276\320\273\320\276\320\270\320\264</span> (\320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\321\213\320\271 \320\262 \321\201\321\202\321\200\320\276\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\265 \302\253\320\263\320\270\320\277\320\260\321\200\302\273)\302\240\342\200\224 </p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\321\201\320\265\320\264\320\273\320\276\320\276\320\261\321\200\320\260\320\267\320\275\320\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214, \320\276\320\277\320\270\321\201\321\213\320\262\320\260\320\265\320\274\320\260\321\217 \320\262 <span style=\" font-style:italic;\">\320\277</span><a href=\"http://ru.wikipedia.org/wiki/%D0%9F%D1%80%D1%8F%D0%BC%D0%BE%D1%83%D0%B3%D0%BE%D0%BB%D1%8C%D0%BD%D0%B0%D1%8F_%D1%81%D0%B8%D1%81%D1%82%D0%B5%D0%BC%D0%B0_%D0%BA%D0%BE%D0%BE%D1%80%D0%B4%D0%B8%D0%BD%D0%B0%D1%82\"><span "
                        "style=\" font-style:italic; text-decoration: underline; color:#000000;\">\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202</span></a> \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265\320\274 \320\262\320\270\320\264\320\260</p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">z=x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/a</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">-y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/b</span>"
                        "<span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\270\320\264\320\275\320\276, \321\207\321\202\320\276 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\270\320\264 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 <a href=\"http://ru.wikipedia.org/wiki/%D0%9B%D0%B8%D0%BD%D0%B5%D0%B9%D1%87%D0%B0%D1%82%D0%B0%D1%8F_%D0%BF%D0%BE%D0%B2%D0%B5%D1%80%D1%85%D0%BD%D0%BE%D1%81%D1%82%D1%8C\"><span style=\" text-decoration: underline; color:#000000;\">\320\273\320\270\320\275\320\265\320\271\321\207\320\260\321\202\320\276\320\271 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214\321\216</span></a>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:8px; m"
                        "argin-bottom:8px; margin-left:30px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\260 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\265\320\274 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213, \320\262\320\265\321\202\320\262\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\321\213 \320\262\320\275\320\270\320\267, \320\277\320\276 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\265,</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"> \320\262\320\265\321\202\320\262\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\321\213 \320\262\320\262\320\265\321\200\321\205, \320\277\321\200\320\270 \321\203\321\201\320\273\320\276\320\262\320\270\320\270, \321\207\321\202\320\276 \320\277\320\265\321\200\320\262\320\260\321\217 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\260 \321\201\320\276\320\277\321\200\320\270\320\272\320\260\321\201\320\260\320\265\321\202\321\201\321\217 \321\201\320\276 \320\262\321\202\320\276\321\200\320\276\320\271 \321\201\320\262\320\276\320\265\320\271 \320\262\320\265\321\200\321\210\320\270\320\275\320\276\320\271.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("giperbola", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\321\202\321\214 \320\261\321\203\320\264\320\265\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1) \320\222\320\275\320\260\321\207\320\260\320\273\320\265 \321\201\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270"
                        " <span style=\" font-weight:600;\">z=c</span>. \320\222 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2) \320\237\321\200\320\270 \321\201\320\265\321\207\320\265\320\275\320\270\320\270 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">y=c</span> \320\270 <span style=\" font-weight:600;\">x=c</span> \320\262 \321\201\320\265\321\207\320\265\320\275\320\270\320\270 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3) \320\241\320\276\320\265\320\264\320"
                        "\270\320\275\321\217\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\276\320\270\320\264.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("giperbola", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("giperbola", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("giperbola", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("giperbola", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("giperbola", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("giperbola", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("giperbola", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("giperbola", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("giperbola", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("giperbola", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
        pushButton_8->setText(QApplication::translate("giperbola", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class giperbola: public Ui_giperbola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIPERBOLA_H
