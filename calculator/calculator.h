#pragma once

#include <QtWidgets/QMainWindow>
#include <QList>
#include <QKeyEvent>

#include "ui_calculator.h"

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = Q_NULLPTR);
    ~calculator();

    void setBinMode();
    void setOctMode();
    void setDecMode();
    void setHexMode();

    void plus_Calculation();
    void minus_Calculation();
    void multiply_Calculation();
    void division_Calculation();
    void remainder_Calculation();

    void numberConversion();
    void decToBin();
    void decToOct();
    void decToDec();
    void decToHex();

private:
    Ui::calculatorClass ui;

    int m_calculateStatus, m_leftNumber, m_result;

    QList <int> m_numberBoard;
    QList <char> m_progress;

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

    // Calculation function
    void clear_Clicked();
    void delete_Clicked();
    void result_Clicked();
    void plus_Clicked();
    void minus_Clicked();
    void multiply_Clicked();
    void division_Clicked();
    void remainder_Clicked();
    void groupStart_Clicked();
    void groupEnd_Clicked();

protected:
    void keyPressEvent(QKeyEvent* event);
};
