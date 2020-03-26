#ifndef ADDCATEGORIES_H
#define ADDCATEGORIES_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
    class AddCategories;
}

class AddCategories : public QDialog {
Q_OBJECT

public:
    explicit AddCategories(QMainWindow* main, QWidget* parent = nullptr);
    explicit AddCategories(QWidget* parent = nullptr);

    ~AddCategories();

private:
    Ui::AddCategories* ui;
    QMainWindow* mainWindow;
};

#endif // ADDCATEGORIES_H
