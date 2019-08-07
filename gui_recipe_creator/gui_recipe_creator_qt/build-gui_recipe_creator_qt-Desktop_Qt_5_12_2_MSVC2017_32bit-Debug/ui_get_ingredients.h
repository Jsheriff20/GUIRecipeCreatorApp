/********************************************************************************
** Form generated from reading UI file 'get_ingredients.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_INGREDIENTS_H
#define UI_GET_INGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_get_ingredients
{
public:
    QPushButton *btn_back;
    QPushButton *btn_next;
    QComboBox *cmb_ingredients_list;
    QLineEdit *txt_ingredient_backup;
    QLabel *lbl_find_your_ingredients;
    QLabel *lbl_creat_your_ingredients_list;
    QLabel *lbl_cant_find_ingredient;
    QLabel *lbl_enter_it_here;
    QFrame *line;
    QComboBox *cmb_measurement;
    QLabel *lbl_measurement_type;
    QFrame *line_2;
    QLabel *lbl_amount;
    QLabel *lbl_add_extra_info_to_ingredient_1;
    QFrame *line_3;
    QLabel *lbl_add_extra_info_to_ingredient_2;
    QDoubleSpinBox *dsb_ingredient_amount;
    QPlainTextEdit *txt_ingredient_description;
    QFrame *line_4;
    QLabel *lb_current_ingredients_list;
    QTextBrowser *txt_ingredients_list;
    QPushButton *btn_back_2;

    void setupUi(QDialog *get_ingredients)
    {
        if (get_ingredients->objectName().isEmpty())
            get_ingredients->setObjectName(QString::fromUtf8("get_ingredients"));
        get_ingredients->resize(975, 600);
        btn_back = new QPushButton(get_ingredients);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(780, 550, 91, 41));
        QFont font;
        font.setPointSize(10);
        btn_back->setFont(font);
        btn_next = new QPushButton(get_ingredients);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(874, 550, 91, 41));
        btn_next->setFont(font);
        cmb_ingredients_list = new QComboBox(get_ingredients);
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->addItem(QString());
        cmb_ingredients_list->setObjectName(QString::fromUtf8("cmb_ingredients_list"));
        cmb_ingredients_list->setGeometry(QRect(67, 110, 151, 31));
        cmb_ingredients_list->setFont(font);
        cmb_ingredients_list->setCursor(QCursor(Qt::PointingHandCursor));
        cmb_ingredients_list->setEditable(false);
        txt_ingredient_backup = new QLineEdit(get_ingredients);
        txt_ingredient_backup->setObjectName(QString::fromUtf8("txt_ingredient_backup"));
        txt_ingredient_backup->setGeometry(QRect(67, 240, 151, 21));
        txt_ingredient_backup->setMaxLength(25);
        lbl_find_your_ingredients = new QLabel(get_ingredients);
        lbl_find_your_ingredients->setObjectName(QString::fromUtf8("lbl_find_your_ingredients"));
        lbl_find_your_ingredients->setGeometry(QRect(67, 80, 151, 20));
        QFont font1;
        font1.setPointSize(12);
        lbl_find_your_ingredients->setFont(font1);
        lbl_creat_your_ingredients_list = new QLabel(get_ingredients);
        lbl_creat_your_ingredients_list->setObjectName(QString::fromUtf8("lbl_creat_your_ingredients_list"));
        lbl_creat_your_ingredients_list->setGeometry(QRect(320, 10, 341, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        lbl_creat_your_ingredients_list->setFont(font2);
        lbl_cant_find_ingredient = new QLabel(get_ingredients);
        lbl_cant_find_ingredient->setObjectName(QString::fromUtf8("lbl_cant_find_ingredient"));
        lbl_cant_find_ingredient->setGeometry(QRect(47, 190, 191, 20));
        lbl_cant_find_ingredient->setFont(font1);
        lbl_enter_it_here = new QLabel(get_ingredients);
        lbl_enter_it_here->setObjectName(QString::fromUtf8("lbl_enter_it_here"));
        lbl_enter_it_here->setGeometry(QRect(87, 210, 111, 20));
        lbl_enter_it_here->setFont(font1);
        line = new QFrame(get_ingredients);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(247, 70, 20, 211));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        cmb_measurement = new QComboBox(get_ingredients);
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->addItem(QString());
        cmb_measurement->setObjectName(QString::fromUtf8("cmb_measurement"));
        cmb_measurement->setGeometry(QRect(277, 110, 191, 31));
        cmb_measurement->setFont(font);
        cmb_measurement->setCursor(QCursor(Qt::PointingHandCursor));
        cmb_measurement->setEditable(false);
        lbl_measurement_type = new QLabel(get_ingredients);
        lbl_measurement_type->setObjectName(QString::fromUtf8("lbl_measurement_type"));
        lbl_measurement_type->setGeometry(QRect(300, 79, 141, 21));
        lbl_measurement_type->setFont(font1);
        line_2 = new QFrame(get_ingredients);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(477, 70, 20, 211));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lbl_amount = new QLabel(get_ingredients);
        lbl_amount->setObjectName(QString::fromUtf8("lbl_amount"));
        lbl_amount->setGeometry(QRect(570, 80, 61, 20));
        lbl_amount->setFont(font1);
        lbl_add_extra_info_to_ingredient_1 = new QLabel(get_ingredients);
        lbl_add_extra_info_to_ingredient_1->setObjectName(QString::fromUtf8("lbl_add_extra_info_to_ingredient_1"));
        lbl_add_extra_info_to_ingredient_1->setGeometry(QRect(740, 60, 171, 20));
        lbl_add_extra_info_to_ingredient_1->setFont(font1);
        line_3 = new QFrame(get_ingredients);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(690, 70, 20, 211));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        lbl_add_extra_info_to_ingredient_2 = new QLabel(get_ingredients);
        lbl_add_extra_info_to_ingredient_2->setObjectName(QString::fromUtf8("lbl_add_extra_info_to_ingredient_2"));
        lbl_add_extra_info_to_ingredient_2->setGeometry(QRect(760, 80, 141, 20));
        lbl_add_extra_info_to_ingredient_2->setFont(font1);
        dsb_ingredient_amount = new QDoubleSpinBox(get_ingredients);
        dsb_ingredient_amount->setObjectName(QString::fromUtf8("dsb_ingredient_amount"));
        dsb_ingredient_amount->setGeometry(QRect(561, 110, 71, 22));
        dsb_ingredient_amount->setFont(font);
        dsb_ingredient_amount->setMinimum(0.000000000000000);
        dsb_ingredient_amount->setMaximum(100000.000000000000000);
        dsb_ingredient_amount->setSingleStep(0.500000000000000);
        dsb_ingredient_amount->setValue(0.000000000000000);
        txt_ingredient_description = new QPlainTextEdit(get_ingredients);
        txt_ingredient_description->setObjectName(QString::fromUtf8("txt_ingredient_description"));
        txt_ingredient_description->setGeometry(QRect(750, 110, 181, 101));
        line_4 = new QFrame(get_ingredients);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(30, 320, 701, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lb_current_ingredients_list = new QLabel(get_ingredients);
        lb_current_ingredients_list->setObjectName(QString::fromUtf8("lb_current_ingredients_list"));
        lb_current_ingredients_list->setGeometry(QRect(50, 360, 181, 20));
        lb_current_ingredients_list->setFont(font1);
        txt_ingredients_list = new QTextBrowser(get_ingredients);
        txt_ingredients_list->setObjectName(QString::fromUtf8("txt_ingredients_list"));
        txt_ingredients_list->setGeometry(QRect(50, 400, 661, 192));
        QFont font3;
        font3.setUnderline(true);
        txt_ingredients_list->setFont(font3);
        btn_back_2 = new QPushButton(get_ingredients);
        btn_back_2->setObjectName(QString::fromUtf8("btn_back_2"));
        btn_back_2->setGeometry(QRect(780, 270, 181, 61));
        btn_back_2->setFont(font);

        retranslateUi(get_ingredients);

        cmb_ingredients_list->setCurrentIndex(0);
        cmb_measurement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(get_ingredients);
    } // setupUi

    void retranslateUi(QDialog *get_ingredients)
    {
        get_ingredients->setWindowTitle(QApplication::translate("get_ingredients", "Dialog", nullptr));
        btn_back->setText(QApplication::translate("get_ingredients", "Back", nullptr));
        btn_next->setText(QApplication::translate("get_ingredients", "Next", nullptr));
        cmb_ingredients_list->setItemText(0, QApplication::translate("get_ingredients", "Select Ingredient", nullptr));
        cmb_ingredients_list->setItemText(1, QApplication::translate("get_ingredients", "------Vegetables------", nullptr));
        cmb_ingredients_list->setItemText(2, QApplication::translate("get_ingredients", "Onion", nullptr));
        cmb_ingredients_list->setItemText(3, QApplication::translate("get_ingredients", "Garlic", nullptr));
        cmb_ingredients_list->setItemText(4, QApplication::translate("get_ingredients", "Tomato (Buffalo)", nullptr));
        cmb_ingredients_list->setItemText(5, QApplication::translate("get_ingredients", "Tomato(Canned)", nullptr));
        cmb_ingredients_list->setItemText(6, QApplication::translate("get_ingredients", "Tomato (Cherry)", nullptr));
        cmb_ingredients_list->setItemText(7, QApplication::translate("get_ingredients", "Sun Dried Tomato", nullptr));
        cmb_ingredients_list->setItemText(8, QApplication::translate("get_ingredients", "Pepper (Bell)", nullptr));
        cmb_ingredients_list->setItemText(9, QApplication::translate("get_ingredients", "Pepper (Sweet)", nullptr));
        cmb_ingredients_list->setItemText(10, QApplication::translate("get_ingredients", "Basil", nullptr));
        cmb_ingredients_list->setItemText(11, QApplication::translate("get_ingredients", "Parsley", nullptr));
        cmb_ingredients_list->setItemText(12, QApplication::translate("get_ingredients", "Broccoli", nullptr));
        cmb_ingredients_list->setItemText(13, QApplication::translate("get_ingredients", "Corn/ Sweet Corn", nullptr));
        cmb_ingredients_list->setItemText(14, QApplication::translate("get_ingredients", "Spinach", nullptr));
        cmb_ingredients_list->setItemText(15, QApplication::translate("get_ingredients", "Mushroom (Flat Cap)", nullptr));
        cmb_ingredients_list->setItemText(16, QApplication::translate("get_ingredients", "Mushroom (Portobello)", nullptr));
        cmb_ingredients_list->setItemText(17, QApplication::translate("get_ingredients", "Mushroom (White Button)", nullptr));
        cmb_ingredients_list->setItemText(18, QApplication::translate("get_ingredients", "Mushroom (Crimino)", nullptr));
        cmb_ingredients_list->setItemText(19, QApplication::translate("get_ingredients", "Mushroom (Shiitake)", nullptr));
        cmb_ingredients_list->setItemText(20, QApplication::translate("get_ingredients", "Mushroom (Oyster)", nullptr));
        cmb_ingredients_list->setItemText(21, QApplication::translate("get_ingredients", "Green Beans", nullptr));
        cmb_ingredients_list->setItemText(22, QApplication::translate("get_ingredients", "Ginger", nullptr));
        cmb_ingredients_list->setItemText(23, QApplication::translate("get_ingredients", "Chilli Pepper", nullptr));
        cmb_ingredients_list->setItemText(24, QApplication::translate("get_ingredients", "Rosemary", nullptr));
        cmb_ingredients_list->setItemText(25, QApplication::translate("get_ingredients", "Onion (White)", nullptr));
        cmb_ingredients_list->setItemText(26, QApplication::translate("get_ingredients", "Onion (Red)", nullptr));
        cmb_ingredients_list->setItemText(27, QApplication::translate("get_ingredients", "Cucumber", nullptr));
        cmb_ingredients_list->setItemText(28, QApplication::translate("get_ingredients", "Sweet Potato", nullptr));
        cmb_ingredients_list->setItemText(29, QApplication::translate("get_ingredients", "Pickle", nullptr));
        cmb_ingredients_list->setItemText(30, QApplication::translate("get_ingredients", "Avocado", nullptr));
        cmb_ingredients_list->setItemText(31, QApplication::translate("get_ingredients", "Zucchini", nullptr));
        cmb_ingredients_list->setItemText(32, QApplication::translate("get_ingredients", "Coriander/ Cilantro", nullptr));
        cmb_ingredients_list->setItemText(33, QApplication::translate("get_ingredients", "Mixed Vegetables (Frozen)", nullptr));
        cmb_ingredients_list->setItemText(34, QApplication::translate("get_ingredients", "Olives", nullptr));
        cmb_ingredients_list->setItemText(35, QApplication::translate("get_ingredients", "Asparagus", nullptr));
        cmb_ingredients_list->setItemText(36, QApplication::translate("get_ingredients", "Cabbage", nullptr));
        cmb_ingredients_list->setItemText(37, QApplication::translate("get_ingredients", "Cauliflower", nullptr));
        cmb_ingredients_list->setItemText(38, QApplication::translate("get_ingredients", "Dill", nullptr));
        cmb_ingredients_list->setItemText(39, QApplication::translate("get_ingredients", "kale", nullptr));
        cmb_ingredients_list->setItemText(40, QApplication::translate("get_ingredients", "Pumpkin", nullptr));
        cmb_ingredients_list->setItemText(41, QApplication::translate("get_ingredients", "Squash", nullptr));
        cmb_ingredients_list->setItemText(42, QApplication::translate("get_ingredients", "Mint", nullptr));
        cmb_ingredients_list->setItemText(43, QApplication::translate("get_ingredients", "Scallion/ Green Onion", nullptr));
        cmb_ingredients_list->setItemText(44, QApplication::translate("get_ingredients", "Shallot", nullptr));
        cmb_ingredients_list->setItemText(45, QApplication::translate("get_ingredients", "Eggplant", nullptr));
        cmb_ingredients_list->setItemText(46, QApplication::translate("get_ingredients", "Beetroot", nullptr));
        cmb_ingredients_list->setItemText(47, QApplication::translate("get_ingredients", "Butternut Squash", nullptr));
        cmb_ingredients_list->setItemText(48, QApplication::translate("get_ingredients", "Horseradish", nullptr));
        cmb_ingredients_list->setItemText(49, QApplication::translate("get_ingredients", "Leek", nullptr));
        cmb_ingredients_list->setItemText(50, QApplication::translate("get_ingredients", "Caper", nullptr));
        cmb_ingredients_list->setItemText(51, QApplication::translate("get_ingredients", "Brussle Sprout", nullptr));
        cmb_ingredients_list->setItemText(52, QApplication::translate("get_ingredients", "Artichoke", nullptr));
        cmb_ingredients_list->setItemText(53, QApplication::translate("get_ingredients", "Artichoke Heart", nullptr));
        cmb_ingredients_list->setItemText(54, QApplication::translate("get_ingredients", "Chia Seed", nullptr));
        cmb_ingredients_list->setItemText(55, QApplication::translate("get_ingredients", "Radish", nullptr));
        cmb_ingredients_list->setItemText(56, QApplication::translate("get_ingredients", "Parsnip", nullptr));
        cmb_ingredients_list->setItemText(57, QApplication::translate("get_ingredients", "Fennel", nullptr));
        cmb_ingredients_list->setItemText(58, QApplication::translate("get_ingredients", "Turnip", nullptr));
        cmb_ingredients_list->setItemText(59, QApplication::translate("get_ingredients", "Cress (Water)", nullptr));
        cmb_ingredients_list->setItemText(60, QApplication::translate("get_ingredients", "Cress (Garden)", nullptr));
        cmb_ingredients_list->setItemText(61, QApplication::translate("get_ingredients", "Rocket", nullptr));
        cmb_ingredients_list->setItemText(62, QApplication::translate("get_ingredients", "Bamboo Shoot", nullptr));
        cmb_ingredients_list->setItemText(63, QApplication::translate("get_ingredients", "Celery", nullptr));
        cmb_ingredients_list->setItemText(64, QApplication::translate("get_ingredients", "Celery Root", nullptr));
        cmb_ingredients_list->setItemText(65, QApplication::translate("get_ingredients", "------Dairy------", nullptr));
        cmb_ingredients_list->setItemText(66, QApplication::translate("get_ingredients", "Butter", nullptr));
        cmb_ingredients_list->setItemText(67, QApplication::translate("get_ingredients", "Milk (Semi Skimmed)", nullptr));
        cmb_ingredients_list->setItemText(68, QApplication::translate("get_ingredients", "Milk (Whole)", nullptr));
        cmb_ingredients_list->setItemText(69, QApplication::translate("get_ingredients", "Parmesan", nullptr));
        cmb_ingredients_list->setItemText(70, QApplication::translate("get_ingredients", "Cheddar", nullptr));
        cmb_ingredients_list->setItemText(71, QApplication::translate("get_ingredients", "Mozzarella", nullptr));
        cmb_ingredients_list->setItemText(72, QApplication::translate("get_ingredients", "Yogurt", nullptr));
        cmb_ingredients_list->setItemText(73, QApplication::translate("get_ingredients", "Cream (Single)", nullptr));
        cmb_ingredients_list->setItemText(74, QApplication::translate("get_ingredients", "Cream (Double)", nullptr));
        cmb_ingredients_list->setItemText(75, QApplication::translate("get_ingredients", "Feta", nullptr));
        cmb_ingredients_list->setItemText(76, QApplication::translate("get_ingredients", "Ice Cream", nullptr));
        cmb_ingredients_list->setItemText(77, QApplication::translate("get_ingredients", "Ricotta", nullptr));
        cmb_ingredients_list->setItemText(78, QApplication::translate("get_ingredients", "Goats Cheese", nullptr));
        cmb_ingredients_list->setItemText(79, QApplication::translate("get_ingredients", "Brie", nullptr));
        cmb_ingredients_list->setItemText(80, QApplication::translate("get_ingredients", "Creme Fraiche", nullptr));
        cmb_ingredients_list->setItemText(81, QApplication::translate("get_ingredients", "Custard", nullptr));
        cmb_ingredients_list->setItemText(82, QApplication::translate("get_ingredients", "Mascarpone", nullptr));
        cmb_ingredients_list->setItemText(83, QApplication::translate("get_ingredients", "Halloumi", nullptr));
        cmb_ingredients_list->setItemText(84, QApplication::translate("get_ingredients", "Edam", nullptr));
        cmb_ingredients_list->setItemText(85, QApplication::translate("get_ingredients", "------Baking & Grains------", nullptr));
        cmb_ingredients_list->setItemText(86, QApplication::translate("get_ingredients", "Rice (Brown)", nullptr));
        cmb_ingredients_list->setItemText(87, QApplication::translate("get_ingredients", "Rice (White)", nullptr));
        cmb_ingredients_list->setItemText(88, QApplication::translate("get_ingredients", "Pasta", nullptr));
        cmb_ingredients_list->setItemText(89, QApplication::translate("get_ingredients", "Flour (Plain)", nullptr));
        cmb_ingredients_list->setItemText(90, QApplication::translate("get_ingredients", "Flour (Self Rasing)", nullptr));
        cmb_ingredients_list->setItemText(91, QApplication::translate("get_ingredients", "Bread", nullptr));
        cmb_ingredients_list->setItemText(92, QApplication::translate("get_ingredients", "Baking Powder", nullptr));
        cmb_ingredients_list->setItemText(93, QApplication::translate("get_ingredients", "Baking Soda", nullptr));
        cmb_ingredients_list->setItemText(94, QApplication::translate("get_ingredients", "Bread Crumbs", nullptr));
        cmb_ingredients_list->setItemText(95, QApplication::translate("get_ingredients", "Cornstarch", nullptr));
        cmb_ingredients_list->setItemText(96, QApplication::translate("get_ingredients", "Rolled Oats", nullptr));
        cmb_ingredients_list->setItemText(97, QApplication::translate("get_ingredients", "Oats", nullptr));
        cmb_ingredients_list->setItemText(98, QApplication::translate("get_ingredients", "Noodles (Egg)", nullptr));

        cmb_ingredients_list->setCurrentText(QApplication::translate("get_ingredients", "Select Ingredient", nullptr));
        lbl_find_your_ingredients->setText(QApplication::translate("get_ingredients", "Find Your Ingredient", nullptr));
        lbl_creat_your_ingredients_list->setText(QApplication::translate("get_ingredients", "Create Your Ingredients List", nullptr));
        lbl_cant_find_ingredient->setText(QApplication::translate("get_ingredients", "Cant Find Your Ingredient?", nullptr));
        lbl_enter_it_here->setText(QApplication::translate("get_ingredients", "Enter It Here:", nullptr));
        cmb_measurement->setItemText(0, QApplication::translate("get_ingredients", "Select Measurement Type", nullptr));
        cmb_measurement->setItemText(1, QApplication::translate("get_ingredients", "Grams (g)", nullptr));
        cmb_measurement->setItemText(2, QApplication::translate("get_ingredients", "Kilo Grams (kg)", nullptr));
        cmb_measurement->setItemText(3, QApplication::translate("get_ingredients", "Milliliter (ml)", nullptr));
        cmb_measurement->setItemText(4, QApplication::translate("get_ingredients", "Liter (l)", nullptr));
        cmb_measurement->setItemText(5, QApplication::translate("get_ingredients", "Table Spoon (tbsp)", nullptr));
        cmb_measurement->setItemText(6, QApplication::translate("get_ingredients", "Tea Spoon (tsp)", nullptr));
        cmb_measurement->setItemText(7, QApplication::translate("get_ingredients", "Number of Items", nullptr));

        cmb_measurement->setCurrentText(QApplication::translate("get_ingredients", "Select Measurement Type", nullptr));
        lbl_measurement_type->setText(QApplication::translate("get_ingredients", "Measurement Type", nullptr));
        lbl_amount->setText(QApplication::translate("get_ingredients", "Amount", nullptr));
        lbl_add_extra_info_to_ingredient_1->setText(QApplication::translate("get_ingredients", "<html><head/><body><p>Extra Information / Add</p><p><br/></p></body></html>", nullptr));
        lbl_add_extra_info_to_ingredient_2->setText(QApplication::translate("get_ingredients", "<html><head/><body><p>Description To Item</p></body></html>", nullptr));
        lb_current_ingredients_list->setText(QApplication::translate("get_ingredients", "Current Ingredients List", nullptr));
        btn_back_2->setText(QApplication::translate("get_ingredients", "Add Ingredient to list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class get_ingredients: public Ui_get_ingredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_INGREDIENTS_H
