/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_lianxiren;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_show;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_free;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_close;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(639, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 50, 231, 411));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        pushButton_lianxiren = new QPushButton(widget);
        pushButton_lianxiren->setObjectName(QString::fromUtf8("pushButton_lianxiren"));

        verticalLayout->addWidget(pushButton_lianxiren);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_show = new QPushButton(widget);
        pushButton_show->setObjectName(QString::fromUtf8("pushButton_show"));

        verticalLayout->addWidget(pushButton_show);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_free = new QPushButton(widget);
        pushButton_free->setObjectName(QString::fromUtf8("pushButton_free"));

        verticalLayout->addWidget(pushButton_free);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        verticalLayout->addWidget(pushButton_close);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_lianxiren->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_show->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_free->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\351\200\232\350\256\257\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
