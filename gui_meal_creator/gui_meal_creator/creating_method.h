#ifndef CREATING_METHOD_H
#define CREATING_METHOD_H

#include <QDialog>
#include "get_ingredients.h"
#include "confirm_final_details.h"

class get_ingredients;
class confirm_final_details;
namespace Ui {
class creating_method;
}

class creating_method : public QDialog
{
    Q_OBJECT

public:
    explicit creating_method(QWidget *parent = nullptr);
    ~creating_method();

private slots:
    void on_btn_add_method_step_released();

    void on_btn_back_released();

    void on_btn_add_main_step_released();

    void on_btn_add_sub_step_released();

    void on_btn_next_released();

private:
    Ui::creating_method *ui;
    get_ingredients *getting_ingredients;
    confirm_final_details *confirm_details;
};

#endif // CREATING_METHOD_H
