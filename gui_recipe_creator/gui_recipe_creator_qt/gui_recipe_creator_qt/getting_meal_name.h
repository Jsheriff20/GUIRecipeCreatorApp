#ifndef GETTING_MEAL_NAME_H
#define GETTING_MEAL_NAME_H

#include <QDialog>
#include "get_ingredients.h"


class MainWindow;
class get_ingredients;
namespace Ui {

class getting_meal_name;
}

class getting_meal_name : public QDialog
{
    Q_OBJECT

public:
    explicit getting_meal_name(QWidget *parent = nullptr);
    ~getting_meal_name();

private slots:
    void on_pushButton_2_released();

    void on_btn_next_released();

private:
    Ui::getting_meal_name *ui;
    MainWindow *main_window;
    get_ingredients  *getting_ingredients;
};

#endif // GETTING_MEAL_NAME_H
