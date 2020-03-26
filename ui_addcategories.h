/********************************************************************************
** Form generated from reading UI file 'addcategories.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORIES_H
#define UI_ADDCATEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddCategories {
public:
    QDialogButtonBox* buttonBox;
    QPlainTextEdit* nameInput;
    QLabel* label;

    void setupUi(QDialog* AddCategories) {
        if(AddCategories->objectName().isEmpty())
            AddCategories->setObjectName(QString::fromUtf8("AddCategories"));
        AddCategories->resize(404, 143);
        buttonBox = new QDialogButtonBox(AddCategories);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(260, 70, 111, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply | QDialogButtonBox::Cancel);
        nameInput = new QPlainTextEdit(AddCategories);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        nameInput->setGeometry(QRect(110, 70, 131, 31));
        label = new QLabel(AddCategories);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 51, 31));

        retranslateUi(AddCategories);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddCategories, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddCategories, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddCategories);
    } // setupUi

    void retranslateUi(QDialog* AddCategories) {
        AddCategories->setWindowTitle(QCoreApplication::translate("AddCategories", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddCategories", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCategories : public Ui_AddCategories {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORIES_H
