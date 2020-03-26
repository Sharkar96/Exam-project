/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QAction* actionOpen_add_categories;
    QAction* actionAdd_Category;
    QWidget* centralwidget;
    QGroupBox* groupBox;
    QMenuBar* menubar;
    QMenu* ToolMenu;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(493, 536);
        actionOpen_add_categories = new QAction(MainWindow);
        actionOpen_add_categories->setObjectName(QString::fromUtf8("actionOpen_add_categories"));
        actionAdd_Category = new QAction(MainWindow);
        actionAdd_Category->setObjectName(QString::fromUtf8("actionAdd_Category"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 431, 331));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 493, 21));
        ToolMenu = new QMenu(menubar);
        ToolMenu->setObjectName(QString::fromUtf8("ToolMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(ToolMenu->menuAction());
        ToolMenu->addAction(actionAdd_Category);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_add_categories->setText(QCoreApplication::translate("MainWindow", "Open add categories", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_add_categories->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_Category->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        ToolMenu->setTitle(QCoreApplication::translate("MainWindow", "tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H


