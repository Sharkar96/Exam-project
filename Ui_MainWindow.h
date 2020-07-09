/********************************************************************************
** Form generated from reading UI file 'MainWindowzxONZk.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWZXONZK_H
#define MAINWINDOWZXONZK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <QtCharts>

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
    QWidget* layoutWidget1;
    QGridLayout* gridLayout;
    QPushButton* removeCategoryButton;
    QPushButton* addCategoryButton;
    QWidget* layoutWidget2;
    QGridLayout* gridLayout_2;
    QPushButton* removeActivityButton;
    QPushButton* addActivityButton;
    QLabel* descriptionLabel;
    QLabel* description;
    QChartView* graphicsView;
    QPushButton* viewEntriesButton;
    QWidget* layoutWidget3;
    QHBoxLayout* horizontalLayout;
    QPushButton* dateDescreaseButton;
    QLabel* dateLabel;
    QPushButton* dateIncreaseButton;
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

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 10, 102, 32));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        removeCategoryButton = new QPushButton(layoutWidget1);
        removeCategoryButton->setObjectName(QString::fromUtf8("removeCategoryButton"));

        gridLayout->addWidget(removeCategoryButton, 0, 0, 1, 1);

        addCategoryButton = new QPushButton(layoutWidget1);
        addCategoryButton->setObjectName(QString::fromUtf8("addCategoryButton"));

        gridLayout->addWidget(addCategoryButton, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(190, 10, 102, 32));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        removeActivityButton = new QPushButton(layoutWidget2);
        removeActivityButton->setObjectName(QString::fromUtf8("removeActivityButton"));

        gridLayout_2->addWidget(removeActivityButton, 0, 0, 1, 1);

        addActivityButton = new QPushButton(layoutWidget2);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));

        gridLayout_2->addWidget(addActivityButton, 0, 1, 1, 1);

        descriptionLabel = new QLabel(centralwidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(40, 370, 71, 16));
        description = new QLabel(centralwidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(40, 400, 201, 111));
        description->setAlignment(Qt::AlignLeading | Qt::AlignLeft | Qt::AlignTop);
        description->setWordWrap(true);
        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(280, 90, 451, 391));
        viewEntriesButton = new QPushButton(centralwidget);
        viewEntriesButton->setObjectName(QString::fromUtf8("viewEntriesButton"));
        viewEntriesButton->setGeometry(QRect(620, 520, 112, 32));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(410, 40, 176, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dateDescreaseButton = new QPushButton(layoutWidget3);
        dateDescreaseButton->setObjectName(QString::fromUtf8("dateDescreaseButton"));

        horizontalLayout->addWidget(dateDescreaseButton);

        dateLabel = new QLabel(layoutWidget3);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        horizontalLayout->addWidget(dateLabel);

        dateIncreaseButton = new QPushButton(layoutWidget3);
        dateIncreaseButton->setObjectName(QString::fromUtf8("dateIncreaseButton"));

        horizontalLayout->addWidget(dateIncreaseButton);

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
        descriptionLabel->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        description->setText(QString());
        viewEntriesButton->setText(QCoreApplication::translate("MainWindow", "view entries", nullptr));
        dateDescreaseButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        dateLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        dateIncreaseButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // MAINWINDOWZXONZK_H
