/********************************************************************************
** Form generated from reading UI file 'CategoryAdderyftEwi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CATEGORYADDERYFTEWI_H
#define CATEGORYADDERYFTEWI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog {
public:
    QPushButton* addCategory;
    QWidget* widget;
    QHBoxLayout* horizontalLayout;
    QLabel* nameLabel;
    QLineEdit* LineEditCategory;

    void setupUi(QDialog* Dialog) {
        if(Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(378, 94);
        addCategory = new QPushButton(Dialog);
        addCategory->setObjectName(QString::fromUtf8("addCategory"));
        addCategory->setGeometry(QRect(280, 20, 75, 23));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 169, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        LineEditCategory = new QLineEdit(widget);
        LineEditCategory->setObjectName(QString::fromUtf8("LineEditCategory"));

        horizontalLayout->addWidget(LineEditCategory);


        retranslateUi(Dialog);
        QObject::connect(addCategory, SIGNAL(clicked()), Dialog, SLOT(onAddCategory()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog* Dialog) {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        addCategory->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        nameLabel->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog : public Ui_Dialog {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // CATEGORYADDERYFTEWI_H
