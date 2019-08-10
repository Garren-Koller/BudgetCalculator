
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
	this->yourMonthlyIncome = netPayYours;
}

void Income::setSpouseMonthlyIncome(double netPaySpouce)
{
	this->spouseMonthlyIncome = netPaySpouce;
}

double Income::getYourMonthlyIncome()
{
	return yourMonthlyIncome;
}

double Income::getSpouseMonthlyIncome()
{
	return spouseMonthlyIncome;
}
