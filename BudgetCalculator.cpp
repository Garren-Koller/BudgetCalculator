// BudgetCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
#include "Expenses.h"
#include "Income.h"

using std::cout;
using std::cin;
using std::endl;
using std::endl;
using std::ofstream;
using std::ostream_iterator;
using std::string;
using std::copy;

void Intro();

int main()
{//Intro();

    double income, spouseIncome, mortgage, mortgage2nd, insurance, propertyTax, homeMaintenance, electricGas, waterSewer, phoneCell, cableInternet,
            carPayment, carPayment2nd, monthlyCarInsurance, gasoline, carMaintenance, parkingTolls, groceriesHouseholdGoods,
            schoolLunches, mealsOut, healthInsurance, prescriptions, lifeInsurance, clothingForFamily, dryCleaningLaundry,
            barberBeautyShop, childCare, childSupportPayments, schoolTuitionSupplies, creditCards, storeCards, medicalDebt,
            studentLoans, taxPayments, miscellaneousDebtPayments, hobbiesSports, tobaccoAlcohol, newspaperMagazines, travelRecreation,
            churchCharitableDonations, petCare, holidaysBirthdays, otherExpenses ;

    cout << "Budget Calculator" << endl;
    cout << "" << endl;
    cout << "Please enter all as monthly costs." << endl;
    cout << "" << endl;

//Income
    cout << "Total Income:" << endl;
    cin >> income;

    cout << "Total of Spouse Income:" << endl;
    cin >> spouseIncome;

    Income x (income, spouseIncome);

//Housing
    cout << "Mortgage:" << endl;
    cin >> mortgage;
    cout << "2nd Mortgage:" << endl;
    cin >> mortgage2nd;
    cout << "Personal Insurance:" << endl;
    cin >> insurance;
    cout << "Property Tax:" << endl;
    cin >> propertyTax;
    cout << "Home Maintenance:" << endl;
    cin >> homeMaintenance;
    cout << "Electric & Gas:" << endl;
    cin >> electricGas;
    cout << "Water & Sewer:" << endl;
    cin >> waterSewer;
    cout << "Cell Phone:" << endl;
    cin >> phoneCell;
    cout << "Cable & Internet:" << endl;
    cin >> cableInternet;

//Transportation
    cout << "Car Payment:" << endl;
    cin >> carPayment;
    cout << "2nd Car Payment:" << endl;
    cin >> carPayment2nd;
    cout << "Car Insurance:" << endl;
    cin >> monthlyCarInsurance;
    cout << "Gasoline:" << endl;
    cin >> gasoline;
    cout << "Car Maintenance:" << endl;
    cin >> carMaintenance;
    cout << "Parking Tolls:" << endl;
    cin >> parkingTolls;

//Food
    cout << "Groceries & House hold Goods:" << endl;
    cin >> groceriesHouseholdGoods;
    cout << "School Lunches:" << endl;
    cin >> schoolLunches;
    cout << "Meals Out:" << endl;
    cin >> mealsOut;

//Health
    cout << "Health Insurance:" << endl;
    cin >> healthInsurance;
    cout << "Prescriptions:" << endl;
    cin >> prescriptions;
    cout << "Life Insurance:" << endl;
    cin >> lifeInsurance;
    cout << "Clothing:" << endl;
    cin >> clothingForFamily;
    cout << "Dry Cleaning Laundry:" << endl;
    cin >> dryCleaningLaundry;
    cout << "Barber Beauty Shop:" << endl;
    cin >> barberBeautyShop;

//Children
    cout << "Child Care:" << endl;
    cin >> childCare;
    cout << "Child Support Payments:" << endl;
    cin >> childSupportPayments;
    cout << "School Tuition & Supplies:" << endl;
    cin >> schoolTuitionSupplies;

//Debt and loans
    cout << "Credit Cards:" << endl;
    cin >> creditCards;
    cout << "Store Cards:" << endl;
    cin >> storeCards;
    cout << "Medical Debt:" << endl;
    cin >> medicalDebt;
    cout << "Student Loans:" << endl;
    cin >> studentLoans;
    cout << "Tax Payments:" << endl;
    cin >>  taxPayments;
    cout << "Miscellaneous Debt Payments:" << endl;
    cin >> miscellaneousDebtPayments;

//Misc.
    cout << "Hobbies Sports:" << endl;
    cin >> hobbiesSports;
    cout << "Tobacco Alcohol:" << endl;
    cin >> tobaccoAlcohol;
    cout << "Newspaper Magazines:" << endl;
    cin >> newspaperMagazines;
    cout << "Travel Recreation:" << endl;
    cin >> travelRecreation;
    cout << "Church Charitable Donations:" << endl;
    cin >> churchCharitableDonations;
    cout << "Pet Care:" << endl;
    cin >> petCare;
    cout << "Holidays Birthdays:" << endl;
    cin >> holidaysBirthdays;
    cout << "Other Expenses:" << endl;
    cin >> otherExpenses;



    Expenses z (mortgage, mortgage2nd, insurance, propertyTax, homeMaintenance, electricGas, waterSewer, phoneCell, cableInternet,
             carPayment, carPayment2nd, monthlyCarInsurance, gasoline, carMaintenance, parkingTolls, groceriesHouseholdGoods,
             schoolLunches, mealsOut, healthInsurance, prescriptions, lifeInsurance, clothingForFamily, dryCleaningLaundry,
             barberBeautyShop, childCare, childSupportPayments, schoolTuitionSupplies, creditCards, storeCards, medicalDebt,
             studentLoans, taxPayments, miscellaneousDebtPayments, hobbiesSports, tobaccoAlcohol, newspaperMagazines, travelRecreation,
             churchCharitableDonations, petCare, holidaysBirthdays, otherExpenses);


    x.display(true);
    z.display(true);



    /*std::vector<std::string> example;
	example.emplace_back("this");
	example.emplace_back("is");
	example.emplace_back("a");
	example.emplace_back("test");


	ofstream file_;
	file_.open("example.txt");

	ofstream output_file("example.txt");
	ostream_iterator<string> output_iterator(output_file, "\n");
	copy(example.begin(), example.end(), output_iterator);

	Income i(1000, 3000);

	i.display(true);
     */
}


void Intro()
{
	/////////////////////////////////////////////////////////////////// Intro

	cout << "-----Budget Calculator-----" << endl;

	cout << "This is a budget calculator" << endl;
	cout << "" << endl;
	cout << "It is used to calculate your income and expenses monthly." << endl;
	cout << "Please use all monthly costs. " << endl;

	//////////////////////////////////////////////////////////////////
	cout << "" << endl;
	cout << "" << endl;
	//////////////////////////////////////////////////////////////////	First Step

	cout << "-----Budget Calculator-----" << endl;
	cout << "" << endl;
	cout << "-Step 1" << endl;
	cout << "1. Net Monthly Pay" << endl;
	cout << "2. Other Monthly Income" << endl;
	cout << "3. Total Monthly Income" << endl;

	//////////////////////////////////////////////////////////////////
	cout << "" << endl;
	//////////////////////////////////////////////////////////////////	Second Step

	cout << "-Step 2" << endl;
	cout << "1. Housing & Utilities" << endl;
	cout << "2. Transportation" << endl;
	cout << "3. Food & Groceries" << endl;
	cout << "4. Health & Beauty" << endl;
	cout << "5. Children" << endl;
	cout << "6. Debt & Loan Payments" << endl;
	cout << "7. Misc. Expenses" << endl;
	cout << "8. Total Monthly Expenses" << endl;

	//////////////////////////////////////////////////////////////////
	cout << "" << endl;
	//////////////////////////////////////////////////////////////////

	cout << "Please select an object by entering a number to start calculating." << endl;

	system("pause");
}

