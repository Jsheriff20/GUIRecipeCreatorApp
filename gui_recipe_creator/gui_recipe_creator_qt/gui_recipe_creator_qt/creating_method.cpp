#include "creating_method.h"
#include "ui_creating_method.h"
#include "get_ingredients.h"
#include "final_infomation.h"
#include <QStringList>
#include <QDebug>
#include <QMessageBox>

creating_method::creating_method(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creating_method)
{
    ui->setupUi(this);


    QString current_method;


    if(!final_infomation::confirm_details_reached){

        ui->btn_back_to_confirmation->hide();

    }else{

        ui->btn_back->hide();
        ui->btn_next->hide();
    }
}

creating_method::~creating_method()
{
    delete ui;
}


bool its_main_step = true;
unsigned int main_step_count = 0;
int sub_step_count = 1;

void creating_method::on_btn_add_method_step_released(){

    if(ui->txt_step_box->toPlainText() == "" || ui->txt_step_box->toPlainText() == " "){

        QMessageBox::warning(this, tr("Warning!"), tr("Enter a valid method step!"));
    }else {

        //creating/ adding to current method list vvvvv
        if(its_main_step == true){

            final_infomation::add_main_step_to_method(ui->txt_step_box->toPlainText());


            main_step_count ++;


            //reset sub step count due to new main step being added
            sub_step_count = 1;


            //update current step counter
            ui->lbl_step_number->setText(QString::number(main_step_count+ 1));
        }
        else{

            final_infomation::add_sub_step_to_method(ui->txt_step_box->toPlainText(), main_step_count);

            sub_step_count ++;


            //update current step counter
            ui->lbl_step_number->setText(QString::number(main_step_count) + "." + QString::number(sub_step_count));
        }


        //enabling sub step button vvvvv
        if(main_step_count > 0){

            ui->btn_add_sub_step->setEnabled(true);
        }


        //reseting text box
        ui->txt_step_box->setPlainText("");

        ui->txt_current_method->setText(final_infomation::return_steps(-1, 0));
    }
}


void creating_method::on_btn_back_released(){

    this->hide();
    getting_ingredients = new get_ingredients(this);
    getting_ingredients->show();
}


void creating_method::on_btn_add_main_step_released(){

    //saying its a main step being added
    its_main_step = true;

    // displaying current step being added
    int current_main_step = main_step_count + 1;
    ui->lbl_step_number->setText(QString::number(current_main_step));
}


void creating_method::on_btn_add_sub_step_released(){

    //saying it not a main step being added
    its_main_step = false;

    // displaying current step being added
    int current_sub_step = sub_step_count;
    ui->lbl_step_number->setText(QString::number(main_step_count) + "." + QString::number(current_sub_step));
}

void creating_method::on_btn_next_released()
{
    QMessageBox::StandardButton confirm_ingredients_list;
    confirm_ingredients_list = QMessageBox::question(this, "Confirm Method List", "Your final method list will be: \n" +
                                                     final_infomation::return_steps(-1, 0) + " \n  Is this correct?",
                                                     QMessageBox::Yes|QMessageBox::No);


    if(confirm_ingredients_list == QMessageBox::Yes){

        this->hide();
        confirm_details = new confirm_final_details(this);
        confirm_details->show();
    }
}

void creating_method::on_btn_back_to_confirmation_released()
{
    this->hide();
    confirm_details = new confirm_final_details(this);
    confirm_details->show();
}
