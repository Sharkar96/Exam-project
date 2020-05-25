/********************************************************************************
** Form generated from reading UI file 'MainWindowNnEpVF.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWNNEPVF_H
#define MAINWINDOWNNEPVF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget* centralwidget;
    QGroupBox* activityBox;
    QListWidget* activityListWidget;
    QPushButton* addEntryButton;
    QWidget* layoutWidget;
    QHBoxLayout* categoryLayout;
    QGroupBox* categoryBox;
    QListWidget* categoryListWidget;
    QFrame* line;
    QWidget* widget;
    QGridLayout* gridLayout;
    QPushButton* removeCategoryButton;
    QPushButton* addCategoryButton;
    QWidget* widget1;
    QGridLayout* gridLayout_2;
    QPushButton* removeActivityButton;
    QPushButton* addActivityButton;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(749, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        activityBox = new QGroupBox(centralwidget);
        activityBox->setObjectName(QString::fromUtf8("activityBox"));
        activityBox->setGeometry(QRect(130, 40, 131, 291));
        activityListWidget = new QListWidget(activityBox);
        activityListWidget->setObjectName(QString::fromUtf8("activityListWidget"));
        activityListWidget->setGeometry(QRect(0, 20, 121, 261));
        addEntryButton = new QPushButton(centralwidget);
        addEntryButton->setObjectName(QString::fromUtf8("addEntryButton"));
        addEntryButton->setGeometry(QRect(140, 340, 112, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 105, 291));
        categoryLayout = new QHBoxLayout(layoutWidget);
        categoryLayout->setObjectName(QString::fromUtf8("categoryLayout"));
        categoryLayout->setContentsMargins(0, 0, 0, 0);
        categoryBox = new QGroupBox(layoutWidget);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));
        categoryListWidget = new QListWidget(categoryBox);
        categoryListWidget->setObjectName(QString::fromUtf8("categoryListWidget"));
        categoryListWidget->setGeometry(QRect(0, 20, 81, 261));

        categoryLayout->addWidget(categoryBox);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        categoryLayout->addWidget(line);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 10, 71, 32));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        removeCategoryButton = new QPushButton(widget);
        removeCategoryButton->setObjectName(QString::fromUtf8("removeCategoryButton"));

        gridLayout->addWidget(removeCategoryButton, 0, 0, 1, 1);

        addCategoryButton = new QPushButton(widget);
        addCategoryButton->setObjectName(QString::fromUtf8("addCategoryButton"));

        gridLayout->addWidget(addCategoryButton, 0, 1, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(190, 10, 71, 32));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        removeActivityButton = new QPushButton(widget1);
        removeActivityButton->setObjectName(QString::fromUtf8("removeActivityButton"));

        gridLayout_2->addWidget(removeActivityButton, 0, 0, 1, 1);

        addActivityButton = new QPushButton(widget1);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));

        gridLayout_2->addWidget(addActivityButton, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        activityBox->setTitle(QCoreApplication::translate("MainWindow", "Activities", nullptr));
        addEntryButton->setText(QCoreApplication::translate("MainWindow", "add entry", nullptr));
        categoryBox->setTitle(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        removeCategoryButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addCategoryButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        removeActivityButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addActivityButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWNNEPVF_H
