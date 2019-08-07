#include "confirm_final_details.h"
#include "ui_confirm_final_details.h"

confirm_final_details::confirm_final_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm_final_details)
{
    ui->setupUi(this);
}

confirm_final_details::~confirm_final_details()
{
    delete ui;
}
