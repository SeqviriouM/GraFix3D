/********************************************************************************
** Form generated from reading UI file 'postroenie.ui'
**
** Created: Wed Sep 7 19:02:22 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTROENIE_H
#define UI_POSTROENIE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_postroenie
{
public:

    void setupUi(QDialog *postroenie)
    {
        if (postroenie->objectName().isEmpty())
            postroenie->setObjectName(QString::fromUtf8("postroenie"));
        postroenie->resize(400, 300);

        retranslateUi(postroenie);

        QMetaObject::connectSlotsByName(postroenie);
    } // setupUi

    void retranslateUi(QDialog *postroenie)
    {
        postroenie->setWindowTitle(QApplication::translate("postroenie", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class postroenie: public Ui_postroenie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTROENIE_H
