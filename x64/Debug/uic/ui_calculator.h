/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *Trans;
    QLabel *HEX;
    QLineEdit *hexResult;
    QLabel *DEC;
    QLineEdit *decResult;
    QLabel *OCT;
    QLineEdit *octResult;
    QLabel *BIN;
    QLineEdit *binResult;
    QWidget *layoutWidget1;
    QGridLayout *Result;
    QLineEdit *finalResult;
    QLabel *process;
    QPushButton *hexD_Btn;
    QPushButton *dotBtn;
    QPushButton *multiplyBtn;
    QPushButton *num5Btn;
    QPushButton *num7Btn;
    QPushButton *negateBtn;
    QPushButton *num6Btn;
    QPushButton *hexE_Btn;
    QPushButton *num1Btn;
    QPushButton *divisionBtn;
    QPushButton *hexA_Btn;
    QPushButton *bracketLeftBtn;
    QPushButton *resultBtn;
    QPushButton *hexB_Btn;
    QPushButton *remainderBtn;
    QPushButton *num2Btn;
    QPushButton *num3Btn;
    QPushButton *deleteBtn;
    QPushButton *hexC_Btn;
    QPushButton *minusBtn;
    QPushButton *shiftLeftBtn;
    QPushButton *num9Btn;
    QPushButton *num0Btn;
    QPushButton *bracketRightBtn;
    QPushButton *num8Btn;
    QPushButton *hexF_Btn;
    QPushButton *plusBtn;
    QPushButton *shiftRightBtn;
    QPushButton *num4Btn;
    QPushButton *clearBtn;

    void setupUi(QMainWindow *calculatorClass)
    {
        if (calculatorClass->objectName().isEmpty())
            calculatorClass->setObjectName(QStringLiteral("calculatorClass"));
        calculatorClass->resize(305, 500);
        centralWidget = new QWidget(calculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 281, 141));
        Trans = new QGridLayout(layoutWidget);
        Trans->setSpacing(6);
        Trans->setContentsMargins(11, 11, 11, 11);
        Trans->setObjectName(QStringLiteral("Trans"));
        Trans->setContentsMargins(0, 0, 0, 0);
        HEX = new QLabel(layoutWidget);
        HEX->setObjectName(QStringLiteral("HEX"));
        QFont font;
        font.setPointSize(12);
        HEX->setFont(font);

        Trans->addWidget(HEX, 0, 0, 1, 1);

        hexResult = new QLineEdit(layoutWidget);
        hexResult->setObjectName(QStringLiteral("hexResult"));
        hexResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hexResult->setReadOnly(true);

        Trans->addWidget(hexResult, 0, 1, 1, 1);

        DEC = new QLabel(layoutWidget);
        DEC->setObjectName(QStringLiteral("DEC"));
        DEC->setFont(font);

        Trans->addWidget(DEC, 1, 0, 1, 1);

        decResult = new QLineEdit(layoutWidget);
        decResult->setObjectName(QStringLiteral("decResult"));
        decResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        decResult->setReadOnly(true);

        Trans->addWidget(decResult, 1, 1, 1, 1);

        OCT = new QLabel(layoutWidget);
        OCT->setObjectName(QStringLiteral("OCT"));
        OCT->setFont(font);

        Trans->addWidget(OCT, 2, 0, 1, 1);

        octResult = new QLineEdit(layoutWidget);
        octResult->setObjectName(QStringLiteral("octResult"));
        octResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        octResult->setReadOnly(true);

        Trans->addWidget(octResult, 2, 1, 1, 1);

        BIN = new QLabel(layoutWidget);
        BIN->setObjectName(QStringLiteral("BIN"));
        BIN->setFont(font);

        Trans->addWidget(BIN, 3, 0, 1, 1);

        binResult = new QLineEdit(layoutWidget);
        binResult->setObjectName(QStringLiteral("binResult"));
        binResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        binResult->setReadOnly(true);

        Trans->addWidget(binResult, 3, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 20, 281, 51));
        Result = new QGridLayout(layoutWidget1);
        Result->setSpacing(6);
        Result->setContentsMargins(11, 11, 11, 11);
        Result->setObjectName(QStringLiteral("Result"));
        Result->setContentsMargins(0, 0, 0, 0);
        finalResult = new QLineEdit(layoutWidget1);
        finalResult->setObjectName(QStringLiteral("finalResult"));
        finalResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Result->addWidget(finalResult, 1, 0, 1, 1);

        process = new QLabel(layoutWidget1);
        process->setObjectName(QStringLiteral("process"));
        process->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Result->addWidget(process, 0, 0, 1, 1);

        hexD_Btn = new QPushButton(centralWidget);
        hexD_Btn->setObjectName(QStringLiteral("hexD_Btn"));
        hexD_Btn->setGeometry(QRect(11, 366, 51, 28));
        dotBtn = new QPushButton(centralWidget);
        dotBtn->setObjectName(QStringLiteral("dotBtn"));
        dotBtn->setGeometry(QRect(183, 446, 50, 28));
        multiplyBtn = new QPushButton(centralWidget);
        multiplyBtn->setObjectName(QStringLiteral("multiplyBtn"));
        multiplyBtn->setGeometry(QRect(240, 326, 50, 28));
        num5Btn = new QPushButton(centralWidget);
        num5Btn->setObjectName(QStringLiteral("num5Btn"));
        num5Btn->setGeometry(QRect(126, 366, 50, 28));
        num7Btn = new QPushButton(centralWidget);
        num7Btn->setObjectName(QStringLiteral("num7Btn"));
        num7Btn->setGeometry(QRect(69, 326, 50, 28));
        negateBtn = new QPushButton(centralWidget);
        negateBtn->setObjectName(QStringLiteral("negateBtn"));
        negateBtn->setGeometry(QRect(69, 446, 50, 28));
        num6Btn = new QPushButton(centralWidget);
        num6Btn->setObjectName(QStringLiteral("num6Btn"));
        num6Btn->setGeometry(QRect(183, 366, 50, 28));
        hexE_Btn = new QPushButton(centralWidget);
        hexE_Btn->setObjectName(QStringLiteral("hexE_Btn"));
        hexE_Btn->setGeometry(QRect(11, 406, 51, 28));
        num1Btn = new QPushButton(centralWidget);
        num1Btn->setObjectName(QStringLiteral("num1Btn"));
        num1Btn->setGeometry(QRect(69, 406, 50, 28));
        divisionBtn = new QPushButton(centralWidget);
        divisionBtn->setObjectName(QStringLiteral("divisionBtn"));
        divisionBtn->setGeometry(QRect(240, 286, 50, 28));
        hexA_Btn = new QPushButton(centralWidget);
        hexA_Btn->setObjectName(QStringLiteral("hexA_Btn"));
        hexA_Btn->setGeometry(QRect(11, 246, 51, 28));
        bracketLeftBtn = new QPushButton(centralWidget);
        bracketLeftBtn->setObjectName(QStringLiteral("bracketLeftBtn"));
        bracketLeftBtn->setGeometry(QRect(69, 286, 50, 28));
        resultBtn = new QPushButton(centralWidget);
        resultBtn->setObjectName(QStringLiteral("resultBtn"));
        resultBtn->setGeometry(QRect(240, 446, 50, 28));
        hexB_Btn = new QPushButton(centralWidget);
        hexB_Btn->setObjectName(QStringLiteral("hexB_Btn"));
        hexB_Btn->setGeometry(QRect(11, 286, 51, 28));
        remainderBtn = new QPushButton(centralWidget);
        remainderBtn->setObjectName(QStringLiteral("remainderBtn"));
        remainderBtn->setGeometry(QRect(183, 286, 50, 28));
        num2Btn = new QPushButton(centralWidget);
        num2Btn->setObjectName(QStringLiteral("num2Btn"));
        num2Btn->setGeometry(QRect(126, 406, 50, 28));
        num3Btn = new QPushButton(centralWidget);
        num3Btn->setObjectName(QStringLiteral("num3Btn"));
        num3Btn->setGeometry(QRect(183, 406, 50, 28));
        deleteBtn = new QPushButton(centralWidget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(240, 246, 50, 28));
        hexC_Btn = new QPushButton(centralWidget);
        hexC_Btn->setObjectName(QStringLiteral("hexC_Btn"));
        hexC_Btn->setGeometry(QRect(11, 326, 51, 28));
        minusBtn = new QPushButton(centralWidget);
        minusBtn->setObjectName(QStringLiteral("minusBtn"));
        minusBtn->setGeometry(QRect(240, 366, 50, 28));
        shiftLeftBtn = new QPushButton(centralWidget);
        shiftLeftBtn->setObjectName(QStringLiteral("shiftLeftBtn"));
        shiftLeftBtn->setGeometry(QRect(69, 246, 50, 28));
        num9Btn = new QPushButton(centralWidget);
        num9Btn->setObjectName(QStringLiteral("num9Btn"));
        num9Btn->setGeometry(QRect(183, 326, 50, 28));
        num0Btn = new QPushButton(centralWidget);
        num0Btn->setObjectName(QStringLiteral("num0Btn"));
        num0Btn->setGeometry(QRect(126, 446, 50, 28));
        bracketRightBtn = new QPushButton(centralWidget);
        bracketRightBtn->setObjectName(QStringLiteral("bracketRightBtn"));
        bracketRightBtn->setGeometry(QRect(126, 286, 50, 28));
        num8Btn = new QPushButton(centralWidget);
        num8Btn->setObjectName(QStringLiteral("num8Btn"));
        num8Btn->setGeometry(QRect(126, 326, 50, 28));
        hexF_Btn = new QPushButton(centralWidget);
        hexF_Btn->setObjectName(QStringLiteral("hexF_Btn"));
        hexF_Btn->setGeometry(QRect(11, 446, 51, 28));
        plusBtn = new QPushButton(centralWidget);
        plusBtn->setObjectName(QStringLiteral("plusBtn"));
        plusBtn->setGeometry(QRect(240, 406, 50, 28));
        shiftRightBtn = new QPushButton(centralWidget);
        shiftRightBtn->setObjectName(QStringLiteral("shiftRightBtn"));
        shiftRightBtn->setGeometry(QRect(126, 246, 50, 28));
        num4Btn = new QPushButton(centralWidget);
        num4Btn->setObjectName(QStringLiteral("num4Btn"));
        num4Btn->setGeometry(QRect(69, 366, 50, 28));
        clearBtn = new QPushButton(centralWidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(183, 246, 50, 28));
        calculatorClass->setCentralWidget(centralWidget);

        retranslateUi(calculatorClass);

        QMetaObject::connectSlotsByName(calculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *calculatorClass)
    {
        calculatorClass->setWindowTitle(QApplication::translate("calculatorClass", "calculator", nullptr));
        HEX->setText(QApplication::translate("calculatorClass", "HEX", nullptr));
        DEC->setText(QApplication::translate("calculatorClass", "DEC", nullptr));
        OCT->setText(QApplication::translate("calculatorClass", "OCT", nullptr));
        BIN->setText(QApplication::translate("calculatorClass", "BIN", nullptr));
        process->setText(QString());
        hexD_Btn->setText(QApplication::translate("calculatorClass", "D", nullptr));
        dotBtn->setText(QApplication::translate("calculatorClass", ".", nullptr));
        multiplyBtn->setText(QApplication::translate("calculatorClass", "X", nullptr));
        num5Btn->setText(QApplication::translate("calculatorClass", "5", nullptr));
        num7Btn->setText(QApplication::translate("calculatorClass", "7", nullptr));
        negateBtn->setText(QApplication::translate("calculatorClass", "+/-", nullptr));
        num6Btn->setText(QApplication::translate("calculatorClass", "6", nullptr));
        hexE_Btn->setText(QApplication::translate("calculatorClass", "E", nullptr));
        num1Btn->setText(QApplication::translate("calculatorClass", "1", nullptr));
        divisionBtn->setText(QApplication::translate("calculatorClass", "\303\267", nullptr));
        hexA_Btn->setText(QApplication::translate("calculatorClass", "A", nullptr));
        bracketLeftBtn->setText(QApplication::translate("calculatorClass", "(", nullptr));
        resultBtn->setText(QApplication::translate("calculatorClass", "=", nullptr));
        hexB_Btn->setText(QApplication::translate("calculatorClass", "B", nullptr));
        remainderBtn->setText(QApplication::translate("calculatorClass", "%", nullptr));
        num2Btn->setText(QApplication::translate("calculatorClass", "2", nullptr));
        num3Btn->setText(QApplication::translate("calculatorClass", "3", nullptr));
        deleteBtn->setText(QApplication::translate("calculatorClass", "\342\206\220", nullptr));
        hexC_Btn->setText(QApplication::translate("calculatorClass", "C", nullptr));
        minusBtn->setText(QApplication::translate("calculatorClass", "-", nullptr));
        shiftLeftBtn->setText(QApplication::translate("calculatorClass", "<<", nullptr));
        num9Btn->setText(QApplication::translate("calculatorClass", "9", nullptr));
        num0Btn->setText(QApplication::translate("calculatorClass", "0", nullptr));
        bracketRightBtn->setText(QApplication::translate("calculatorClass", ")", nullptr));
        num8Btn->setText(QApplication::translate("calculatorClass", "8", nullptr));
        hexF_Btn->setText(QApplication::translate("calculatorClass", "F", nullptr));
        plusBtn->setText(QApplication::translate("calculatorClass", "+", nullptr));
        shiftRightBtn->setText(QApplication::translate("calculatorClass", ">>", nullptr));
        num4Btn->setText(QApplication::translate("calculatorClass", "4", nullptr));
        clearBtn->setText(QApplication::translate("calculatorClass", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatorClass: public Ui_calculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
