#ifndef FINAL_INFOMATION_H
#define FINAL_INFOMATION_H
#include "confirm_final_details.h"

#include <QDialog>
#include <vector>

class final_infomation{
public:

    final_infomation();
    static QString return_steps(int main_step_number, unsigned int sub_step_number);
    static void edit_step(unsigned int main_step_editing, unsigned int step_number, QString step_after_edit);
    static void delete_step(unsigned int main_step_number,  int sub_step_number);
    static void add_step_in_location(int where_to_add_step, std::vector<QString> step_vector_to_add);
    static void add_main_step_to_method(QString main_step);
    static void add_sub_step_to_method(QString sub_steps, unsigned int main_step_number);


    static QString final_meal_name;
    static QString final_ingredients_list;
    static std::vector<std::vector<QString>> Final_method_vector;
    static bool confirm_details_reached;
    static int all_confirmed;
    static bool btn_confirm_meal_name_clicked;
    static bool btn_confirm_ingredients_list_clicked;
    static bool btn_confirm_method_clicked;
};
#endif // FINAL_INFOMATION_H
