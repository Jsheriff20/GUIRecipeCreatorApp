#ifndef GET_INGREDIENTS_H
#define GET_INGREDIENTS_H

#include <QDialog>



class getting_meal_name;
class creating_method;
class confirm_final_details;

namespace Ui {
class get_ingredients;
}

class get_ingredients : public QDialog
{
    Q_OBJECT

public:
    explicit get_ingredients(QWidget *parent = nullptr);
    ~get_ingredients();

private slots:
    void on_pushButton_2_released();

    void on_btn_back_released();

    void on_btn_back_2_released();

    void on_btn_next_released();

    void on_btn_back_to_confirmation_released();

private:
    Ui::get_ingredients *ui;
    getting_meal_name *get_meal_name;
    creating_method *create_method;
    confirm_final_details *confirm_details;
};

#endif // GET_INGREDIENTS_H
