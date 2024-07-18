#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:

    void on_num0_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_clearBtn_clicked();

    void on_equalBtn_clicked();

    void on_addBtn_clicked();

    void on_subtractBtn_clicked();

    void on_multiplyBtn_clicked();

    void on_divideBtn_clicked();

    void ChangeDisplay(QString);

private:
    Ui::Calculator *ui;
    double currentNumber;
    int operationType; //0-add. 1-subtract. 2-multiply. 3-divide
};
#endif // CALCULATOR_H
