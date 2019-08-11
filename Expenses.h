#pragma once
#include "Calculator.h"
class Expenses : public Calculator
{

public:
	Expenses();
	~Expenses();
    Expenses(double mortgage, double mortgage2nd, double insurance, double propertyTax,
            double homeMaintenance, double electricGas, double waterSewer, double phoneCell,
            double cableInternet, double carPayment, double carPayment2nd, double monthlyCarInsurance,
            double gasoline, double carMaintenance, double parkingTolls, double groceriesHouseholdGoods,
            double schoolLunches, double mealsOut, double healthInsurance, double prescriptions,
             double lifeInsurance, double clothingForFamily, double dryCleaningLaundry, double barberBeautyShop,
             double childCare, double childSupportPayments, double schoolTuitionSupplies, double creditCards,
             double storeCards, double medicalDebt, double studentLoans, double taxPayments, double miscellaneousDebtPayments,
             double hobbiesSports, double tobaccoAlcohol, double newspaperMagazines, double travelRecreation,
             double churchCharitableDonations, double petCare, double holidaysBirthdays, double otherExpenses);

	double getTotalExpenses();
    // Housing
	void setMortgage(double mortgage);
    void setMortgage2nd(double mortgage2nd);
    void setInsurance(double insurance);
    void setPropertyTax(double propertyTax);
    void setHomeMaintenance(double homeMaintenance);
    void setElectricGas(double electricGas);
    void setWaterSewer(double waterSewer);
    void setPhoneCell(double phoneCell);
    void setCableInternet(double cableInternet);

    //Transportation
    void setCarPayment(double carPayment);
    void setCarPayment2nd(double carPayment2nd);
    void setMonthlyCarInsurance(double monthlyCarInsurance);
    void setGasoline(double gasoline);
    void setCarMaintenance(double carMaintenance);
    void setParkingTolls(double parkingTolls);

    //Food
    void setGroceriesHouseholdGoods(double groceriesHouseholdGoods);
    void setSchoolLunches(double schoolLunches);
    void setMealsOut(double mealsOut);

    //Health
    void setHealthInsurance(double healthInsurance);
    void setPrescriptions(double prescriptions);
    void setLifeInsurance(double lifeInsurance);
    void setClothingForFamily(double clothingForFamily);
    void setDryCleaningLaundry(double dryCleaningLaundry);
    void setBarberBeautyShop(double barberBeautyShop);

    //Children
    void setChildCare(double childCare);
    void getChildSupportPayments(double childSupportPayments);
    void getSchoolTuitionSupplies(double schoolTuitionSupplies);

    //Debt and loans
    void getCreditCards(double creditCards);
    void getStoreCards(double storeCards);
    void getMedicalDebt(double medicalDebt);
    void getStudentLoans(double studentLoans);
    void getTaxPayments(double taxPayments);
    void getMiscellaneousDebtPayments(double miscellaneousDebtPayments);

    //Misc.
    void getHobbiesSports(double hobbiesSports);
    void getTobaccoAlcohol(double tobaccoAlcohol);
    void getNewspaperMagazines(double newspaperMagazines);
    void getTravelRecreation(double travelRecreation);
    void getChurchCharitableDonations(double churchCharitableDonations);
    void getPetCare(double petCare);
    void getHolidaysBirthdays(double holidaysBirthdays);
    void getOtherExpenses(double otherExpenses);

////////////////////////////////////////////////////////////////////////////////
    // Housing
	double getMortgage();
    double getMortgage2nd();
    double getInsurance();
    double getPropertyTax();
    double getHomeMaintenance();
    double getElectricGas();
    double getWaterSewer();
    double getPhoneCell();
    double getCableInternet();

    //Transportation
    double getCarPayment();
    double getCarPayment2nd();
    double getMonthlyCarInsurance();
    double getGasoline();
    double getCarMaintenance();
    double getParkingTolls();

    //Food
    double getGroceriesHouseholdGoods();
    double getSchoolLunches();
    double getMealsOut();

    //Health
    double getHealthInsurance();
    double getPrescriptions();
    double getLifeInsurance();
    double getClothingForFamily();
    double getDryCleaningLaundry();
    double getBarberBeautyShop();

    //Children
    double getChildCare();
    double getChildSupportPayments();
    double getSchoolTuitionSupplies();

    //Debt and loans
    double getCreditCards();
    double getStoreCards();
    double getMedicalDebt();
    double getStudentLoans();
    double getTaxPayments();
    double getMiscellaneousDebtPayments();

    //Misc.
    double getHobbiesSports();
    double getTobaccoAlcohol();
    double getNewspaperMagazines();
    double getTravelRecreation();
    double getChurchCharitableDonations();
    double getPetCare();
    double getHolidaysBirthdays();
    double getOtherExpenses();

	void display();
	void display(bool displayAll);

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

