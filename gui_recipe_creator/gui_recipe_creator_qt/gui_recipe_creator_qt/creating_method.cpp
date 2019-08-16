#include "creating_method.h"
#include "ui_creating_method.h"
#include "get_ingredients.h"
#include "final_infomation.h"
#include <QStringList>
#include <QDebug>
#include <QMessageBox>
#include <QInputDialog>

bool its_main_step = true;

creating_method::creating_method(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creating_method)
{
    ui->setupUi(this);

    if(final_infomation::final_method_vector.size() != 0){
        ui->lbl_step_number->setText(QString::number(final_infomation::final_method_vector.size() +1));
        ui->btn_add_sub_step->setEnabled(true);
        its_main_step = true;
    }
    ui->txt_current_method->setText(final_infomation::return_steps(-1, 0));
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


unsigned int main_step_count = 0;
unsigned int sub_step_count = 1;


void creating_method::on_btn_add_method_step_released(){

    if(ui->txt_step_box->toPlainText().size() < 4){

        QMessageBox::warning(this, tr("Warning!"), tr("Enter a valid method step!"));
    }else {

        //creating/ adding to current method list vvvvv
        if(its_main_step == true){

            final_infomation::add_main_step_to_method(ui->txt_step_box->toPlainText());


            main_step_count = (final_infomation::final_method_vector.size());


            //reset sub step count due to new main step being added
            sub_step_count = 1;


            //update current step counter
            ui->lbl_step_number->setText(QString::number(main_step_count+ 1));
        }
        else{

            final_infomation::add_sub_step_to_method(ui->txt_step_box->toPlainText(), main_step_count);


           sub_step_count = (final_infomation::final_method_vector[main_step_count - 1].size());


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

void creating_method::on_btn_delete_released()
{
    QStringList method_numbers_list;
    QString method_step;

    for (unsigned int i =0;i < final_infomation::final_method_vector.size(); i++) {

        method_numbers_list << QString::number(i + 1);


        for (unsigned int j =1;j < final_infomation::final_method_vector[i].size(); j++){

            method_numbers_list << "  " + QString::number(i + 1) + "." + QString::number(j);
        }
    }


    bool ok;
    QString method_number_to_delete = QInputDialog::getItem(this, tr("Choose Which Method Step To Delete"), tr("Enter Step Number You Want To Delete:"), method_numbers_list, 0, false, &ok);


    //if the method number to delete vatiable is not empty then run this.
    if(ok && !method_number_to_delete.isEmpty()){

        //check to see if the step number selected is a whole number/ main step
        if(method_number_to_delete.toInt() == static_cast<int>(method_number_to_delete.toDouble())){

            //warning user that the step they are deleting is a main step and if they delete it then they will lose all sub steps
            QMessageBox::StandardButton confirm_deleting_main_step;
            confirm_deleting_main_step = QMessageBox::question(this, "Confirm Deletion of Main Step", "You are deleting step '" +
                                                               method_number_to_delete + "' this is a main step, Deleting this will delete any sub steps"
                                                                                         " do you wish to continue",
                                                             QMessageBox::Yes|QMessageBox::No);


            //if the user wants to delete main step it will delete it here
            if(confirm_deleting_main_step == QMessageBox::Yes){

                unsigned int main_step_number = method_number_to_delete.toInt();
                final_infomation::delete_step(main_step_number, 0);
            }
        }
        else{
            unsigned int main_step_number = static_cast<int>(method_number_to_delete.toDouble());
            QString sub_step;


            // find out what the sub step number is
            QString str (method_number_to_delete);
            bool point_position_found = false;

            for (int i = 0; i < str.length();i++) {

                //if decimal point found anything after is part of the sub step number so collect it
                if(point_position_found){
                    sub_step += str.at(i);
                }

                //find the decimal point
                if(str.at(i) == "."){

                    point_position_found = true;
                }
            }


            int sub_step_number = sub_step.toInt();
            qDebug() << sub_step_number;
            final_infomation::delete_step(main_step_number, sub_step_number);
        }
    }


    //update current method text box after steps  have been deleted
    ui->txt_current_method->setText(final_infomation::return_steps(-1, 0));
}
