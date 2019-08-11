
#include "Income.h"

Income::Income(double yourMonthlyIncome, double spouseMonthlyIncome)
{
	this->yourMonthlyIncome = yourMonthlyIncome;
	this->spouseMonthlyIncome = spouseMonthlyIncome;
	addIncome(yourMonthlyIncome);
	addIncome(spouseMonthlyIncome);
}

Income::Income()
{
	this->yourMonthlyIncome = 0.0;
	this->spouseMonthlyIncome = 0.0;
}

double Income::getTotalIncome() {
	return Calculator::getTotalIncome();
}


Income::~Income()
= default;

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

void Income::display() {
	cout << "Your Monthly Income: " << getYourMonthlyIncome() << endl;
	cout << "Spouse Monthly Income: " << getSpouseMonthlyIncome() << endl;
    Calculator::display();

}

void Income::display(bool displayAll) {
	cout << "Your Monthly Income: " << getYourMonthlyIncome() << endl;
	cout << "Spouse Monthly Income: " << getSpouseMonthlyIncome() << endl;
	Calculator::display(displayAll);
}

