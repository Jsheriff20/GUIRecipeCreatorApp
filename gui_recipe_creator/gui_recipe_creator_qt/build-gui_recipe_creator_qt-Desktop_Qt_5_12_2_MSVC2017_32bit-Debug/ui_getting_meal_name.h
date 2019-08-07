/********************************************************************************
** Form generated from reading UI file 'getting_meal_name.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTING_MEAL_NAME_H
#define UI_GETTING_MEAL_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getting_meal_name
{
public:
    QPushButton *pushButton_2;
    QPushButton *btn_next;
    QLabel *lbl_meal_name;
    QLabel *lbl_enter_meal_name;
    QLineEdit *txt_meal_name;

    void setupUi(QDialog *getting_meal_name)
    {
        if (getting_meal_name->objectName().isEmpty())
            getting_meal_name->setObjectName(QString::fromUtf8("getting_meal_name"));
        getting_meal_name->resize(975, 600);
        pushButton_2 = new QPushButton(getting_meal_name);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 550, 91, 41));
        QFont font;
        font.setPointSize(10);
        pushButton_2->setFont(font);
        btn_next = new QPushButton(getting_meal_name);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(874, 550, 91, 41));
        btn_next->setFont(font);
        lbl_meal_name = new QLabel(getting_meal_name);
        lbl_meal_name->setObjectName(QString::fromUtf8("lbl_meal_name"));
        lbl_meal_name->setGeometry(QRect(420, 10, 131, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        lbl_meal_name->setFont(font1);
        lbl_enter_meal_name = new QLabel(getting_meal_name);
        lbl_enter_meal_name->setObjectName(QString::fromUtf8("lbl_enter_meal_name"));
        lbl_enter_meal_name->setGeometry(QRect(100, 100, 151, 51));
        QFont font2;
        font2.setPointSize(14);
        lbl_enter_meal_name->setFont(font2);
        txt_meal_name = new QLineEdit(getting_meal_name);
        txt_meal_name->setObjectName(QString::fromUtf8("txt_meal_name"));
        txt_meal_name->setGeometry(QRect(250, 110, 221, 30));
        QFont font3;
        font3.setPointSize(12);
        txt_meal_name->setFont(font3);
        txt_meal_name->setMaxLength(25);

        retranslateUi(getting_meal_name);

        QMetaObject::connectSlotsByName(getting_meal_name);
    } // setupUi

    void retranslateUi(QDialog *getting_meal_name)
    {
        getting_meal_name->setWindowTitle(QApplication::translate("getting_meal_name", "Getting Meal Name", nullptr));
        pushButton_2->setText(QApplication::translate("getting_meal_name", "Back", nullptr));
        btn_next->setText(QApplication::translate("getting_meal_name", "Next", nullptr));
        lbl_meal_name->setText(QApplication::translate("getting_meal_name", "Meal Name", nullptr));
        lbl_enter_meal_name->setText(QApplication::translate("getting_meal_name", "Enter Meal Name ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getting_meal_name: public Ui_getting_meal_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTING_MEAL_NAME_H
