/********************************************************************************
** Form generated from reading UI file 'addEntryXEEEAZ.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ADDENTRYXEEEAZ_H
#define ADDENTRYXEEEAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog3 {
public:
    QLabel* label1;
    QPushButton* addEntryButton;
    QWidget* widget;
    QHBoxLayout* horizontalLayout;
    QLabel* catLabel;
    QLabel* label2;
    QLabel* actLabel;
    QWidget* widget1;
    QFormLayout* formLayout;
    QLabel* startLabel;
    QTimeEdit* startTimeEdit;
    QLabel* finishLabel;
    QTimeEdit* finishTimeEdit;
    QWidget* widget2;
    QVBoxLayout* verticalLayout;
    QLabel* dateLabel;
    QDateEdit* dateEdit;

    void setupUi(QDialog* Dialog) {
        if(Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(434, 254);
        label1 = new QLabel(Dialog);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(30, 10, 58, 16));
        addEntryButton = new QPushButton(Dialog);
        addEntryButton->setObjectName(QString::fromUtf8("addEntryButton"));
        addEntryButton->setGeometry(QRect(270, 160, 112, 51));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 192, 18));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        catLabel = new QLabel(widget);
        catLabel->setObjectName(QString::fromUtf8("catLabel"));

        horizontalLayout->addWidget(catLabel);

        label2 = new QLabel(widget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label2);

        actLabel = new QLabel(widget);
        actLabel->setObjectName(QString::fromUtf8("actLabel"));

        horizontalLayout->addWidget(actLabel);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 90, 141, 51));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        startLabel = new QLabel(widget1);
        startLabel->setObjectName(QString::fromUtf8("startLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, startLabel);

        startTimeEdit = new QTimeEdit(widget1);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, startTimeEdit);

        finishLabel = new QLabel(widget1);
        finishLabel->setObjectName(QString::fromUtf8("finishLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, finishLabel);

        finishTimeEdit = new QTimeEdit(widget1);
        finishTimeEdit->setObjectName(QString::fromUtf8("finishTimeEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, finishTimeEdit);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(290, 70, 101, 51));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dateLabel = new QLabel(widget2);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        verticalLayout->addWidget(dateLabel);

        dateEdit = new QDateEdit(widget2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout->addWidget(dateEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog* Dialog) {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label1->setText(QCoreApplication::translate("Dialog", "Adding in:", nullptr));
        addEntryButton->setText(QCoreApplication::translate("Dialog", "Add Entry", nullptr));
        catLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label2->setText(QCoreApplication::translate("Dialog", "->", nullptr));
        actLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        startLabel->setText(QCoreApplication::translate("Dialog", "Start", nullptr));
        finishLabel->setText(QCoreApplication::translate("Dialog", "Finish", nullptr));
        dateLabel->setText(QCoreApplication::translate("Dialog", "Date:", nullptr));
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // ADDENTRYXEEEAZ_H
