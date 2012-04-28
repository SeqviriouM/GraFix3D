/********************************************************************************
** Form generated from reading UI file 'parabola.ui'
**
** Created: Mon Sep 19 09:48:26 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARABOLA_H
#define UI_PARABOLA_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parabola
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_2;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *parabola)
    {
        if (parabola->objectName().isEmpty())
            parabola->setObjectName(QString::fromUtf8("parabola"));
        parabola->resize(712, 491);
        pushButton = new QPushButton(parabola);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(61, 51, 85, 27));
        pushButton_3 = new QPushButton(parabola);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 50, 85, 27));
        pushButton_2 = new QPushButton(parabola);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 85, 27));
        pushButton_4 = new QPushButton(parabola);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 240, 85, 27));
        scrollArea = new QScrollArea(parabola);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 491, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 109));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(parabola);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(50, 290, 491, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 489, 109));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_2 = new QLabel(parabola);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_8 = new QLabel(parabola);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 210, 201, 17));
        label_8->setFont(font);
        layoutWidget = new QWidget(parabola);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(52, 430, 491, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(parabola);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 80, 151, 141));

        retranslateUi(parabola);

        QMetaObject::connectSlotsByName(parabola);
    } // setupUi

    void retranslateUi(QDialog *parabola)
    {
        parabola->setWindowTitle(QApplication::translate("parabola", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("parabola", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("parabola", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("parabola", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("parabola", "\320\241\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("parabola", "\320\232\321\200\320\260\321\202\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("parabola", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("parabola", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("parabola", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("parabola", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class parabola: public Ui_parabola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARABOLA_H
