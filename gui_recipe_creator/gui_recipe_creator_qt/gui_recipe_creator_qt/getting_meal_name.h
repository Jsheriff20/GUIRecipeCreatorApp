#ifndef GETTING_MEAL_NAME_H
#define GETTING_MEAL_NAME_H

#include <QDialog>
#include "get_ingredients.h"


class MainWindow;
class get_ingredients;
class confirm_final_details;

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

    void on_btn_back_to_confirmation_released();

    void on_btn_back_released();

private:
    Ui::getting_meal_name *ui;
    MainWindow *main_window;
    get_ingredients  *getting_ingredients;
    confirm_final_details *confirm_details;
};

#endif // GETTING_MEAL_NAME_H
