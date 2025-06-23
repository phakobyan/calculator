/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *Display;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Divide;
    QPushButton *MemAdd;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Add;
    QPushButton *MemGet;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Equals;
    QPushButton *Button7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(569, 330);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(50, 10, 491, 131));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(150, 150, 95, 25));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(250, 150, 95, 25));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(350, 150, 95, 25));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setGeometry(QRect(450, 150, 91, 25));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(50, 180, 95, 25));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(150, 180, 95, 25));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(250, 180, 95, 25));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(350, 180, 95, 25));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        MemClear->setGeometry(QRect(450, 180, 91, 25));
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(50, 210, 95, 25));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(150, 210, 95, 25));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(250, 210, 95, 25));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(350, 210, 95, 25));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        MemGet->setGeometry(QRect(450, 210, 91, 25));
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(50, 240, 95, 25));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(150, 240, 95, 25));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setGeometry(QRect(250, 240, 95, 25));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(350, 240, 95, 25));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setGeometry(QRect(450, 240, 91, 25));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(50, 150, 95, 25));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 569, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
