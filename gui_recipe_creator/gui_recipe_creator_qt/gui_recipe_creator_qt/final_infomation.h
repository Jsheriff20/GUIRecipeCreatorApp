#ifndef FINAL_INFOMATION_H
#define FINAL_INFOMATION_H
#include "confirm_final_details.h"

#include <QDialog>
#include <vector>

class final_infomation{
public:

    final_infomation();

    QString get_meal_name() const{
        return final_meal_name;
    }



    QString get_ingredients_list() const{
        return final_ingredients_list;
    }


    QString get_method() const{
        return final_method;
    }

     static QString final_meal_name;
     static QString final_ingredients_list;
     static QString final_method;
};
#endif // FINAL_INFOMATION_H
