
#include "Calculator.h"

Calculator::Calculator() {
    totalExpences = 0.0;
    totalIncome = 0.0;
    moneyLeft = 0.0;
}

Calculator::Calculator(double totalExpences, double totalIncome, double moneyLeft) {
    this-> totalExpences = totalExpences;
    this-> totalIncome = totalIncome;
    this-> moneyLeft = moneyLeft;
}

Calculator::~Calculator() = default;

void Calculator::addExpences(double currentExpence) {

    totalExpences += currentExpence;

}


void Calculator::addIncome(double currentIncome) {
    totalIncome += currentIncome;
}

void Calculator::display() {
    cout << "Total Expenses: " << totalExpences << endl;
    cout << "Total Income: " << totalIncome << endl;
}

void Calculator::display(bool displayMonetLeft) {
    display();

    if(displayMonetLeft){


        cout << "Money Remaining: " << getMoneyLeft() << endl;
    }
}

void Calculator::displayExpencesTotal() {
    cout << "Total Expenses: " << totalExpences << endl;
}

void Calculator::displayIncomeTotal() {
    cout << "Total Income: " << totalIncome << endl;
}

double Calculator::getTotalExpence() {
    return totalExpences;
}

double Calculator::getTotalIncome() {
    return totalIncome;
}

double Calculator::getMoneyLeft() {
    moneyLeft = totalIncome - totalExpences;
    return moneyLeft;
}



