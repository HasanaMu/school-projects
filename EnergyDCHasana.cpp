/*Programmer: Hasana Muhammad
Date: 8/24/18
Purpose: HW #2: Energy Drink Consumption
Description: This project displays the approximate number of customers in the suvery who
			purchase one or more energy drinks per week and those who purchase citrus flavored energy drinks.*/
#include <iostream>
using namespace std;
int main()
{
	//variables
	double customers;
	double totalenergyd, totalcitrusfd;

	//input values
	cout << "Number of customers surveyed: ";
	cin >> customers;
	

	//calculate number of customers who purchase energy drinks per week
	totalenergyd = customers * .15;
	totalcitrusfd = totalenergyd * .52;

	//Display results
	cout << endl << "Approximate number of customers who buy one or more energy drinks: " << totalenergyd << endl;
	cout << "Approximate number of customers who buy citrus flavored energy drinks: " << totalcitrusfd << endl;
	return 0;
}