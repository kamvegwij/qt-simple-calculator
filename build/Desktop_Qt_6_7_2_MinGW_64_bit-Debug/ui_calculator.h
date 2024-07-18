/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QLineEdit *displayLineEdit;
    QPushButton *clearBtn;
    QPushButton *divideBtn;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *multiplyBtn;
    QPushButton *num7;
    QPushButton *num1;
    QPushButton *num5;
    QPushButton *num2;
    QPushButton *num6;
    QPushButton *num3;
    QPushButton *addBtn;
    QPushButton *subtractBtn;
    QPushButton *num4;
    QPushButton *num0;
    QPushButton *equalBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(353, 514);
        Calculator->setStyleSheet(QString::fromUtf8("background-color: black"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        displayLineEdit = new QLineEdit(centralwidget);
        displayLineEdit->setObjectName("displayLineEdit");
        displayLineEdit->setEnabled(true);
        displayLineEdit->setGeometry(QRect(10, 0, 331, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Bright")});
        font.setPointSize(25);
        displayLineEdit->setFont(font);
        displayLineEdit->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        displayLineEdit->setMouseTracking(false);
        displayLineEdit->setLayoutDirection(Qt::LeftToRight);
        displayLineEdit->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: none;\n"
""));
        clearBtn = new QPushButton(centralwidget);
        clearBtn->setObjectName("clearBtn");
        clearBtn->setGeometry(QRect(100, 380, 61, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Lucida Bright")});
        font1.setPointSize(16);
        font1.setBold(true);
        clearBtn->setFont(font1);
        clearBtn->setAutoFillBackground(false);
        clearBtn->setStyleSheet(QString::fromUtf8("background-color: pink;\n"
"color: black;\n"
"border-radius: 25%;"));
        divideBtn = new QPushButton(centralwidget);
        divideBtn->setObjectName("divideBtn");
        divideBtn->setGeometry(QRect(270, 170, 61, 51));
        divideBtn->setFont(font1);
        divideBtn->setAutoFillBackground(false);
        divideBtn->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;\n"
"border-radius: 25%;"));
        num8 = new QPushButton(centralwidget);
        num8->setObjectName("num8");
        num8->setGeometry(QRect(100, 170, 61, 51));
        num8->setFont(font1);
        num8->setAutoFillBackground(false);
        num8->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num9 = new QPushButton(centralwidget);
        num9->setObjectName("num9");
        num9->setGeometry(QRect(190, 170, 61, 51));
        num9->setFont(font1);
        num9->setAutoFillBackground(false);
        num9->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        multiplyBtn = new QPushButton(centralwidget);
        multiplyBtn->setObjectName("multiplyBtn");
        multiplyBtn->setGeometry(QRect(270, 240, 61, 51));
        multiplyBtn->setFont(font1);
        multiplyBtn->setAutoFillBackground(false);
        multiplyBtn->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;\n"
"border-radius: 25%;"));
        num7 = new QPushButton(centralwidget);
        num7->setObjectName("num7");
        num7->setGeometry(QRect(10, 170, 61, 51));
        num7->setFont(font1);
        num7->setAutoFillBackground(false);
        num7->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num1 = new QPushButton(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(10, 310, 61, 51));
        num1->setFont(font1);
        num1->setAutoFillBackground(false);
        num1->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num5 = new QPushButton(centralwidget);
        num5->setObjectName("num5");
        num5->setGeometry(QRect(100, 240, 61, 51));
        num5->setFont(font1);
        num5->setAutoFillBackground(false);
        num5->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num2 = new QPushButton(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(100, 310, 61, 51));
        num2->setFont(font1);
        num2->setAutoFillBackground(false);
        num2->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num6 = new QPushButton(centralwidget);
        num6->setObjectName("num6");
        num6->setGeometry(QRect(190, 240, 61, 51));
        num6->setFont(font1);
        num6->setAutoFillBackground(false);
        num6->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num3 = new QPushButton(centralwidget);
        num3->setObjectName("num3");
        num3->setGeometry(QRect(190, 310, 61, 51));
        num3->setFont(font1);
        num3->setAutoFillBackground(false);
        num3->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(270, 380, 61, 51));
        addBtn->setFont(font1);
        addBtn->setAutoFillBackground(false);
        addBtn->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;\n"
"border-radius: 25%;"));
        subtractBtn = new QPushButton(centralwidget);
        subtractBtn->setObjectName("subtractBtn");
        subtractBtn->setGeometry(QRect(270, 310, 61, 51));
        subtractBtn->setFont(font1);
        subtractBtn->setAutoFillBackground(false);
        subtractBtn->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;\n"
"border-radius: 25%;"));
        num4 = new QPushButton(centralwidget);
        num4->setObjectName("num4");
        num4->setGeometry(QRect(10, 240, 61, 51));
        num4->setFont(font1);
        num4->setAutoFillBackground(false);
        num4->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        num0 = new QPushButton(centralwidget);
        num0->setObjectName("num0");
        num0->setGeometry(QRect(10, 380, 61, 51));
        num0->setFont(font1);
        num0->setAutoFillBackground(false);
        num0->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"border-radius: 25%;"));
        equalBtn = new QPushButton(centralwidget);
        equalBtn->setObjectName("equalBtn");
        equalBtn->setGeometry(QRect(190, 380, 61, 51));
        equalBtn->setFont(font1);
        equalBtn->setAutoFillBackground(false);
        equalBtn->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;\n"
"border-radius: 25%;"));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 353, 26));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        displayLineEdit->setText(QCoreApplication::translate("Calculator", "1500", nullptr));
        clearBtn->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        divideBtn->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        num8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        num9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        multiplyBtn->setText(QCoreApplication::translate("Calculator", "X", nullptr));
        num7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        num1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        num5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        num2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        num6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        num3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        addBtn->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        subtractBtn->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        num4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        num0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        equalBtn->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
