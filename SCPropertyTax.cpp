/*Programmer: Hasana Muhammad
  Date: 9/7/2018
  Purpose: Problem #18, P. 151 Senior Citizen Property Tax 
  Description: This project displays the property taxes and quarterly payments a senior would pay.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
	{
		//Variables and constants
		const double SENIOREXEMPT = 5000;
		double taxRate;
		double actualvalue, assessedvalue, seniorValue, propertyTax, quarterlyPayment;

		//Get user input
		cout << "Please input the actual value of the property: $";
		cin >> actualvalue;
		cout << "Please input the current tax rate for each $100 of assessed value: $";
		cin >> taxRate;

		//Start calculations
		assessedvalue = actualvalue * 0.60;
		seniorValue = assessedvalue - 5000;
		propertyTax = seniorValue / 100 * taxRate;
		quarterlyPayment = propertyTax / 4;

		//Display Results
		cout << "\nAnnual property tax a senior homeowner will be charged for the property: $" << propertyTax << endl;
		cout << "The quarterly tax bill will be: $" << quarterlyPayment << endl;
		return 0;
}