#ifndef CONFIRM_FINAL_DETAILS_H
#define CONFIRM_FINAL_DETAILS_H

#include <QDialog>

namespace Ui {
class confirm_final_details;
}

class confirm_final_details : public QDialog
{
    Q_OBJECT

public:
    explicit confirm_final_details(QWidget *parent = nullptr);
    ~confirm_final_details();

private:
    Ui::confirm_final_details *ui;
};

#endif // CONFIRM_FINAL_DETAILS_H
