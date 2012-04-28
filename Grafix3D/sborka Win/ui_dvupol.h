/********************************************************************************
** Form generated from reading UI file 'dvupol.ui'
**
** Created: Sun 6. Nov 12:33:10 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVUPOL_H
#define UI_DVUPOL_H

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

class Ui_dvupol
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_8;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QDialog *dvupol)
    {
        if (dvupol->objectName().isEmpty())
            dvupol->setObjectName(QString::fromUtf8("dvupol"));
        dvupol->resize(712, 491);
        label_2 = new QLabel(dvupol);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushButton = new QPushButton(dvupol);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_2 = new QPushButton(dvupol);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 270, 85, 27));
        pushButton_3 = new QPushButton(dvupol);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_4 = new QPushButton(dvupol);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 270, 85, 27));
        scrollArea = new QScrollArea(dvupol);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 588, 154));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label_8 = new QLabel(dvupol);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 230, 151, 17));
        label_8->setFont(font);
        scrollArea_2 = new QScrollArea(dvupol);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 310, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 588, 169));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        layoutWidget = new QWidget(dvupol);
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

        pushButton_9 = new QPushButton(dvupol);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(550, 70, 161, 201));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Res/HyperboloidOfTwoSheets.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(200, 200));
        pushButton_10 = new QPushButton(dvupol);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(550, 310, 161, 101));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/\320\270\320\275\321\204\320\260/HyperboloidOfTwoSheets.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(200, 200));

        retranslateUi(dvupol);

        QMetaObject::connectSlotsByName(dvupol);
    } // setupUi

    void retranslateUi(QDialog *dvupol)
    {
        dvupol->setWindowTitle(QApplication::translate("dvupol", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dvupol", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dvupol", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dvupol", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("dvupol", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("dvupol", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dvupol", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">\320\224\320\262\321\203\320\277\320\276\320\273\320\276\321\201\321\202\320\275\321\213\320\271 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\270\320\264</span><span style=\" color:#ff0000;\">-</span><span style=\" color:#000000;\">\321\215\321\202\320\276 \320\262\320\270\320\264 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\276\321\200\321\217\320\264\320\272\320\260 \320"
                        "\262 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\321\202\321\200\321\221\321\205\320\274\320\265\321\200\320\275\320\276\320\274 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265, \320\267\320\260\320\264\320\260\320\262\320\260\320\265\320\274\321\213\320\271 \320\262 \320\264\320\265\320\272\320\260\321\200\321\202\320\276\320\262\321\213\321\205 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260\321\205 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265\320\274:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">-x</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/a</span"
                        "><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">-y</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/b</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">+z</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">/c</span><span style=\" font-weight:600; color:#ff0000; vertical-align:super;\">2</span><span style=\" font-weight:600; color:#ff0000;\">=1 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\225\321\201\320\273\320\270 </span><span style=\" font-weight:600; color:#000000;\">a=b</span><span style=\" color:#000000;\"> \321\202\320\276 \321\202\320\260\320\272\320"
                        "\260\321\217 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 </span><span style=\" font-weight:600; color:#000000;\">\320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\270\320\264\320\276\320\274 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\224\320\262\321\203\320\277\320\276\320\273\320\276\321\201\321\202\320\275\321\213\320\271 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\270\320\264 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\263\320\265\320\276\320\274\320\265\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\270\320\274</span></p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\274\320\265\321\201\321\202\320\276\320\274 \321\202\320\276\321\207\320\265\320\272 P,\320\274\320\276\320\264\321\203\320\273\321\214 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\270 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\264\320\276 \320\264\320\262\321\203\321\205 \320\267\320\260\320\264\320\260\320\275\320\275\321\213\321\205 \321\202\320\276\321\207\320\265\320\272 A \320\270 B</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\320\277\320\276\321\201\321\202\320\276\321\217\320\275\320\265\320\275.\320\222 \321\215\321\202\320\276\320\274 \321\201\320\273\321\203\321\207\320\260\320\265 A \320\270 B \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 </span><span styl"
                        "e=\" font-weight:600; color:#000000;\">\321\204\320\276\320\272\321\203\321\201\320\260\320\274\320\270 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\270\320\264\320\260.   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#000000;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("dvupol", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dvupol", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\321\200\320\276\320\270\321\202\321\214 \320\261\321\203\320\264\320\265\320\274 <span style=\" font-weight:600;\">\320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\201\320\265\321\207\320\265\320\275\320\270\320\271</span>:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">x=d </span>\320\270<s"
                        "pan style=\" font-weight:600;\"> y=d </span>.\320\222 \321\201\320\265\321\207\320\265\320\275\320\270\321\217\321\205 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\320\241\320\265\321\207\321\221\320\274 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\217\320\274\320\270 <span style=\" font-weight:600;\">z=d. </span>\320\225\321\201\320\273\320\270 <span style=\" font-weight:600;\">d</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">&lt;c</span><span style=\" font-weight:600; vertical-align:super;\">2</span> \320\262 \321\201\320\265\320\272\321\203\321\211\320\260\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\321\214 \320\275\320\265 \320\261\321\203\320\264\320\265\321\202</p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\265\321\200\320\265\321\201\320\265\320\272\320\260\321\202\321\214 \320\275\320\260\321\210\321\203 \321\204\320\270\320\263\321\203\321\200\321\203. \320\225\321\201\320\273\320\270 <span style=\" font-weight:600;\">d</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\">&gt;c</span><span style=\" font-weight:600; vertical-align:super;\">2</span> \321\202\320\276 \320\262 \321\201\320\265\321\207\320\265\320\275\320\270\320\270 \320\261\321\203\320\264\320\265\320\274 \320\277\320\276\320\273\321\203\321\207\320\260\321\202\321\214\321\201\321\217 \321\215\320\273\320\273\320\270\320\277\321\201.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3)\320\241\320\276\320\265\320\264\320\270\320\275\321\217\320\265\320\274 \320\277\320\276\320\273\321\203\321"
                        "\207\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274 \320\264\320\262\321\203\320\277\320\276\320\273\320\276\321\201\321\202\320\275\321\213\320\271 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\276\320\270\320\264.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("dvupol", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \321\215\320\273\320\273\320\270\320\277\321\201\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("dvupol", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\321\213", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("dvupol", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("dvupol", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QString());
        pushButton_10->setText(QApplication::translate("dvupol", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dvupol: public Ui_dvupol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVUPOL_H
