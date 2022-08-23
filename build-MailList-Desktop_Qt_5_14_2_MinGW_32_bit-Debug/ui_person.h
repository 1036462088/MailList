/********************************************************************************
** Form generated from reading UI file 'person.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_H
#define UI_PERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person
{
public:
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_name;
    QGroupBox *groupBox_sex;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_nan;
    QRadioButton *radioButton_nv;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_age;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_age;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_phone;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_phone;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_addr;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_addr;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_queding;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_quxiao;

    void setupUi(QWidget *Person)
    {
        if (Person->objectName().isEmpty())
            Person->setObjectName(QString::fromUtf8("Person"));
        Person->resize(549, 572);
        widget_5 = new QWidget(Person);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(60, 40, 331, 401));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_name = new QLabel(widget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout_5->addWidget(label_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout_5->addWidget(lineEdit_name);


        verticalLayout->addWidget(widget);

        groupBox_sex = new QGroupBox(widget_5);
        groupBox_sex->setObjectName(QString::fromUtf8("groupBox_sex"));
        horizontalLayout = new QHBoxLayout(groupBox_sex);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_nan = new QRadioButton(groupBox_sex);
        radioButton_nan->setObjectName(QString::fromUtf8("radioButton_nan"));

        horizontalLayout->addWidget(radioButton_nan);

        radioButton_nv = new QRadioButton(groupBox_sex);
        radioButton_nv->setObjectName(QString::fromUtf8("radioButton_nv"));

        horizontalLayout->addWidget(radioButton_nv);


        verticalLayout->addWidget(groupBox_sex);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_age = new QLabel(widget_2);
        label_age->setObjectName(QString::fromUtf8("label_age"));

        horizontalLayout_4->addWidget(label_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        lineEdit_age = new QLineEdit(widget_2);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));

        horizontalLayout_4->addWidget(lineEdit_age);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_phone = new QLabel(widget_3);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));

        horizontalLayout_3->addWidget(label_phone);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_phone = new QLineEdit(widget_3);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));

        horizontalLayout_3->addWidget(lineEdit_phone);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_addr = new QLabel(widget_4);
        label_addr->setObjectName(QString::fromUtf8("label_addr"));

        horizontalLayout_2->addWidget(label_addr);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lineEdit_addr = new QLineEdit(widget_4);
        lineEdit_addr->setObjectName(QString::fromUtf8("lineEdit_addr"));

        horizontalLayout_2->addWidget(lineEdit_addr);


        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(Person);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(60, 480, 361, 61));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_queding = new QPushButton(widget_6);
        pushButton_queding->setObjectName(QString::fromUtf8("pushButton_queding"));

        horizontalLayout_6->addWidget(pushButton_queding);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushButton_quxiao = new QPushButton(widget_6);
        pushButton_quxiao->setObjectName(QString::fromUtf8("pushButton_quxiao"));

        horizontalLayout_6->addWidget(pushButton_quxiao);


        retranslateUi(Person);

        QMetaObject::connectSlotsByName(Person);
    } // setupUi

    void retranslateUi(QWidget *Person)
    {
        Person->setWindowTitle(QCoreApplication::translate("Person", "Form", nullptr));
        label_name->setText(QCoreApplication::translate("Person", "\345\247\223\345\220\215:", nullptr));
        groupBox_sex->setTitle(QCoreApplication::translate("Person", "\346\200\247\345\210\253", nullptr));
        radioButton_nan->setText(QCoreApplication::translate("Person", "\347\224\267", nullptr));
        radioButton_nv->setText(QCoreApplication::translate("Person", "\345\245\263", nullptr));
        label_age->setText(QCoreApplication::translate("Person", "\345\271\264\351\276\204:", nullptr));
        label_phone->setText(QCoreApplication::translate("Person", "\350\201\224\347\263\273\347\224\265\350\257\235:", nullptr));
        label_addr->setText(QCoreApplication::translate("Person", "\345\256\266\345\272\255\344\275\217\345\235\200:", nullptr));
        pushButton_queding->setText(QCoreApplication::translate("Person", "\347\241\256\345\256\232", nullptr));
        pushButton_quxiao->setText(QCoreApplication::translate("Person", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Person: public Ui_Person {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_H
