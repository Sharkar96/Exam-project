/********************************************************************************
** Form generated from reading UI file 'untitledRABpRc.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDRABPRC_H
#define UNTITLEDRABPRC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog2 {
public:
    QPushButton* addActivityButton;
    QWidget* layoutWidget;
    QHBoxLayout* horizontalLayout;
    QLabel* tagLabel;
    QLineEdit* tagLineEdit;
    QWidget* layoutWidget1;
    QVBoxLayout* verticalLayout_2;
    QHBoxLayout* horizontalLayout_2;
    QLabel* nameLabel;
    QLineEdit* nameLineEdit;
    QVBoxLayout* verticalLayout;
    QLabel* descriptionLabel;
    QPlainTextEdit* descriptionPlainTextEdit;

    void setupUi(QDialog* Dialog) {
        if(Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(315, 359);
        addActivityButton = new QPushButton(Dialog);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));
        addActivityButton->setGeometry(QRect(200, 290, 81, 41));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 250, 241, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tagLabel = new QLabel(layoutWidget);
        tagLabel->setObjectName(QString::fromUtf8("tagLabel"));

        horizontalLayout->addWidget(tagLabel);

        tagLineEdit = new QLineEdit(layoutWidget);
        tagLineEdit->setObjectName(QString::fromUtf8("tagLineEdit"));

        horizontalLayout->addWidget(tagLineEdit);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 251, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(layoutWidget1);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget1);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        descriptionLabel = new QLabel(layoutWidget1);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        verticalLayout->addWidget(descriptionLabel);

        descriptionPlainTextEdit = new QPlainTextEdit(layoutWidget1);
        descriptionPlainTextEdit->setObjectName(QString::fromUtf8("descriptionPlainTextEdit"));

        verticalLayout->addWidget(descriptionPlainTextEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog* Dialog) {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        addActivityButton->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        tagLabel->setText(QCoreApplication::translate("Dialog", "TAGS:", nullptr));
        nameLabel->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("Dialog", "Description", nullptr));
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // UNTITLEDRABPRC_H
