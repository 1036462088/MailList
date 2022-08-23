/********************************************************************************
** Form generated from reading UI file 'show_person.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_PERSON_H
#define UI_SHOW_PERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Show_Person
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_mulu;
    QTextEdit *textEdit;

    void setupUi(QWidget *Show_Person)
    {
        if (Show_Person->objectName().isEmpty())
            Show_Person->setObjectName(QString::fromUtf8("Show_Person"));
        Show_Person->resize(643, 601);
        verticalLayout = new QVBoxLayout(Show_Person);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_mulu = new QLineEdit(Show_Person);
        lineEdit_mulu->setObjectName(QString::fromUtf8("lineEdit_mulu"));

        verticalLayout->addWidget(lineEdit_mulu);

        textEdit = new QTextEdit(Show_Person);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(Show_Person);

        QMetaObject::connectSlotsByName(Show_Person);
    } // setupUi

    void retranslateUi(QWidget *Show_Person)
    {
        Show_Person->setWindowTitle(QCoreApplication::translate("Show_Person", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_Person: public Ui_Show_Person {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_PERSON_H
