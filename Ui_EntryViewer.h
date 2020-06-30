/********************************************************************************
** Form generated from reading UI file 'EntryViewerSMWnXn.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ENTRYVIEWERSMWNXN_H
#define ENTRYVIEWERSMWNXN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog4 {
public:
    QWidget* layoutWidget;
    QHBoxLayout* horizontalLayout;
    QLabel* catLabel;
    QLabel* label2;
    QLabel* actLabel;
    QPushButton* removeEntryButton;
    QTableWidget* tableWidget;
    QLabel* label1;

    void setupUi(QDialog* Dialog) {
        if(Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(505, 462);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 30, 192, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        catLabel = new QLabel(layoutWidget);
        catLabel->setObjectName(QString::fromUtf8("catLabel"));

        horizontalLayout->addWidget(catLabel);

        label2 = new QLabel(layoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label2);

        actLabel = new QLabel(layoutWidget);
        actLabel->setObjectName(QString::fromUtf8("actLabel"));

        horizontalLayout->addWidget(actLabel);

        removeEntryButton = new QPushButton(Dialog);
        removeEntryButton->setObjectName(QString::fromUtf8("removeEntryButton"));
        removeEntryButton->setGeometry(QRect(40, 80, 51, 32));
        tableWidget = new QTableWidget(Dialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(120, 60, 351, 371));
        label1 = new QLabel(Dialog);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(30, 30, 58, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog* Dialog) {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        catLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label2->setText(QCoreApplication::translate("Dialog", "->", nullptr));
        actLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        removeEntryButton->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        label1->setText(QCoreApplication::translate("Dialog", "viewing:", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // ENTRYVIEWERSMWNXN_H
