// BudgetCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using std::cout;
using std::endl;
using std::endl;
using std::ofstream;
using std::ostream_iterator;
using std::string;
using std::copy;
void Intro();

int main()
{//Intro();
cout << "test";
	std::vector<std::string> example;
	example.emplace_back("this");
	example.emplace_back("is");
	example.emplace_back("a");
	example.emplace_back("test");


	ofstream file_;
	file_.open("example.txt");

	ofstream output_file("example.txt");
	ostream_iterator<string> output_iterator(output_file, "\n");
	copy(example.begin(), example.end(), output_iterator);
	
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

