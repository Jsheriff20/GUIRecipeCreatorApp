#include "get_ingredients.h"
#include "ui_get_ingredients.h"
#include "getting_meal_name.h"
#include "final_infomation.h"
#include "creating_method.h"
#include <QDebug>
#include <qmessagebox.h>
#include <vector>
#include <QStringList>

get_ingredients::get_ingredients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::get_ingredients)
{
    ui->setupUi(this);
}

get_ingredients::~get_ingredients()
{
    delete ui;
}

void get_ingredients::on_btn_back_released()
{
    this->hide();
    get_meal_name = new getting_meal_name(this);
    get_meal_name->show();
}



void get_ingredients::on_pushButton_2_released()
{

}



QString measurement_conversion(QString none_converted_measurement){
    QString converted_measurement;

    if(none_converted_measurement == "Grams (g)"){

        converted_measurement = "g";
    }
    else if(none_converted_measurement == "Kilo Grams (kg)"){

        converted_measurement = "kg";
    }
    else if(none_converted_measurement == "Milliliter (ml)"){

        converted_measurement = "ml";
    }
    else if(none_converted_measurement == "Liter (l)"){

        converted_measurement = "l";
    }
    else if(none_converted_measurement == "Table Spoon (tbsp)"){

        converted_measurement = "tbsp";
    }
    else if(none_converted_measurement == "Tea Spoon (tsp)"){

        converted_measurement = "tsp";
    }
    else if(none_converted_measurement == "Number of Items"){

        converted_measurement = "";
    }
    else{
        converted_measurement = "error";
    }
    return converted_measurement;
}

QStringList ingredients_list;
QString string_list;

void get_ingredients::on_btn_back_2_released(){

    QString final_ingredient_info = "";

    QString ingredient_description = ui->txt_ingredient_description->toPlainText();
    double ingredient_amount_as_double = ui->dsb_ingredient_amount->value();
    QString ingredient_amount = QString::number(ingredient_amount_as_double);
    QString ingredient_measurement_type = ui->cmb_measurement->currentText();
    ingredient_measurement_type = measurement_conversion(ingredient_measurement_type);
    QString ingredient_name;


    if(ui->txt_ingredient_backup->text() != "" && ui->txt_ingredient_backup->text() != " "){

         ingredient_name = ui->txt_ingredient_backup->text();
    }else{

         ingredient_name = ui->cmb_ingredients_list->currentText();
    }


    if(ingredient_name == "Select Ingredient"){

        QMessageBox::warning(this, tr("Warning!"), tr("Please choose an ingredient!"));
    }
    else if(ingredient_measurement_type == "error"){

        QMessageBox::warning(this, tr("Warning!"), tr("Please choose a measurement type!"));
    }
    else if(ui->dsb_ingredient_amount->value() < 0.01){
        QMessageBox::warning(this, tr("Warning!"), tr("Please choose an amount type!"));
    }
    else{

        if(ingredient_description != "" && ingredient_measurement_type != ""){

            final_ingredient_info = ingredient_amount + " " + ingredient_measurement_type + "\t" + ingredient_name + "\t" + ingredient_description;
        }
        else if(ingredient_description == "" && ingredient_measurement_type != "") {

            final_ingredient_info = ingredient_amount + " " + ingredient_measurement_type + "\t" + ingredient_name;
        }
        else if(ingredient_description != "" && ingredient_measurement_type == ""){

            final_ingredient_info = ingredient_amount + "\t" + ingredient_name + "\t" + ingredient_description;
        }else{

            final_ingredient_info = ingredient_amount + "\t" + ingredient_name;
        }


        // building a string of final ingredients split up by a comma
        string_list +=  final_ingredient_info + ",";

        //removing all commas in list
        ingredients_list = string_list.split(",");

        //setting text box to full list of ingredients split up with a new line break
        ui->txt_ingredients_list->setText(ingredients_list.join("\n"));

        //putting current list in final_infomation class to store for later
        final_infomation::final_meal_name = string_list;


        ui->cmb_ingredients_list->setCurrentIndex(0);
        ui->txt_ingredient_backup->setText("");
        ui->cmb_measurement->setCurrentIndex(0);
        ui->dsb_ingredient_amount->setValue(0.00);
        ui->txt_ingredient_description->setPlainText("");
    }



}


void get_ingredients::on_btn_next_released()
{

    QMessageBox::StandardButton confirm_ingredients_list;
    confirm_ingredients_list = QMessageBox::question(this, "Confirm Ingredients List", "Your final ingredients list will be: \n" +
                                                     ingredients_list.join("\n") + " \n  Is this correct?",
                                                     QMessageBox::Yes|QMessageBox::No);


    if(confirm_ingredients_list == QMessageBox::Yes){

    this->hide();
    create_method = new creating_method(this);
    create_method->show();
    }
}
