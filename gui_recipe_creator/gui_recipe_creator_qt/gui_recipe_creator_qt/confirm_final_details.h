#ifndef CONFIRM_FINAL_DETAILS_H
#define CONFIRM_FINAL_DETAILS_H

#include <QDialog>


class creating_method;
namespace Ui {
class confirm_final_details;
}

class confirm_final_details : public QDialog
{
    Q_OBJECT

public:
    explicit confirm_final_details(QWidget *parent = nullptr);
    ~confirm_final_details();

private slots:
    void on_btn_back_released();

    void on_btn_confirm_meal_name_released();

    void on_btn_confirm_ingredients_list_released();

    void on_btn_confirm_method_released();

    void on_btn_edit_meal_name_released();

    void on_btn_edit_ingredients_list_released();

    void on_btn_edit_method_released();

    void on_btn_confirm_meal_released();

private:
    Ui::confirm_final_details *ui;
    creating_method *create_method;
};

#endif // CONFIRM_FINAL_DETAILS_H
