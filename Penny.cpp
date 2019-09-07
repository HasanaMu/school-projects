/* Programmer: Hasana Muhammad
Date: 11/16/18
Purpose: HW #9
Description: This program takes in the number of days a person is working and calculates how much they will make when they make a penny the first day and it doubles every day after. */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables and constants
	const double FIRST_DAY = 0.01;
	const double DAILY_INCREASE = 2;
	double pay, totalpay;
	int days, worked;

	//Get user input
	cout << "Please enter number of days you want worked this month: " << endl;
	cin >> days;

	while (days < 1 || days > 31)
	{
		cout << "Illegal value. Please enter a number >=1 or <=31." << endl;
		cin >> days;
	}

	//Display Headers
	totalpay = 0.0;
	cout << "\tDay\t\t  Fee\n";
	cout << "---------------------------------\n";
	pay = FIRST_DAY;
	worked = 1;
	cout << fixed << showpoint << setprecision(2);
	while (worked <= days)
	{
		cout << "\t  " << worked << "\t\t$" << pay << endl;
		totalpay = pay + totalpay;
		pay = pay * DAILY_INCREASE;
		worked++;
	}
	cout << "\nTotal Pay for " << days << " days =  $" << totalpay << endl;
	cout << "\n\n\n\n";
	return 0;
}