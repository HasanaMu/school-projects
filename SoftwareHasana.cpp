/*Programmer: Hasana Muhammad
Date: 10/16/18
Purpose: HW #6
Description: This program calculates total cost of purchase based on number of units bought and quanitity discounts.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants and Variables
	const int BASIC_CHARGE = 199;
	const double LESS20CHECKS = 0.80;
	const double LESS50CHECKS = 0.70;
	const double LESS100CHECKS = 0.60;
	const double MORECHECKS = 0.50;

	int units;
	double total;

	//Get user input
	cout << "Please enter the number of units purchased (Must enter a number >= 0): ";
	cin >> units;

	//Validate user input
	if (units < 0)
	{
		cout << "Illegal value entered. Must enter a number >= 0." << endl;
		cin >> units;
	}
	if (units < 20)
		total = (BASIC_CHARGE * units) * LESS20CHECKS;
	else
		if (units < 50)
			total = (BASIC_CHARGE * units) * LESS50CHECKS;
		else
			if (units < 100)
				total = (BASIC_CHARGE * units) * LESS100CHECKS;
			else
				total = (BASIC_CHARGE * units) * MORECHECKS;

	//Display results
	cout << showpoint << fixed << setprecision(2);
	cout << "\nTotal number of units purchased = " << units
		<< "\nTotal cost of purchase = $" << total << endl;
	return 0;
}
