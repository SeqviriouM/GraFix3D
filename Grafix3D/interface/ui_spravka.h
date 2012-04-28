/********************************************************************************
** Form generated from reading UI file 'spravka.ui'
**
** Created: Mon Nov 7 09:07:15 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRAVKA_H
#define UI_SPRAVKA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spravka
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;

    void setupUi(QDialog *spravka)
    {
        if (spravka->objectName().isEmpty())
            spravka->setObjectName(QString::fromUtf8("spravka"));
        spravka->resize(675, 525);
        gridLayout = new QGridLayout(spravka);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(spravka);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        tabWidget = new QTabWidget(spravka);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(spravka);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(spravka);
    } // setupUi

    void retranslateUi(QDialog *spravka)
    {
        spravka->setWindowTitle(QApplication::translate("spravka", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("spravka", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("spravka", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\320\270\320\270:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">acos 	\320\260\321\200\320\272\320\272\320\276\321\201\320\270\320\275\321\203\321\201</p>\n"
"<p"
                        " style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">asin 	\320\260\321\200\320\272\321\201\320\270\320\275\321\203\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">atan 	\320\260\321\200\320\272\321\202\320\260\320\275\320\263\320\265\320\275\321\201	</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ceil 	\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \320\264\320\276 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\265\320\263\320\276 \320\261\320\276\320\273\321\214\321\210\320\265\320\263\320\276 \321\206\320\265\320\273\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">cos 	\320\272\320\276"
                        "\321\201\320\270\320\275\321\203\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ch 	\320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\272\320\276\321\201\320\270\320\275\321\203\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">exp 	\320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265 \321\215\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\202\321\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fabs 	\320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\320\260\321\217 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260 (\321\207\320\270\321\201\320\273\320\260 \321\201 \320\277\320\273\320\260\320\262\320\260\321\216"
                        "\321\211\320\265\320\271 \321\202\320\276\321\207\320\272\320\276\320\271)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">floor 	\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \320\264\320\276 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\265\320\263\320\276 \320\274\320\265\320\275\321\214\321\210\320\265\320\263\320\276 \321\206\320\265\320\273\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fmod 	\320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265 \320\276\321\201\321\202\320\260\321\202\320\272\320\260 \320\276\321\202 \320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\260\321\206\320\265\320\273\320\276 \320\264\320\273\321\217 \321\207\320\270\321\201\320\265\320\273 \321\201 \320\277\320"
                        "\273\320\260\320\262\320\260\321\216\321\211\320\265\320\271 \321\202\320\276\321\207\320\272\320\276\320\271</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ctg                    \320\272\320\276\321\202\320\260\320\275\320\263\320\265\320\275\321\201 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">actg                 \320\260\321\200\320\272\320\272\320\272\320\276\321\202\320\260\320\275\320\263\320\265\320\275\321\201 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ln 	\320\275\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\321\213\320\271 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">log 	\320\273\320"
                        "\276\320\263\320\260\321\200\320\270\321\204\320\274 \320\277\320\276 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\216 10</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">cth                    \320\260\321\200\320\272\320\272\320\276\321\202\320\260\320\275\320\263\320\265\320\275\320\270\321\201 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">pow(x,y) 	\321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262\320\276\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 x \320\262 \321\201\321\202\320\265\320\277\320\265\320\275\321\214 y</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">sin 	\321\201\320\270\320\275\321\203\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\">sh 	\320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\201\320\270\320\275\321\203\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">sqrt 	\320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\275\321\213\320\271 \320\272\320\276\321\200\320\265\320\275\321\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">tan 	\321\202\320\260\320\275\320\263\320\265\320\275\321\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">th 	\320\263\320\270\320\277\320\265\321\200\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\202\320\260\320\275\320\263\320\265\320\275\321\201</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("spravka", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("spravka", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\276\321\210\320\270\320\261\320\272\320\270:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">1) \320\247\320\270\321\201\320\273\320\276 \320\276\321\202\320\272\321\200\321"
                        "\213\321\202\321\213\321\205 \321\201\320\272\320\276\320\261\320\276\320\272 \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 </span><span style=\" font-weight:600; font-style:italic;\">\321\200\320\260\320\262\320\275\320\276</span><span style=\" font-style:italic;\"> \321\207\320\270\321\201\320\273\321\203 \320\267\320\260\320\272\321\200\321\213\321\202\321\213\321\205 \321\201\320\272\320\276\320\261\320\276\320\272. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">2) </span><span style=\" font-weight:600; font-style:italic;\">\320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276</span><span style=\" font-style:italic;\"> \320\277\321\200\320\276\320\277\320\270\321\201\321"
                        "\213\320\262\320\260\321\202\321\214 \320\262\321\201\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\320\274\321\213\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\320\270.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">\320\242\320\276 \320\265\321\201\321\202\321\214 </span><span style=\" font-weight:600; font-style:italic;\">\320\275\320\265\320\273\321\214\320\267\321\217</span><span style=\" font-style:italic;\"> \320\275\320\260\320\277\320\270\321\201\320\260\321\202\321\214 2x  </span><span style=\" font-weight:600; font-style:italic;\">\320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276</span><span style=\" font-style:italic;\"> \320\277\320\270\321\201\320\260\321\202\321\214 2*x</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px; font-style:italic;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">3) \320\225\321\201\320\273\320\270 </span><span style=\" font-weight:600; font-style:italic;\">\320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274</span><span style=\" font-style:italic;\">\320\276 \320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\271 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265\320\274 </span><span style=\" font-weight:600; font-style:italic;\">z</span><span style=\" font-weight:600; font-style:italic; vertical-align:super;\">2</span><span style=\" font-weight:600; font-style:italic;\">=f(x;y)</span><span style=\" font-"
                        "style:italic;\">, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">\321\202\320\276 </span><span style=\" font-weight:600; font-style:italic;\">\320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274</span><span style=\" font-style:italic;\">\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\262\320\270\320\264 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 </span><span style=\" font-weight:600; font-style:italic;\">z=+/-f(x;y) </span><span style=\" font-style:italic;\">\320\270 \320\262\320\262\320\265\321\201\321\202\320\270 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265  </span><span style=\" font-weight:600; font-style:italic;\">z=sqrt(f(x;y))</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px; font-weight:600; font-style:italic;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">4) </span><span style=\" font-weight:600; font-style:italic;\">\320\235\320\265\320\273\321\214\320\267\321\217 </span><span style=\" font-style:italic;\">\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\260 \320\275\320\276\320\273\321\214 \320\270\320\273\320\270 \320\270\320\267\320\262\320\273\320\265\320\272\320\260\321\202\321\214 \320\272\320\276\321\200\320\265\320\275\321\214 \320\270\320\267 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("spravka", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class spravka: public Ui_spravka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAVKA_H
