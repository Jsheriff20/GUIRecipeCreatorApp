#include "confirm_final_details.h"
#include "ui_confirm_final_details.h"
#include "creating_method.h"
#include "getting_meal_name.h"
#include "get_ingredients.h"
#include "final_infomation.h"
#include "QDebug"
#include "QStringList"

confirm_final_details::confirm_final_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm_final_details)
{
    ui->setupUi(this);


    QStringList ingredients_list = final_infomation::final_ingredients_list.split(",");
    QStringList method = final_infomation::final_method.split(",");


    ui->txt_meal_name->setText(final_infomation::final_meal_name);
    ui->txt_ingredients_list->setText(ingredients_list.join("\n\n"));
    ui->txt_method->setText(method.join("\n"));
    final_infomation::confirm_details_reached = true;
}

confirm_final_details::~confirm_final_details()
{
    delete ui;
}

void confirm_final_details::on_btn_back_released()
{

    this->hide();
    create_method = new creating_method(this);
    create_method->show();
}




int all_confirmed = 0;

void confirm_final_details::on_btn_confirm_meal_name_released(){

    all_confirmed++;
    ui->txt_meal_name->setStyleSheet("background-color: #98FB98");


    if(all_confirmed == 3){
        ui->btn_confirm_meal->setEnabled(true);
    }
}




void confirm_final_details::on_btn_confirm_ingredients_list_released(){

    all_confirmed++;
    ui->txt_ingredients_list->setStyleSheet("background-color: #98FB98");


    if(all_confirmed == 3){
        ui->btn_confirm_meal->setEnabled(true);
    }
}





void confirm_final_details::on_btn_confirm_method_released(){

    all_confirmed++;
    ui->txt_method->setStyleSheet("background-color: #98FB98");


    if(all_confirmed == 3){
        ui->btn_confirm_meal->setEnabled(true);
    }
}





void confirm_final_details::on_btn_edit_meal_name_released(){

    all_confirmed --;
    ui->txt_meal_name->setStyleSheet("background-color: #ff6961");


    ui->btn_confirm_meal->setEnabled(false);


    this->hide();
    get_meal_name = new getting_meal_name(this);
    get_meal_name->show();

}





void confirm_final_details::on_btn_edit_ingredients_list_released(){

    all_confirmed --;
    ui->txt_ingredients_list->setStyleSheet("background-color: #ff6961");


    ui->btn_confirm_meal->setEnabled(false);


    this->hide();
    getting_ingredients = new get_ingredients(this);
    getting_ingredients->show();
}





void confirm_final_details::on_btn_edit_method_released(){

    all_confirmed --;
    ui->txt_method->setStyleSheet("background-color: #ff6961");


    ui->btn_confirm_meal->setEnabled(false);


    this->hide();
    create_method = new creating_method(this);
    create_method->show();
}





void confirm_final_details::on_btn_confirm_meal_released(){

}
