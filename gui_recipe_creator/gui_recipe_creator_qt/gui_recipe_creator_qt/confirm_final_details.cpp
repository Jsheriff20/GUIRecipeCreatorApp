#include "confirm_final_details.h"
#include "ui_confirm_final_details.h"
#include "creating_method.h"
#include "final_infomation.h"
#include "QDebug"

confirm_final_details::confirm_final_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm_final_details)
{
    ui->setupUi(this);
    ui->txt_meal_name->setText(final_infomation::final_meal_name);
    ui->txt_ingredients_list->setText(final_infomation::final_ingredients_list);
    ui->txt_method->setText(final_infomation::final_method);
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
}





void confirm_final_details::on_btn_edit_ingredients_list_released(){

    all_confirmed --;
    ui->txt_ingredients_list->setStyleSheet("background-color: #ff6961");


    ui->btn_confirm_meal->setEnabled(false);
}





void confirm_final_details::on_btn_edit_method_released(){

    all_confirmed --;
    ui->txt_method->setStyleSheet("background-color: #ff6961");


    ui->btn_confirm_meal->setEnabled(false);
}





void confirm_final_details::on_btn_confirm_meal_released(){

}
