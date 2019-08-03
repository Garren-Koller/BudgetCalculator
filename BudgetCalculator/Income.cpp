#include "pch.h"
#include "Income.h"

Income::Income(double yourMonthlyIncome, double spouseMonthlyIncome)
{
	this->yourMonthlyIncome = yourMonthlyIncome;
	this->spouseMonthlyIncome = spouseMonthlyIncome;
}

Income::Income()
{
	this->yourMonthlyIncome = 0.0;
	this->spouseMonthlyIncome = 0.0;
}

Income::~Income()
{
}

void Income::setYourMonthlyIncome(double netPayYours)
{
}

void Income::setSpouseMonthlyIncome(double netPaySpouce)
{
}

double Income::getYourMonthlyIncome()
{
	return 0.0;
}

double Income::getSpouseMonthlyIncome()
{
	return 0.0;
}
