#pragma once

#include <QtWidgets/QMainWindow>
#include <QVector>

#include "ui_calculator.h"

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = Q_NULLPTR);
    ~calculator();

private:
    Ui::calculatorClass ui;

    QVector <int> m_firstNumber;

public slots:
    // Number button click function
    void num0_Clicked();
    void num1_Clicked();
    void num2_Clicked();
    void num3_Clicked();
    void num4_Clicked();
    void num5_Clicked();
    void num6_Clicked();
    void num7_Clicked();
    void num8_Clicked();
    void num9_Clicked();

    // Number option function
    void clear_Clicked();
};
