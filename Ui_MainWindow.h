/********************************************************************************
** Form generated from reading UI file 'MainWindowXkCKZq.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWXKCKZQ_H
#define MAINWINDOWXKCKZQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget* centralwidget;
    QPushButton* addCategoryButton;
    QGroupBox* activityBox;
    QListView* activityListView;
    QPushButton* addActivityButton;
    QPushButton* addEntryButton;
    QWidget* widget;
    QHBoxLayout* categoryLayout;
    QGroupBox* categoryBox;
    QListView* categoryListView;
    QFrame* line;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(749, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addCategoryButton = new QPushButton(centralwidget);
        addCategoryButton->setObjectName(QString::fromUtf8("addCategoryButton"));
        addCategoryButton->setGeometry(QRect(80, 10, 31, 31));
        activityBox = new QGroupBox(centralwidget);
        activityBox->setObjectName(QString::fromUtf8("activityBox"));
        activityBox->setGeometry(QRect(130, 40, 131, 291));
        activityListView = new QListView(activityBox);
        activityListView->setObjectName(QString::fromUtf8("activityListView"));
        activityListView->setGeometry(QRect(0, 20, 121, 261));
        addActivityButton = new QPushButton(centralwidget);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));
        addActivityButton->setGeometry(QRect(230, 10, 31, 31));
        addEntryButton = new QPushButton(centralwidget);
        addEntryButton->setObjectName(QString::fromUtf8("addEntryButton"));
        addEntryButton->setGeometry(QRect(140, 340, 112, 32));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 105, 291));
        categoryLayout = new QHBoxLayout(widget);
        categoryLayout->setObjectName(QString::fromUtf8("categoryLayout"));
        categoryLayout->setContentsMargins(0, 0, 0, 0);
        categoryBox = new QGroupBox(widget);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));
        categoryListView = new QListView(categoryBox);
        categoryListView->setObjectName(QString::fromUtf8("categoryListView"));
        categoryListView->setGeometry(QRect(0, 20, 81, 261));

        categoryLayout->addWidget(categoryBox);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        categoryLayout->addWidget(line);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addCategoryButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        activityBox->setTitle(QCoreApplication::translate("MainWindow", "Activities", nullptr));
        addActivityButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        addEntryButton->setText(QCoreApplication::translate("MainWindow", "add entry", nullptr));
        categoryBox->setTitle(QCoreApplication::translate("MainWindow", "Categories", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWXKCKZQ_H
