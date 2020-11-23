#include "calculator.h"

calculator::calculator(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setFixedSize(350, 500);

	setDecMode();

	// Number button click function
	connect(ui.num0Btn, &QPushButton::clicked, this, &calculator::num0_Clicked);
	connect(ui.num1Btn, &QPushButton::clicked, this, &calculator::num1_Clicked);
	connect(ui.num2Btn, &QPushButton::clicked, this, &calculator::num2_Clicked);
	connect(ui.num3Btn, &QPushButton::clicked, this, &calculator::num3_Clicked);
	connect(ui.num4Btn, &QPushButton::clicked, this, &calculator::num4_Clicked);
	connect(ui.num5Btn, &QPushButton::clicked, this, &calculator::num5_Clicked);
	connect(ui.num6Btn, &QPushButton::clicked, this, &calculator::num6_Clicked);
	connect(ui.num7Btn, &QPushButton::clicked, this, &calculator::num7_Clicked);
	connect(ui.num8Btn, &QPushButton::clicked, this, &calculator::num8_Clicked);
	connect(ui.num9Btn, &QPushButton::clicked, this, &calculator::num9_Clicked);
	
	// Calculation function
	connect(ui.clearBtn, &QPushButton::clicked, this, &calculator::clear_Clicked);
	connect(ui.deleteBtn, &QPushButton::clicked, this, &calculator::delete_Clicked);
	connect(ui.resultBtn, &QPushButton::clicked, this, &calculator::result_Clicked);
	connect(ui.plusBtn, &QPushButton::clicked, this, &calculator::plus_Clicked);
	connect(ui.minusBtn, &QPushButton::clicked, this, &calculator::minus_Clicked);
	connect(ui.multiplyBtn, &QPushButton::clicked, this, &calculator::multiply_Clicked);
	connect(ui.divisionBtn, &QPushButton::clicked, this, &calculator::division_Clicked);
	connect(ui.remainderBtn, &QPushButton::clicked, this, &calculator::remainder_Clicked);
	connect(ui.groupStartBtn, &QPushButton::clicked, this, &calculator::groupStart_Clicked);
	connect(ui.groupEndBtn, &QPushButton::clicked, this, &calculator::groupEnd_Clicked);

	// Calculation mode
	connect(ui.hexMode, &QPushButton::clicked, this, &calculator::setHexMode);
	connect(ui.decMode, &QPushButton::clicked, this, &calculator::setDecMode);
	connect(ui.octMode, &QPushButton::clicked, this, &calculator::setOctMode);
	connect(ui.binMode, &QPushButton::clicked, this, &calculator::setBinMode);
}

calculator::~calculator()
{
}

void calculator::setBinMode()
{
	clear_Clicked();
	ui.num0Btn->setEnabled(true);
	ui.num1Btn->setEnabled(true);
	ui.num2Btn->setEnabled(false);
	ui.num3Btn->setEnabled(false);
	ui.num4Btn->setEnabled(false);
	ui.num5Btn->setEnabled(false);
	ui.num6Btn->setEnabled(false);
	ui.num7Btn->setEnabled(false);
	ui.num8Btn->setEnabled(false);
	ui.num9Btn->setEnabled(false);
	ui.hexA_Btn->setEnabled(false);
	ui.hexB_Btn->setEnabled(false);
	ui.hexC_Btn->setEnabled(false);
	ui.hexD_Btn->setEnabled(false);
	ui.hexE_Btn->setEnabled(false);
	ui.hexF_Btn->setEnabled(false);
}

void calculator::setOctMode()
{
	clear_Clicked();
	ui.num0Btn->setEnabled(true);
	ui.num1Btn->setEnabled(true);
	ui.num2Btn->setEnabled(true);
	ui.num3Btn->setEnabled(true);
	ui.num4Btn->setEnabled(true);
	ui.num5Btn->setEnabled(true);
	ui.num6Btn->setEnabled(true);
	ui.num7Btn->setEnabled(true);
	ui.num8Btn->setEnabled(false);
	ui.num9Btn->setEnabled(false);
	ui.hexA_Btn->setEnabled(false);
	ui.hexB_Btn->setEnabled(false);
	ui.hexC_Btn->setEnabled(false);
	ui.hexD_Btn->setEnabled(false);
	ui.hexE_Btn->setEnabled(false);
	ui.hexF_Btn->setEnabled(false);
}

void calculator::setDecMode()
{
	clear_Clicked();
	ui.num0Btn->setEnabled(true);
	ui.num1Btn->setEnabled(true);
	ui.num2Btn->setEnabled(true);
	ui.num3Btn->setEnabled(true);
	ui.num4Btn->setEnabled(true);
	ui.num5Btn->setEnabled(true);
	ui.num6Btn->setEnabled(true);
	ui.num7Btn->setEnabled(true);
	ui.num8Btn->setEnabled(true);
	ui.num9Btn->setEnabled(true);
	ui.hexA_Btn->setEnabled(false);
	ui.hexB_Btn->setEnabled(false);
	ui.hexC_Btn->setEnabled(false);
	ui.hexD_Btn->setEnabled(false);
	ui.hexE_Btn->setEnabled(false);
	ui.hexF_Btn->setEnabled(false);
}

void calculator::setHexMode()
{
	clear_Clicked();
	ui.num0Btn->setEnabled(true);
	ui.num1Btn->setEnabled(true);
	ui.num2Btn->setEnabled(true);
	ui.num3Btn->setEnabled(true);
	ui.num4Btn->setEnabled(true);
	ui.num5Btn->setEnabled(true);
	ui.num6Btn->setEnabled(true);
	ui.num7Btn->setEnabled(true);
	ui.num8Btn->setEnabled(true);
	ui.num9Btn->setEnabled(true);
	ui.hexA_Btn->setEnabled(true);
	ui.hexB_Btn->setEnabled(true);
	ui.hexC_Btn->setEnabled(true);
	ui.hexD_Btn->setEnabled(true);
	ui.hexE_Btn->setEnabled(true);
	ui.hexF_Btn->setEnabled(true);
}

void calculator::num0_Clicked()
{
	int m_result = ui.num0Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num1_Clicked()
{
	int m_result = ui.num1Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num2_Clicked()
{
	int m_result = ui.num2Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num3_Clicked()
{
	int m_result = ui.num3Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num4_Clicked()
{
	int m_result = ui.num4Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num5_Clicked()
{
	int m_result = ui.num5Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num6_Clicked()
{
	int m_result = ui.num6Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num7_Clicked()
{
	int m_result = ui.num7Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num8_Clicked()
{
	int m_result = ui.num8Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::num9_Clicked()
{
	int m_result = ui.num9Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(m_result));
}

void calculator::groupStart_Clicked()
{
	ui.finalResult->setText(ui.finalResult->text() + '(');
}

void calculator::groupEnd_Clicked()
{
	ui.finalResult->setText(ui.finalResult->text() + ')');
}

void calculator::clear_Clicked()
{
	ui.finalResult->setText("");
	ui.process->setText("");
	ui.hexResult->setText("");
	ui.decResult->setText("");
	ui.octResult->setText("");
	ui.binResult->setText("");
}

void calculator::delete_Clicked()
{
}

void calculator::result_Clicked()
{
	switch (m_calculateStatus)
	{
	case 0:
		plus_Calculation();
		break;
	case 1:
		minus_Calculation();
		break;
	case 2:
		multiply_Calculation();
		break;
	case 3:
		division_Calculation();
		break;
	case 4:
		remainder_Calculation();
		break;
	default:
		break;
	}

	m_calculateStatus = -1;
	numberConversion();
}

void calculator::plus_Clicked()
{
	ui.process->setText(ui.finalResult->text() + "+");
	m_leftNumber = ui.finalResult->text().toInt();

	ui.finalResult->setText("");
	m_calculateStatus = 0;
}

void calculator::minus_Clicked()
{
	ui.process->setText(ui.finalResult->text() + "-");
	m_leftNumber = ui.finalResult->text().toInt();

	ui.finalResult->setText("");
	m_calculateStatus = 1;
}

void calculator::multiply_Clicked()
{
	ui.process->setText(ui.finalResult->text() + "*");
	m_leftNumber = ui.finalResult->text().toInt();

	ui.finalResult->setText("");
	m_calculateStatus = 2;
}

void calculator::division_Clicked()
{
	ui.process->setText(ui.finalResult->text() + "/");
	m_leftNumber = ui.finalResult->text().toInt();

	ui.finalResult->setText("");
	m_calculateStatus = 3;
}

void calculator::remainder_Clicked()
{
	ui.process->setText(ui.finalResult->text() + "%");
	m_leftNumber = ui.finalResult->text().toInt();

	ui.finalResult->setText("");
	m_calculateStatus = 4;
}

void calculator::plus_Calculation()
{
	m_result = m_leftNumber + ui.finalResult->text().toInt();

	ui.process->setText(ui.process->text() + ui.finalResult->text());
	ui.finalResult->setText(QString::number(m_result));
}

void calculator::minus_Calculation()
{
	m_result = m_leftNumber - ui.finalResult->text().toInt();

	ui.process->setText(ui.process->text() + ui.finalResult->text());
	ui.finalResult->setText(QString::number(m_result));
}

void calculator::multiply_Calculation()
{
	m_result = m_leftNumber * ui.finalResult->text().toInt();

	ui.process->setText(ui.process->text() + ui.finalResult->text());
	ui.finalResult->setText(QString::number(m_result));
}

void calculator::division_Calculation()
{
	m_result = m_leftNumber / ui.finalResult->text().toInt();

	ui.process->setText(ui.process->text() + ui.finalResult->text());
	ui.finalResult->setText(QString::number(m_result));
}

void calculator::remainder_Calculation()
{
	m_result = m_leftNumber % ui.finalResult->text().toInt();

	ui.process->setText(ui.process->text() + ui.finalResult->text());
	ui.finalResult->setText(QString::number(m_result));
}

void calculator::numberConversion()
{
	decToBin();
	decToOct();
	decToDec();
	decToHex();
}

void calculator::decToBin()
{
	QString bin;
	bin = QString("%1").arg(ui.finalResult->text().toInt(), 0, 2);

	ui.binResult->setText(bin);
}

void calculator::decToOct()
{
	QString oct;
	oct = QString("%1").arg(ui.finalResult->text().toInt(), 0, 8);

	ui.octResult->setText(oct);
}

void calculator::decToDec()
{
	QString dec;
	dec = QString("%1").arg(ui.finalResult->text().toInt(), 0, 10);

	ui.decResult->setText(dec);
}


void calculator::decToHex()
{
	QString hex;
	hex = QString("%1").arg(ui.finalResult->text().toInt(), 0, 16);

	ui.hexResult->setText(hex);
}