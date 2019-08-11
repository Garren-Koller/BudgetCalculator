#pragma once
#include "Calculator.h"
class Income : public Calculator
{
public:

	Income(double yourMonthlyIncome, double spouseMonthlyIncome);
	Income();
	~Income();

	double getTotalIncome();
	void setYourMonthlyIncome(double netPayYours);
	void setSpouseMonthlyIncome(double netPaySpouce);

	double getYourMonthlyIncome();
	double getSpouseMonthlyIncome();

	void display();
	void display(bool displayAll);

private:
	double yourMonthlyIncome;
	double spouseMonthlyIncome;

protected:

};

