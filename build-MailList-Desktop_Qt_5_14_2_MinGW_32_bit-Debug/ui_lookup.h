/********************************************************************************
** Form generated from reading UI file 'lookup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOKUP_H
#define UI_LOOKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LookUp
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *LookUp)
    {
        if (LookUp->objectName().isEmpty())
            LookUp->setObjectName(QString::fromUtf8("LookUp"));
        LookUp->resize(400, 300);
        verticalLayout = new QVBoxLayout(LookUp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(LookUp);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(LookUp);

        QMetaObject::connectSlotsByName(LookUp);
    } // setupUi

    void retranslateUi(QWidget *LookUp)
    {
        LookUp->setWindowTitle(QCoreApplication::translate("LookUp", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LookUp: public Ui_LookUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOKUP_H
