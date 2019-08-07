/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lbl_getting_started;
    QPlainTextEdit *txt_steps_for_program;
    QPushButton *btn_next;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(975, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbl_getting_started = new QLabel(centralWidget);
        lbl_getting_started->setObjectName(QString::fromUtf8("lbl_getting_started"));
        lbl_getting_started->setGeometry(QRect(400, 10, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        lbl_getting_started->setFont(font);
        txt_steps_for_program = new QPlainTextEdit(centralWidget);
        txt_steps_for_program->setObjectName(QString::fromUtf8("txt_steps_for_program"));
        txt_steps_for_program->setGeometry(QRect(60, 70, 851, 451));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(14);
        txt_steps_for_program->setFont(font1);
        txt_steps_for_program->setReadOnly(true);
        btn_next = new QPushButton(centralWidget);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(874, 550, 91, 41));
        QFont font2;
        font2.setPointSize(10);
        btn_next->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Getting started", nullptr));
        lbl_getting_started->setText(QApplication::translate("MainWindow", "Getting Started ", nullptr));
        txt_steps_for_program->setPlainText(QApplication::translate("MainWindow", "Welcome to the \"Meal Creator Application\" used to create meals for the 'Meal Planner Generator'.\n"
"\n"
"Here are the steps you will be following to create your meal:\n"
"1. Enter the meal's name.\n"
"2. Confirm the meal name.\n"
"3. Add the ingredients.\n"
"4. Confirm the ingredients list.\n"
"5. Add each step to the method.\n"
"6. Confirm the method steps.\n"
"7. Confirm the whole meal.\n"
"8. DONE! (Meal Created).", nullptr));
        btn_next->setText(QApplication::translate("MainWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
