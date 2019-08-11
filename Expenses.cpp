#include "Expenses.h"

Expenses::Expenses() {
    this -> mortgage = 0.0;
    this-> mortgage2nd = 0.0;
    this-> insurance = 0.0;
    this-> propertyTax = 0.0;
    this-> homeMaintenance = 0.0;
    this-> electricGas = 0.0;
    this-> waterSewer = 0.0;
    this-> phoneCell = 0.0;
    this-> cableInternet = 0.0;
    this-> carPayment = 0.0;
    this-> carPayment2nd = 0.0;
    this-> monthlyCarInsurance = 0.0;
    this-> gasoline = 0.0;
    this-> carMaintenance = 0.0;
    this-> parkingTolls = 0.0;
    this-> groceriesHouseholdGoods = 0.0;
    this-> schoolLunches = 0.0;
    this-> mealsOut = 0.0;
    this-> healthInsurance = 0.0;
    this-> prescriptions = 0.0;
    this-> lifeInsurance = 0.0;
    this-> clothingForFamily = 0.0;
    this-> dryCleaningLaundry = 0.0;
    this-> barberBeautyShop = 0.0;
    this-> childCare = 0.0;
    this-> childSupportPayments = 0.0;
    this-> schoolTuitionSupplies = 0.0;
    this-> creditCards = 0.0;
    this-> storeCards = 0.0;
    this-> medicalDebt = 0.0;
    this-> studentLoans = 0.0;
    this-> taxPayments = 0.0;
    this-> miscellaneousDebtPayments = 0.0;
    this-> hobbiesSports = 0.0;
    this-> tobaccoAlcohol = 0.0;
    this-> newspaperMagazines = 0.0;
    this-> travelRecreation = 0.0;
    this-> churchCharitableDonations = 0.0;
    this-> petCare = 0.0;
    this-> holidaysBirthdays = 0.0;
    this-> otherExpenses = 0.0;
}

Expenses::Expenses(
        double mortgage, double mortgage2nd, double insurance, double propertyTax, double homeMaintenance,
        double electricGas, double waterSewer, double phoneCell, double cableInternet, double carPayment,
        double carPayment2nd, double monthlyCarInsurance, double gasoline, double carMaintenance,
        double parkingTolls, double groceriesHouseholdGoods, double schoolLunches, double mealsOut,
        double healthInsurance, double prescriptions, double lifeInsurance, double clothingForFamily,
        double dryCleaningLaundry, double barberBeautyShop, double childCare, double childSupportPayments,
        double schoolTuitionSupplies, double creditCards, double storeCards, double medicalDebt,
        double studentLoans, double taxPayments, double miscellaneousDebtPayments, double hobbiesSports,
        double tobaccoAlcohol, double newspaperMagazines, double travelRecreation,
        double churchCharitableDonations, double petCare, double holidaysBirthdays, double otherExpenses)

{

    this-> mortgage = mortgage;
    this-> mortgage2nd = mortgage2nd;
    this-> insurance = insurance;
    this-> propertyTax = propertyTax;
    this-> homeMaintenance = homeMaintenance;
    this-> electricGas = electricGas;
    this-> waterSewer = waterSewer;
    this-> phoneCell = phoneCell;
    this-> cableInternet = cableInternet;
    this-> carPayment = carPayment;
    this-> carPayment2nd = carPayment2nd;
    this-> monthlyCarInsurance = monthlyCarInsurance;
    this-> gasoline = gasoline;
    this-> carMaintenance = carMaintenance;
    this-> parkingTolls = parkingTolls;
    this-> groceriesHouseholdGoods = groceriesHouseholdGoods;
    this-> schoolLunches = schoolLunches;
    this-> mealsOut = mealsOut;
    this-> healthInsurance = healthInsurance;
    this-> prescriptions = prescriptions;
    this-> lifeInsurance = lifeInsurance;
    this-> clothingForFamily = clothingForFamily;
    this-> dryCleaningLaundry = dryCleaningLaundry;
    this-> barberBeautyShop = barberBeautyShop;
    this-> childCare = childCare;
    this-> childSupportPayments = childSupportPayments;
    this-> schoolTuitionSupplies = schoolTuitionSupplies;
    this-> creditCards = creditCards;
    this-> storeCards = storeCards;
    this-> medicalDebt = medicalDebt;
    this-> studentLoans = studentLoans;
    this-> taxPayments = taxPayments;
    this-> miscellaneousDebtPayments = miscellaneousDebtPayments;
    this-> hobbiesSports = hobbiesSports;
    this-> tobaccoAlcohol = tobaccoAlcohol;
    this-> newspaperMagazines = newspaperMagazines;
    this-> travelRecreation = travelRecreation;
    this-> churchCharitableDonations = churchCharitableDonations;
    this-> petCare = petCare;
    this-> holidaysBirthdays = holidaysBirthdays;
    this-> otherExpenses = otherExpenses;

    addExpences(mortgage);
    addExpences(mortgage2nd);
    addExpences(insurance);
    addExpences(propertyTax);
    addExpences(homeMaintenance);
    addExpences(electricGas);
    addExpences(waterSewer);
    addExpences(phoneCell);
    addExpences(cableInternet);
    addExpences(carPayment);
    addExpences(carPayment2nd);
    addExpences(monthlyCarInsurance);
    addExpences(gasoline);
    addExpences(carMaintenance);
    addExpences(parkingTolls);
    addExpences(groceriesHouseholdGoods);
    addExpences(schoolLunches);
    addExpences(mealsOut);
    addExpences(healthInsurance);
    addExpences(prescriptions);
    addExpences(lifeInsurance);
    addExpences(clothingForFamily);
    addExpences(dryCleaningLaundry);
    addExpences(barberBeautyShop);
    addExpences(childCare);
    addExpences(childSupportPayments);
    addExpences(schoolTuitionSupplies);
    addExpences(creditCards);
    addExpences(storeCards);
    addExpences(medicalDebt);
    addExpences(studentLoans);
    addExpences(taxPayments);
    addExpences(miscellaneousDebtPayments);
    addExpences(hobbiesSports);
    addExpences(tobaccoAlcohol);
    addExpences(newspaperMagazines);
    addExpences(travelRecreation);
    addExpences(churchCharitableDonations);
    addExpences(petCare);
    addExpences(holidaysBirthdays);
    addExpences(otherExpenses);
}


Expenses::~Expenses() = default;

void Expenses::setMortgage(double mortgage) {
 this->mortgage = mortgage;
}

double Expenses::getMortgage() {
    return mortgage;
}

void Expenses::setMortgage2nd(double mortgage2nd) {
    this->mortgage2nd = mortgage2nd;
}

void Expenses::setInsurance(double insurance) {
    this->insurance = insurance;
}

void Expenses::setPropertyTax(double propertyTax) {
    this->propertyTax = propertyTax;
}

void Expenses::setHomeMaintenance(double homeMaintenance) {
    this->homeMaintenance = homeMaintenance;
}

void Expenses::setElectricGas(double electricGas) {
    this->electricGas = electricGas;
}

void Expenses::setWaterSewer(double waterSewer) {
    this->waterSewer = waterSewer;
}

void Expenses::setPhoneCell(double phoneCell) {
    this->phoneCell = phoneCell;
}

void Expenses::setCableInternet(double cableInternet) {
    this->cableInternet = cableInternet;
}

void Expenses::setCarPayment(double carPayment) {
    this->carPayment = carPayment;
}

void Expenses::setCarPayment2nd(double carPayment2nd) {
    this->carPayment2nd = carPayment2nd;
}

void Expenses::setMonthlyCarInsurance(double monthlyCarInsurance) {
    this->monthlyCarInsurance = monthlyCarInsurance;
}

void Expenses::setGasoline(double gasoline) {
    this->gasoline = gasoline;
}

void Expenses::setCarMaintenance(double carMaintenance) {
    this->carMaintenance = carMaintenance;
}

void Expenses::setParkingTolls(double parkingTolls) {
    this->parkingTolls = parkingTolls;
}

void Expenses::setGroceriesHouseholdGoods(double groceriesHouseholdGoods) {
    this->groceriesHouseholdGoods = groceriesHouseholdGoods;
}

void Expenses::setSchoolLunches(double schoolLunches) {
    this->schoolLunches = schoolLunches;
}

void Expenses::setMealsOut(double mealsOut) {
    this->mealsOut = mealsOut;
}

void Expenses::setHealthInsurance(double healthInsurance) {
    this->healthInsurance = healthInsurance;
}

void Expenses::setPrescriptions(double prescriptions) {
    this->prescriptions = prescriptions;
}

void Expenses::setLifeInsurance(double lifeInsurance) {
    this->lifeInsurance = lifeInsurance;
}

void Expenses::setClothingForFamily(double clothingForFamily) {
    this->clothingForFamily = clothingForFamily;
}

void Expenses::setDryCleaningLaundry(double dryCleaningLaundry) {
    this->dryCleaningLaundry = dryCleaningLaundry;
}

void Expenses::setBarberBeautyShop(double barberBeautyShop) {
    this->barberBeautyShop = barberBeautyShop;
}

void Expenses::setChildCare(double childCare) {
    this->childCare = childCare;
}

void Expenses::getChildSupportPayments(double childSupportPayments) {
    this->childSupportPayments = childSupportPayments;
}

void Expenses::getSchoolTuitionSupplies(double schoolTuitionSupplies) {
    this->schoolTuitionSupplies = schoolTuitionSupplies;
}

void Expenses::getCreditCards(double creditCards) {
    this->creditCards = creditCards;
}

void Expenses::getStoreCards(double storeCards) {
    this->storeCards = storeCards;
}

void Expenses::getMedicalDebt(double medicalDebt) {
    this->medicalDebt = medicalDebt;
}

void Expenses::getStudentLoans(double studentLoans) {
    this->studentLoans = studentLoans;
}

void Expenses::getTaxPayments(double taxPayments) {
    this->taxPayments = taxPayments;
}

void Expenses::getMiscellaneousDebtPayments(double miscellaneousDebtPayments) {
    this->miscellaneousDebtPayments = miscellaneousDebtPayments;
}

void Expenses::getHobbiesSports(double hobbiesSports) {
    this->hobbiesSports = hobbiesSports;
}

void Expenses::getTobaccoAlcohol(double tobaccoAlcohol) {
    this->tobaccoAlcohol = tobaccoAlcohol;
}

void Expenses::getNewspaperMagazines(double newspaperMagazines) {
    this->newspaperMagazines = newspaperMagazines;
}

void Expenses::getTravelRecreation(double travelRecreation) {
    this->travelRecreation = travelRecreation;
}

void Expenses::getChurchCharitableDonations(double churchCharitableDonations) {
    this->churchCharitableDonations = churchCharitableDonations;
}

void Expenses::getPetCare(double petCare) {
    this->petCare = petCare;
}

void Expenses::getHolidaysBirthdays(double holidaysBirthdays) {
    this->holidaysBirthdays = holidaysBirthdays;
}

void Expenses::getOtherExpenses(double otherExpenses) {
    this->otherExpenses = otherExpenses;
}

double Expenses::getMortgage2nd() {
    return mortgage2nd;
}

double Expenses::getInsurance() {
    return insurance;
}

double Expenses::getPropertyTax() {
    return propertyTax;
}

double Expenses::getHomeMaintenance() {
    return homeMaintenance;
}

double Expenses::getElectricGas() {
    return electricGas;
}

double Expenses::getWaterSewer() {
    return waterSewer;
}

double Expenses::getPhoneCell() {
    return phoneCell;
}

double Expenses::getCableInternet() {
    return cableInternet;
}

double Expenses::getCarPayment() {
    return carPayment;
}

double Expenses::getCarPayment2nd() {
    return carPayment2nd;
}

double Expenses::getMonthlyCarInsurance() {
    return monthlyCarInsurance;
}

double Expenses::getGasoline() {
    return gasoline;
}

double Expenses::getCarMaintenance() {
    return carMaintenance;
}

double Expenses::getParkingTolls() {
    return parkingTolls;
}

double Expenses::getGroceriesHouseholdGoods() {
    return groceriesHouseholdGoods;
}

double Expenses::getSchoolLunches() {
    return schoolLunches;
}

double Expenses::getMealsOut() {
    return mealsOut;
}

double Expenses::getHealthInsurance() {
    return healthInsurance;
}

double Expenses::getPrescriptions() {
    return prescriptions;
}

double Expenses::getLifeInsurance() {
    return lifeInsurance;
}

double Expenses::getClothingForFamily() {
    return clothingForFamily;
}

double Expenses::getDryCleaningLaundry() {
    return dryCleaningLaundry;
}

double Expenses::getBarberBeautyShop() {
    return barberBeautyShop;
}

double Expenses::getChildCare() {
    return childCare;
}

double Expenses::getChildSupportPayments() {
    return childSupportPayments;
}

double Expenses::getSchoolTuitionSupplies() {
    return schoolTuitionSupplies;
}

double Expenses::getCreditCards() {
    return creditCards;
}

double Expenses::getStoreCards() {
    return storeCards;
}

double Expenses::getMedicalDebt() {
    return medicalDebt;
}

double Expenses::getStudentLoans() {
    return studentLoans;
}

double Expenses::getTaxPayments() {
    return taxPayments;
}

double Expenses::getMiscellaneousDebtPayments() {
    return miscellaneousDebtPayments;
}

double Expenses::getHobbiesSports() {
    return hobbiesSports;
}

double Expenses::getTobaccoAlcohol() {
    return tobaccoAlcohol;
}

double Expenses::getNewspaperMagazines() {
    return newspaperMagazines;
}

double Expenses::getTravelRecreation() {
    return travelRecreation;
}

double Expenses::getChurchCharitableDonations() {
    return churchCharitableDonations;
}

double Expenses::getPetCare() {
    return petCare;
}

double Expenses::getHolidaysBirthdays() {
    return holidaysBirthdays;
}

double Expenses::getOtherExpenses() {
    return otherExpenses;
}

void Expenses::display() {
    cout << "Mortgage: " << getMortgage() << endl;
    cout << "2nd Mortgage: " << getMortgage2nd() << endl;
    cout << "Insurance: " << getInsurance() << endl;
    cout << "Property Taxes: " << getPropertyTax() << endl;
    cout << "Home Maintenance: " << getHomeMaintenance() << endl;
    cout << "Electric / Gas: " << getElectricGas() << endl;
    cout << "Water / Sewer: " << getWaterSewer() << endl;
    cout << "Cell Phone: " << getPhoneCell() << endl;
    cout << "Cable Internet: " << getCableInternet() << endl;
    cout << "Car Payment: " << getCarPayment() << endl;
    cout << "Car Payment 2nd: " << getCarPayment2nd() << endl;
    cout << "Monthly Car insurance: " << getMonthlyCarInsurance() << endl;
    cout << "Gasoline: " << getGasoline() << endl;
    cout << "Car Maintenance: " << getCarMaintenance() << endl;
    cout << "Parking Tolls: " << getParkingTolls() << endl;
    cout << "Groceries / Household Goods" << getGroceriesHouseholdGoods() << endl;
    cout << "School Lunches: " << getSchoolLunches() << endl;
    cout << "Meals Out: " << getMealsOut() << endl;
    cout << "Health Insurance: " << getHealthInsurance() << endl;
    cout << "Prescriptions: " << getPrescriptions() << endl;
    cout << "Life Insurance: " << getLifeInsurance() << endl;
    cout << "Clothing For Family: " << getClothingForFamily() << endl;
    cout << "Dry Cleaning Laundry: " << getDryCleaningLaundry() << endl;
    cout << "Barber / Beauty Shop: " << getBarberBeautyShop() << endl;
    cout << "Child Care: " << getChildCare() << endl;
    cout << "Child Support Payments: " << getChildSupportPayments() << endl;
    cout << "School Tuition Supplies: " << getSchoolTuitionSupplies() << endl;
    cout << "Credit Cards: " << getCreditCards() << endl;
    cout << "Store Cards: " << getStoreCards() << endl;
    cout << "Medical Debt: " << getMedicalDebt() << endl;
    cout << "Student Loans: " << getMedicalDebt() << endl;
    cout << "Tax Payments: " << getTaxPayments() << endl;
    cout << "Miscellaneous Debt Payments: " << getMiscellaneousDebtPayments() << endl;
    cout << "Hobbies Sports: " << getHobbiesSports() << endl;
    cout << "Tabacco / Alcohol: " << getTobaccoAlcohol() << endl;
    cout << "Newspaper Magazines" << getNewspaperMagazines() << endl;
    cout << "Travel Recreation: " << getTravelRecreation() << endl;
    cout << "Church Charitable Donations: " << getChurchCharitableDonations() << endl;
    cout << "Pet Care: " << getPetCare() << endl;
    cout << "Holidays Birthdays: " << getHolidaysBirthdays() << endl;
    cout << "Other Expenses: " << getOtherExpenses() << endl;

    Calculator::display();
}

void Expenses::display(bool displayAll) {
    cout << "Mortgage: " << getMortgage() << endl;
    cout << "2nd Mortgage: " << getMortgage2nd() << endl;
    cout << "Insurance: " << getInsurance() << endl;
    cout << "Property Taxes: " << getPropertyTax() << endl;
    cout << "Home Maintenance: " << getHomeMaintenance() << endl;
    cout << "Electric / Gas: " << getElectricGas() << endl;
    cout << "Water / Sewer: " << getWaterSewer() << endl;
    cout << "Cell Phone: " << getPhoneCell() << endl;
    cout << "Cable Internet: " << getCableInternet() << endl;
    cout << "Car Payment: " << getCarPayment() << endl;
    cout << "Car Payment 2nd: " << getCarPayment2nd() << endl;
    cout << "Monthly Car insurance: " << getMonthlyCarInsurance() << endl;
    cout << "Gasoline: " << getGasoline() << endl;
    cout << "Car Maintenance: " << getCarMaintenance() << endl;
    cout << "Parking Tolls: " << getParkingTolls() << endl;
    cout << "Groceries / Household Goods" << getGroceriesHouseholdGoods() << endl;
    cout << "School Lunches: " << getSchoolLunches() << endl;
    cout << "Meals Out: " << getMealsOut() << endl;
    cout << "Health Insurance: " << getHealthInsurance() << endl;
    cout << "Prescriptions: " << getPrescriptions() << endl;
    cout << "Life Insurance: " << getLifeInsurance() << endl;
    cout << "Clothing For Family: " << getClothingForFamily() << endl;
    cout << "Dry Cleaning Laundry: " << getDryCleaningLaundry() << endl;
    cout << "Barber / Beauty Shop: " << getBarberBeautyShop() << endl;
    cout << "Child Care: " << getChildCare() << endl;
    cout << "Child Support Payments: " << getChildSupportPayments() << endl;
    cout << "School Tuition Supplies: " << getSchoolTuitionSupplies() << endl;
    cout << "Credit Cards: " << getCreditCards() << endl;
    cout << "Store Cards: " << getStoreCards() << endl;
    cout << "Medical Debt: " << getMedicalDebt() << endl;
    cout << "Student Loans: " << getMedicalDebt() << endl;
    cout << "Tax Payments: " << getTaxPayments() << endl;
    cout << "Miscellaneous Debt Payments: " << getMiscellaneousDebtPayments() << endl;
    cout << "Hobbies Sports: " << getHobbiesSports() << endl;
    cout << "Tabacco / Alcohol: " << getTobaccoAlcohol() << endl;
    cout << "Newspaper Magazines" << getNewspaperMagazines() << endl;
    cout << "Travel Recreation: " << getTravelRecreation() << endl;
    cout << "Church Charitable Donations: " << getChurchCharitableDonations() << endl;
    cout << "Pet Care: " << getPetCare() << endl;
    cout << "Holidays Birthdays: " << getHolidaysBirthdays() << endl;
    cout << "Other Expenses: " << getOtherExpenses() << endl;
    Calculator::display(displayAll);
}

