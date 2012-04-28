/********************************************************************************
** Form generated from reading UI file 'parchil.ui'
**
** Created: Sun 6. Nov 12:33:11 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARCHIL_H
#define UI_PARCHIL_H

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

class Ui_parchil
{
public:
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
    QPushButton *pushButton_8;
    QLabel *label_2;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;

    void setupUi(QDialog *parchil)
    {
        if (parchil->objectName().isEmpty())
            parchil->setObjectName(QString::fromUtf8("parchil"));
        parchil->resize(712, 491);
        pushButton = new QPushButton(parchil);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_3 = new QPushButton(parchil);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_2 = new QPushButton(parchil);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 240, 85, 27));
        pushButton_4 = new QPushButton(parchil);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 240, 85, 27));
        scrollArea = new QScrollArea(parchil);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 628, 171));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(parchil);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 290, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 654, 119));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_2 = new QLabel(parchil);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(parchil);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 220, 171, 17));
        label_8->setFont(font);
        layoutWidget = new QWidget(parchil);
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

        pushButton_7 = new QPushButton(parchil);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 161, 171));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Res/pimage432.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(150, 150));
        pushButton_9 = new QPushButton(parchil);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(550, 290, 97, 27));

        retranslateUi(parchil);

        QMetaObject::connectSlotsByName(parchil);
    } // setupUi

    void retranslateUi(QDialog *parchil)
    {
        parchil->setWindowTitle(QApplication::translate("parchil", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("parchil", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("parchil", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("parchil", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("parchil", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("parchil", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\206\320\270\320\273\320\270\320\275\320\264\321\200 - </span><span style=\" color:#000000;\">\321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\270\321\207\320\265\321\201\320\272\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\276\321\200\321\217\320\264\320\272\320\260,</"
                        "span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\264\320\273\321\217 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\276\320\261\321\200\320\260\320\267\321\203\321\216\321\211\320\265\320\271 \321\201\320\273\321\203\320\266\320\270\321\202 </span><span style=\" font-weight:600; color:#000000;\">\320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\260</span><span style=\" color:#000000;\">.\320\225\321\221 \320\277\320\276\320\273\321\203\321\207\320\260\321\216\321\202 \320\277\321\200\320\270 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\270 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\277\320\276 \320\275\320\260\320\277\321\200\320\260"
                        "\320\262\320\273\321\217\321\216\321\211\320\265\320\271 \320\277\321\200\321\217\320\274\320\276\320\271.\320\242\320\276\320\263\320\264\320\260 \321\201\320\273\320\265\320\264\320\276\320\274 \320\276\321\202 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213 \320\261\321\203\320\264\320\265\321\202 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\206\320\270\320\273\320\270\320\275\320\264\321\200.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=2*p*x - </span><span style=\" font-weight:600; color:#000000;\">\320\272\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320"
                        "\275\320\270\320\265</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\206\320\270\320\273\320\270\320\275\320\264\321\200 \321\204\320\276\320\272\321\203\321\201\320\270\321\200\321\203\320\265\321\202 \320\277\321\203\321\207\320\276\320\272 \320\273\321\203\321\207\320\265\320\271 \320\262 \320\273\320\270\320\275\320\270\321\216, \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\275\321\203\321\216 \320\270\320\267</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\321\204\320\276\320\272\321\203\321\201\320\276\320\262 \320\277\320\260\321\200\320\260\320\261\320\276\320\273, \321\217\320\262\320\273\321\217\321\216\321\211\320\270"
                        "\321\205\321\201\321\217 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\320\274\320\270 \321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\277\320\265\321\200\320\277\320\265\320\275\320\264\320\270\320\272\321\203\320\273\321\217\321\200\320\275\321\213\320\274\320\270 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\321\217\321\216\321\211\320\265\320\271. \320\221\320\273\320\260\320\263\320\276\320\264\320\260\321\200\321\217 \321\215\321\202\320\276\320\274\321\203 \321\201\320\262\320\276\320\271\321\201\321\202\320\262\321\203 \321\200\320\265\321\204\320\273\320\265\320\272\321\202\320\276\321\200\321\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\270\320\275\321\204\320\260\320\272\321\200\320\260\321\201\320\275\321\213\321\205 \320\276\320\261\320\276\320\263\321\200\320\265\320\262\320\260\321\202\320\265\320\273\320\265\320\271 \320\270 \320\277\321\200\320\276\320\266\320\265\320\272\321\202\320\276\321\200\320\276\320\262 \321\201 \320\273\320\270\320\275\320\265\320\271\320\275\321\213\320\274\320\270 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272\320\260\320\274\320\270 \321\201\320\262\320\265\321\202\320\260 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\321\207\320\260\321\201\321\202\320\276 \320\270\320\267\320\263\320\276\321\202\320\260\320\262\320\273\320\270\320\262\320\260\321\216\321\202 \320\262 \321\204\320\276\321\200\320\274\320\265 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272"
                        "\320\276\320\263\320\276 \321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("parchil", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271</span>:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">z=c. </span>\320\222 \321\201\320\265\321\207\320\265\320\275\320\270\321"
                        "\217\321\205 <span style=\" font-weight:600;\">\320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\320\237\320\276\320\264\320\275\320\270\320\274\320\260\320\265\320\274 \320\276\321\202 \321\201\320\260\320\274\320\276\320\271 &quot;\320\275\320\270\320\266\320\275\320\265\320\271&quot; \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213 \320\272 \321\201\320\260\320\274\320\276\320\271 &quot;\320\262\320\265\321\200\321\205\320\275\320\265\320\271&quot; \320\273\320\270\320\275\320\270\320\270 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\321\213\320\265 \320\276\321\201\320\270 z.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3)\320\237\320\276\320\273\321\203\321"
                        "\207\320\260\320\265\320\274 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\206\320\270\320\273\320\270\320\275\320\264\321\200.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("parchil", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\260\320\261\320\276\320\273\321\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("parchil", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("parchil", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("parchil", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("parchil", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QString());
        pushButton_9->setText(QApplication::translate("parchil", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class parchil: public Ui_parchil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARCHIL_H
