/********************************************************************************
** Form generated from reading UI file 'untitledWqHMdA.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDWQHMDA_H
#define UNTITLEDWQHMDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
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
    QWidget* widget;
    QHBoxLayout* horizontalLayout;
    QLabel* tagLabel;
    QLineEdit* tagLineEdit;
    QWidget* widget1;
    QVBoxLayout* verticalLayout_2;
    QHBoxLayout* horizontalLayout_2;
    QLabel* nameLabel;
    QLineEdit* nameLineEdit;
    QVBoxLayout* verticalLayout;
    QLabel* descriptionLabel;
    QPlainTextEdit* descriptionPlainTextEdit;
    QWidget* widget2;
    QVBoxLayout* verticalLayout_3;
    QLabel* colorLabel;
    QGridLayout* gridLayout;
    QPushButton* colorButton3;
    QPushButton* colorButton4;
    QPushButton* colorButton1;
    QPushButton* colorButton2;
    QPushButton* colorButton5;
    QPushButton* colorButton6;

    void setupUi(QDialog* Dialog) {
        if(Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(463, 338);
        addActivityButton = new QPushButton(Dialog);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));
        addActivityButton->setGeometry(QRect(350, 241, 81, 41));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 250, 291, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tagLabel = new QLabel(widget);
        tagLabel->setObjectName(QString::fromUtf8("tagLabel"));

        horizontalLayout->addWidget(tagLabel);

        tagLineEdit = new QLineEdit(widget);
        tagLineEdit->setObjectName(QString::fromUtf8("tagLineEdit"));

        horizontalLayout->addWidget(tagLineEdit);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 30, 251, 181));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(widget1);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(widget1);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        descriptionLabel = new QLabel(widget1);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        verticalLayout->addWidget(descriptionLabel);

        descriptionPlainTextEdit = new QPlainTextEdit(widget1);
        descriptionPlainTextEdit->setObjectName(QString::fromUtf8("descriptionPlainTextEdit"));

        verticalLayout->addWidget(descriptionPlainTextEdit);


        verticalLayout_2->addLayout(verticalLayout);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(300, 40, 111, 152));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        colorLabel = new QLabel(widget2);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        verticalLayout_3->addWidget(colorLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        colorButton3 = new QPushButton(widget2);
        colorButton3->setObjectName(QString::fromUtf8("colorButton3"));
        colorButton3->setCheckable(true);
        colorButton3->setAutoExclusive(true);
        colorButton3->setFlat(true);

        gridLayout->addWidget(colorButton3, 1, 0, 1, 1);

        colorButton4 = new QPushButton(widget2);
        colorButton4->setObjectName(QString::fromUtf8("colorButton4"));
        colorButton4->setCheckable(true);
        colorButton4->setAutoExclusive(true);
        colorButton4->setFlat(true);

        gridLayout->addWidget(colorButton4, 1, 1, 1, 1);

        colorButton1 = new QPushButton(widget2);
        colorButton1->setObjectName(QString::fromUtf8("colorButton1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorButton1->sizePolicy().hasHeightForWidth());
        colorButton1->setSizePolicy(sizePolicy);
        colorButton1->setCheckable(true);
        colorButton1->setAutoExclusive(true);
        colorButton1->setFlat(true);

        gridLayout->addWidget(colorButton1, 0, 0, 1, 1);

        colorButton2 = new QPushButton(widget2);
        colorButton2->setObjectName(QString::fromUtf8("colorButton2"));
        colorButton2->setCheckable(true);
        colorButton2->setAutoExclusive(true);
        colorButton2->setFlat(true);

        gridLayout->addWidget(colorButton2, 0, 1, 1, 1);

        colorButton5 = new QPushButton(widget2);
        colorButton5->setObjectName(QString::fromUtf8("colorButton5"));
        colorButton5->setCheckable(true);
        colorButton5->setAutoExclusive(true);
        colorButton5->setFlat(true);

        gridLayout->addWidget(colorButton5, 2, 0, 1, 1);

        colorButton6 = new QPushButton(widget2);
        colorButton6->setObjectName(QString::fromUtf8("colorButton6"));
        colorButton6->setCheckable(true);
        colorButton6->setAutoExclusive(true);
        colorButton6->setFlat(true);

        gridLayout->addWidget(colorButton6, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog* Dialog) {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        addActivityButton->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        tagLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        nameLabel->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("Dialog", "Description", nullptr));
        colorLabel->setText(QCoreApplication::translate("Dialog", "Color", nullptr));
        colorButton3->setText(QString());
        colorButton4->setText(QString());
        colorButton1->setText(QString());
        colorButton2->setText(QString());
        colorButton5->setText(QString());
        colorButton6->setText(QString());
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // UNTITLEDWQHMDA_H
