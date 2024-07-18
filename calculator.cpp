#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    currentNumber = 0;
    operationType = 0;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::ChangeDisplay(QString newNum)
{
    QString num = ui->displayLineEdit->text();
    ui->displayLineEdit->setText(num + newNum);
}
void Calculator::on_num0_clicked()
{
    ChangeDisplay("0");
}


void Calculator::on_num1_clicked()
{
    ChangeDisplay("1");
}


void Calculator::on_num2_clicked()
{
    ChangeDisplay("2");
}


void Calculator::on_num3_clicked()
{
    ChangeDisplay("3");
}


void Calculator::on_num4_clicked()
{
    ChangeDisplay("4");
}


void Calculator::on_num5_clicked()
{
    ChangeDisplay("5");
}


void Calculator::on_num6_clicked()
{
    ChangeDisplay("6");
}


void Calculator::on_num7_clicked()
{
    ChangeDisplay("7");
}


void Calculator::on_num8_clicked()
{
    ChangeDisplay("8");
}


void Calculator::on_num9_clicked()
{
    ChangeDisplay("9");
}


void Calculator::on_clearBtn_clicked()
{
    ui->displayLineEdit->clear();
}


void Calculator::on_equalBtn_clicked()
{
    double nextNumber = ui->displayLineEdit->text().toDouble();
    double result;
    switch (operationType)
    {
    case 0:
        result = currentNumber + nextNumber;
        break;
    case 1:
        result = currentNumber - nextNumber;
        break;
    case 2:
        result = currentNumber * nextNumber;
        break;
    case 3:
        result = currentNumber / nextNumber;
        break;
    default:
        result = 0;
        break;

    }
    QString outputResult = QString::number(result);
    ui->displayLineEdit->setText(outputResult);
}
void Calculator::on_addBtn_clicked()
{
    currentNumber = ui->displayLineEdit->text().toDouble();
    operationType = 0;
    ui->displayLineEdit->clear();
}


void Calculator::on_subtractBtn_clicked()
{
    currentNumber = ui->displayLineEdit->text().toDouble();
    operationType = 1;
    ui->displayLineEdit->clear();
}


void Calculator::on_multiplyBtn_clicked()
{
    currentNumber = ui->displayLineEdit->text().toDouble();
    operationType = 2;
    ui->displayLineEdit->clear();
}


void Calculator::on_divideBtn_clicked()
{
    currentNumber = ui->displayLineEdit->text().toDouble();
    operationType = 3;
    ui->displayLineEdit->clear();
}

