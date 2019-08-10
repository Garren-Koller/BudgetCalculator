#pragma once
#include "iostream"

using std::cout;
using std::endl;

class Calculator
{

public:
	Calculator();
	Calculator(double totalExpences,double totalIncome, double moneyLeft);
	~Calculator();

	void addExpences(double currentExpence);
	void addIncome(double currentIncome);
    double getTotalExpence();
    double getTotalIncome();

	void display();
	void display(bool displayAll);

	void displayExpencesTotal();
	void displayIncomeTotal();

    double getMoneyLeft();
private:

	double totalExpences;
	double totalIncome;
	double moneyLeft;

protected:


};

