#pragma once
#include "Calculator.h"
class Expenses : public Calculator
{

public:
	Expenses();
	~Expenses();

private:
	// Housing
	double mortgage;
	double mortgage2nd;
	double insurance;
	double propertyTax;
	double homeMaintenance;		
	double electricGas;
	double waterSewer;
	double phoneCell;
	double cableInternet;

	//Transportation
	double carPayment;
	double carPayment2nd;
	double monthlyCarInsurance;
	double gasoline;
	double carMaintenance;
	double parkingTolls;

	//Food
	double groceriesHouseholdGoods;
	double schoolLunches;
	double mealsOut;

	//Health 
	double healthInsurance;
	double prescriptions;
	double lifeInsurance;
	double clothingForFamily;
	double dryCleaningLaundry;
	double barberBeautyShop;

	//Children
	double childCare;
	double childSupportPayments;
	double schoolTuitionSupplies;

	//Debt and loans
	double creditCards;
	double storeCards;
	double medicalDebt;
	double studentLoans;
	double taxPayments;
	double miscellaneousDebtPayments;

	//Misc. 
	double hobbiesSports;
	double tobaccoAlcohol;
	double newspaperMagazines;
	double travelRecreation;
	double churchCharitableDonations;
	double petCare;
	double holidaysBirthdays;
	double otherExpenses;

protected:


};

