#pragma once
#include "Calculator.h"
class Income : public Calculator
{
public:

	Income(double yourMonthlyIncome, double spouseMonthlyIncome);
	Income();
	~Income();

	void setYourMonthlyIncome(double netPayYours);
	void setSpouseMonthlyIncome(double netPaySpouce);

	double getYourMonthlyIncome();
	double getSpouseMonthlyIncome();


private:
	double yourMonthlyIncome;
	double spouseMonthlyIncome;

protected:

};

