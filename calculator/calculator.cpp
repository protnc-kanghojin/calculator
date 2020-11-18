#include "calculator.h"

calculator::calculator(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setFixedSize(300, 500);

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
	
	// Number option function
	connect(ui.clearBtn, &QPushButton::clicked, this, &calculator::clear_Clicked);
}

calculator::~calculator()
{
}

void calculator::num0_Clicked()
{
	int result = ui.num0Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num1_Clicked()
{
	int result = ui.num1Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num2_Clicked()
{
	int result = ui.num2Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num3_Clicked()
{
	int result = ui.num3Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num4_Clicked()
{
	int result = ui.num4Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num5_Clicked()
{
	int result = ui.num5Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num6_Clicked()
{
	int result = ui.num6Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num7_Clicked()
{
	int result = ui.num7Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num8_Clicked()
{
	int result = ui.num8Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::num9_Clicked()
{
	int result = ui.num9Btn->text().toInt();

	ui.finalResult->setText(ui.finalResult->text() + QString::number(result));
}

void calculator::clear_Clicked()
{
	ui.finalResult->setText("");
}