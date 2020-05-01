//
// Created by Andrea on 3/28/2020.
//


/********************************************************************************
** Form generated from reading UI file 'MainWindowzLbYod.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWZLBYOD_H
#define MAINWINDOWZLBYOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget* centralwidget;
    QGroupBox* CategoryBox;
    QPushButton* addCategory;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(749, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CategoryBox = new QGroupBox(centralwidget);
        CategoryBox->setObjectName(QString::fromUtf8("CategoryBox"));
        CategoryBox->setGeometry(QRect(20, 40, 201, 411));
        addCategory = new QPushButton(CategoryBox);
        addCategory->setObjectName(QString::fromUtf8("addCategory"));
        addCategory->setGeometry(QRect(170, 10, 21, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CategoryBox->setTitle(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        addCategory->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // MAINWINDOWZLBYOD_H
