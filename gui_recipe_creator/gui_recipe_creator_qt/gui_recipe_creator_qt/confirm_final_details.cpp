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


    ui->txt_meal_name->setText(final_infomation::final_meal_name);
    ui->txt_ingredients_list->setText(ingredients_list.join("\n\n"));
    ui->txt_method->setText(final_infomation::return_steps(-1, 0));
    final_infomation::confirm_details_reached = true;


    if(final_infomation::btn_confirm_meal_name_clicked == false){

        ui->btn_confirm_meal_name->setText("Unconfirm");

        //hide the edit button
        ui->btn_edit_meal_name->setEnabled(false);

        //change text box background colour
        ui->txt_meal_name->setStyleSheet("background-color: #98FB98");
    }


    if(final_infomation::btn_confirm_ingredients_list_clicked == false){

            ui->btn_confirm_ingredients_list->setText("Unconfirm");

            //hide the edit button
            ui->btn_edit_ingredients_list->setEnabled(false);

            //change text box background colour
            ui->txt_ingredients_list->setStyleSheet("background-color: #98FB98");
    }


    if(final_infomation::btn_confirm_method_clicked == false){

        ui->btn_confirm_method->setText("Unconfirm");

        //hide the edit button
        ui->btn_edit_method->setEnabled(false);

        //change text box background colour
        ui->txt_method->setStyleSheet("background-color: #98FB98");
    }


    if(final_infomation::all_confirmed == 3){

        ui->btn_confirm_meal->setEnabled(true);
    }
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





//meal name list confirmation button
void confirm_final_details::on_btn_confirm_meal_name_released(){


    if(final_infomation::btn_confirm_meal_name_clicked == true){

        ui->btn_confirm_meal_name->setText("Unconfirm");
        final_infomation::btn_confirm_meal_name_clicked = false;


        //hide the edit button
        ui->btn_edit_meal_name->setEnabled(false);


        //increase total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed++;
        ui->txt_meal_name->setStyleSheet("background-color: #98FB98");


        if(final_infomation::all_confirmed == 3){

            ui->btn_confirm_meal->setEnabled(true);
        }
    }else{

        ui->btn_confirm_meal_name->setText("Confirm");
        final_infomation::btn_confirm_meal_name_clicked = true;


        //show the edit button
        ui->btn_edit_meal_name->setEnabled(true);


        //decrease total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed--;
        ui->txt_meal_name->setStyleSheet("background-color: #ff6961");


        //disable confirm meal button (stopping creating final text document)
        ui->btn_confirm_meal->setEnabled(false);
    }
}





//ingredients list confirmation button
void confirm_final_details::on_btn_confirm_ingredients_list_released(){


    if(final_infomation::btn_confirm_ingredients_list_clicked == true){

        ui->btn_confirm_ingredients_list->setText("Unconfirm");
        final_infomation::btn_confirm_ingredients_list_clicked = false;


        //hide the edit button
        ui->btn_edit_ingredients_list->setEnabled(false);


        //increase total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed++;
        ui->txt_ingredients_list->setStyleSheet("background-color: #98FB98");


        if(final_infomation::all_confirmed == 3){

            ui->btn_confirm_meal->setEnabled(true);
        }
    }else{

        ui->btn_confirm_ingredients_list->setText("Confirm");
        final_infomation::btn_confirm_ingredients_list_clicked = true;


        //show the edit button
        ui->btn_edit_ingredients_list->setEnabled(true);


        //decrease total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed--;
        ui->txt_ingredients_list->setStyleSheet("background-color: #ff6961");


        //disable confirm meal button (stopping creating final text document)
        ui->btn_confirm_meal->setEnabled(false);
    }
}





//method confirmation button
void confirm_final_details::on_btn_confirm_method_released(){


    if(final_infomation::btn_confirm_method_clicked == true){

        ui->btn_confirm_method->setText("Unconfirm");
        final_infomation::btn_confirm_method_clicked = false;


        //hide the edit button
        ui->btn_edit_method->setEnabled(false);


        //increase total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed++;
        ui->txt_method->setStyleSheet("background-color: #98FB98");


        if(final_infomation::all_confirmed == 3){

            ui->btn_confirm_meal->setEnabled(true);
        }
    }else{

        ui->btn_confirm_method->setText("Confirm");
        final_infomation::btn_confirm_method_clicked = true;


        //show the edit button
        ui->btn_edit_method->setEnabled(true);


        //decrease total of confirmed button clicked count and change text box background colour
        final_infomation::all_confirmed--;
        ui->txt_method->setStyleSheet("background-color: #ff6961");


        //disable confirm meal button (stopping creating final text document)
        ui->btn_confirm_meal->setEnabled(false);
    }
}





void confirm_final_details::on_btn_edit_meal_name_released(){

    this->hide();
    get_meal_name = new getting_meal_name(this);
    get_meal_name->show();

}





void confirm_final_details::on_btn_edit_ingredients_list_released(){

    this->hide();
    getting_ingredients = new get_ingredients(this);
    getting_ingredients->show();
}





void confirm_final_details::on_btn_edit_method_released(){

    this->hide();
    create_method = new creating_method(this);
    create_method->show();
}





void confirm_final_details::on_btn_confirm_meal_released(){

}
