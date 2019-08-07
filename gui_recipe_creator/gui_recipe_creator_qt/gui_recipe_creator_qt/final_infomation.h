#ifndef FINAL_INFOMATION_H
#define FINAL_INFOMATION_H

#include <QDialog>
#include <vector>

class final_infomation{
public:

    void set_meal_name(QString x){
        final_meal_name = x;
    }

    QString get_meal_name(){
        return final_meal_name;
    }


    void set_ingredients_list(QString x){
        final_ingredients_list = x;
    }

     QString get_ingredients_list(){
        return final_ingredients_list;
    }
private:

    QString final_meal_name;
    QString final_ingredients_list;
};
#endif // FINAL_INFOMATION_H
