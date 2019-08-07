/********************************************************************************
** Form generated from reading UI file 'creating_method.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATING_METHOD_H
#define UI_CREATING_METHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_creating_method
{
public:
    QPushButton *btn_back;
    QPushButton *btn_next;
    QLabel *lb_create_your_method;
    QTextBrowser *txt_current_method;
    QFrame *line_4;
    QLabel *lbl_current_method;
    QPushButton *btn_add_method_step;
    QPlainTextEdit *txt_step_box;
    QPushButton *btn_add_main_step;
    QPushButton *btn_add_sub_step;
    QLabel *lbl_adding_step;
    QLabel *lbl_step_number;

    void setupUi(QDialog *creating_method)
    {
        if (creating_method->objectName().isEmpty())
            creating_method->setObjectName(QString::fromUtf8("creating_method"));
        creating_method->resize(975, 600);
        btn_back = new QPushButton(creating_method);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(780, 550, 91, 41));
        QFont font;
        font.setPointSize(10);
        btn_back->setFont(font);
        btn_next = new QPushButton(creating_method);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(874, 550, 91, 41));
        btn_next->setFont(font);
        lb_create_your_method = new QLabel(creating_method);
        lb_create_your_method->setObjectName(QString::fromUtf8("lb_create_your_method"));
        lb_create_your_method->setGeometry(QRect(370, 10, 241, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        lb_create_your_method->setFont(font1);
        txt_current_method = new QTextBrowser(creating_method);
        txt_current_method->setObjectName(QString::fromUtf8("txt_current_method"));
        txt_current_method->setGeometry(QRect(50, 281, 661, 311));
        QFont font2;
        font2.setUnderline(true);
        txt_current_method->setFont(font2);
        line_4 = new QFrame(creating_method);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(30, 220, 731, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lbl_current_method = new QLabel(creating_method);
        lbl_current_method->setObjectName(QString::fromUtf8("lbl_current_method"));
        lbl_current_method->setGeometry(QRect(50, 250, 181, 20));
        QFont font3;
        font3.setPointSize(12);
        lbl_current_method->setFont(font3);
        btn_add_method_step = new QPushButton(creating_method);
        btn_add_method_step->setObjectName(QString::fromUtf8("btn_add_method_step"));
        btn_add_method_step->setGeometry(QRect(780, 190, 181, 61));
        btn_add_method_step->setFont(font);
        txt_step_box = new QPlainTextEdit(creating_method);
        txt_step_box->setObjectName(QString::fromUtf8("txt_step_box"));
        txt_step_box->setGeometry(QRect(50, 140, 691, 71));
        btn_add_main_step = new QPushButton(creating_method);
        btn_add_main_step->setObjectName(QString::fromUtf8("btn_add_main_step"));
        btn_add_main_step->setGeometry(QRect(50, 80, 111, 41));
        QPalette palette;
        QBrush brush(QColor(170, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush3);
        btn_add_main_step->setPalette(palette);
        btn_add_main_step->setFont(font);
        btn_add_main_step->setFlat(false);
        btn_add_sub_step = new QPushButton(creating_method);
        btn_add_sub_step->setObjectName(QString::fromUtf8("btn_add_sub_step"));
        btn_add_sub_step->setEnabled(false);
        btn_add_sub_step->setGeometry(QRect(170, 80, 111, 41));
        btn_add_sub_step->setFont(font);
        lbl_adding_step = new QLabel(creating_method);
        lbl_adding_step->setObjectName(QString::fromUtf8("lbl_adding_step"));
        lbl_adding_step->setGeometry(QRect(300, 100, 101, 20));
        lbl_adding_step->setFont(font3);
        lbl_step_number = new QLabel(creating_method);
        lbl_step_number->setObjectName(QString::fromUtf8("lbl_step_number"));
        lbl_step_number->setGeometry(QRect(400, 100, 71, 20));
        lbl_step_number->setFont(font3);

        retranslateUi(creating_method);

        QMetaObject::connectSlotsByName(creating_method);
    } // setupUi

    void retranslateUi(QDialog *creating_method)
    {
        creating_method->setWindowTitle(QApplication::translate("creating_method", "Dialog", nullptr));
        btn_back->setText(QApplication::translate("creating_method", "Back", nullptr));
        btn_next->setText(QApplication::translate("creating_method", "Next", nullptr));
        lb_create_your_method->setText(QApplication::translate("creating_method", "Create Your Method", nullptr));
        lbl_current_method->setText(QApplication::translate("creating_method", "Current Method:", nullptr));
        btn_add_method_step->setText(QApplication::translate("creating_method", "Completed Method Step", nullptr));
        btn_add_main_step->setText(QApplication::translate("creating_method", "Add Main Step", nullptr));
        btn_add_sub_step->setText(QApplication::translate("creating_method", "Add Sub Step", nullptr));
        lbl_adding_step->setText(QApplication::translate("creating_method", "Adding Step:", nullptr));
        lbl_step_number->setText(QApplication::translate("creating_method", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creating_method: public Ui_creating_method {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATING_METHOD_H
