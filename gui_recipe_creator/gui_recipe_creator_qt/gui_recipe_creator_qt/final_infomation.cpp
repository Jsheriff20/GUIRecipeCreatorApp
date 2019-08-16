#include "final_infomation.h"
#include "QDebug"

final_infomation::final_infomation()
{

}

QString final_infomation::final_meal_name = "";
QString final_infomation::final_ingredients_list = "";
std::vector<std::vector<QString>> final_infomation::final_method_vector{};
bool final_infomation::confirm_details_reached = false;
int final_infomation::all_confirmed = 0;
bool final_infomation::btn_confirm_meal_name_clicked = true;
bool final_infomation::btn_confirm_ingredients_list_clicked = true;
bool final_infomation::btn_confirm_method_clicked = true;





void final_infomation::add_main_step_to_method(QString main_step){

    std::vector<QString> method_step = {main_step};
    final_infomation::final_method_vector.push_back(method_step);
};





void final_infomation::add_sub_step_to_method(QString sub_step, unsigned int main_step_number){

    final_infomation::final_method_vector[main_step_number -1].push_back(sub_step);;
};





QString final_infomation::return_steps(int main_step_number, unsigned int sub_step_number){

    QString returning_step;


    //if user enters -1 return all items in vector for display purposes
    if(main_step_number == -1){

        for (unsigned int i = 0;i < final_infomation::final_method_vector.size();i++ ) {

            for(unsigned int j=0;j < final_method_vector[i].size(); j++){

                if(j == 0){
                    returning_step += QString::number(i+1) + ".  " +final_infomation::final_method_vector[i][j] + "\n";
                }else{

                    returning_step += "    " + QString::number(i+1) + "." + QString::number(j)
                            + ".  " + final_infomation::final_method_vector[i][j] + "\n";
                }
            }
        }
    }else {

        QString step = final_infomation::final_method_vector[(main_step_number)][sub_step_number];

        returning_step += step;
    }




   return returning_step;
}





void final_infomation::edit_step(unsigned int main_step_editing, unsigned int step_number, QString step_after_edit){

    QString specific_step_selected = step_after_edit;
    final_infomation::final_method_vector[(main_step_editing -1)][step_number] = specific_step_selected;
}





void final_infomation::delete_step(unsigned int main_step_number,  int sub_step_number){
    if(sub_step_number != 0){

        std::vector<QString> main_vector = final_infomation::final_method_vector[(main_step_number -1)];
        main_vector.erase(main_vector.begin() + sub_step_number);


        final_infomation::final_method_vector[(main_step_number -1)] = main_vector;
    }
    else{

        final_infomation::final_method_vector.erase(
                    final_infomation::final_method_vector.begin() +
                    (main_step_number - 1));
    }
}





void final_infomation::add_step_in_location(int where_to_add_step, std::vector<QString> step_vector_to_add){

    final_infomation::final_method_vector.insert(
                final_infomation::final_method_vector.begin()
                + (where_to_add_step -1), step_vector_to_add);
}





