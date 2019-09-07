/*Programmer: Hasana Muhammad
  Date: 10/29/18
  Purpose: HW #8 Bus Lines Project
  Description: This program calculates the Total Fare for a passenger based on the number of townlines crossed. 
			   It evaluates for 0 to 10 townlines.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables and Constants
	const double BASE_RATE = 0.55;
	const double FIRST2TOWNS = 0.25;
	const double MORETOWNS = 0.15;

	int totaltownlines;
	double base_fare;
	double total_fare;
	double first2fare;
	double moretownsfare;

	//get user input
	cout << "Please enter number of townlines crossed. Must enter a number between 0 and 10." << endl;
	cin >> totaltownlines;
	//verification
	if (totaltownlines < 0 || totaltownlines > 10)
	{
		cout << "Illegal value entered. Please enter a number between 0 and 10." << endl;
		cin >> totaltownlines;
	}

	//calculations and display results using switch statements
	cout << showpoint << fixed << setprecision(2);
	switch (totaltownlines)
	{
	case 0: cout << "You have crossed " << totaltownlines << " townlines." << endl;
		base_fare = BASE_RATE;
		total_fare = base_fare;
		cout << "Your fare will be $" << total_fare << "." << endl;
		cout << "The breakdown of the fare is:" << endl;
		cout << "\tBase Rate is..... \t\t\t$" << base_fare << endl;
		cout << "\t\t\t\t\t\t--------" << endl;
		cout << "Total Fare is.....\t\t\t $" << total_fare << endl;
		break;
	case 1:
	case 2: cout << "You have crossed " << totaltownlines << " townlines." << endl;
		base_fare = BASE_RATE;
		first2fare = totaltownlines * FIRST2TOWNS;
		total_fare = base_fare + first2fare;
		cout << "Your fare will be $" << total_fare << "." << endl;
		cout << "The breakdown of the fare is:" << endl;
		cout << "\tBase Rate is..... \t\t\t$" << base_fare << endl;
		cout << "Cost for up to 2 townlines crossed \t\t\t$" << first2fare << endl;
		cout << "\t\t\t\t\t\t--------" << endl;
		cout << "Total Fare is.....\t\t\t $" << total_fare << endl;
		break;
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10: cout << "You have crossed " << totaltownlines << " townlines." << endl;
		base_fare = BASE_RATE;
		first2fare = 2 * FIRST2TOWNS;
		moretownsfare = (totaltownlines - 2) * MORETOWNS;
		total_fare = base_fare + first2fare + moretownsfare;
		cout << "Your fare will be $" << total_fare << "." << endl;
		cout << "The breakdown of the fare is:" << endl;
		cout << "\tBase Rate is..... \t\t\t\t$" << base_fare << endl;
		cout << "\tCost for up to 2 townlines crossed \t\t$" << first2fare << endl;
		cout << "\tCost for townlines crossed after first two is \t$" << moretownsfare << endl;
		cout << "\t\t\t\t\t\t\t--------" << endl;
		cout << "\tTotal Fare is.....\t\t\t\t$" << total_fare << endl;
	}




	return 0;
}