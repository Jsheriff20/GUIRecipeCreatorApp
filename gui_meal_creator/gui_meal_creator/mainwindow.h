#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "getting_meal_name.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_next_released();

private:
    Ui::MainWindow *ui;
    getting_meal_name *get_meal_name;
};

#endif // MAINWINDOW_H
