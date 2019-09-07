/*Programmer: Hasana Muhammad
Date: 10/3/18
Purpose: Midterm CSC305- Stadium Seating Program
Description: This program asks a user how many tickets sold in each seating category at a stadium
and then displays the profit from sales in a fixed-point notation with 2 decimal points.
The program also validates the input.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	int classAsold, classBsold, classCsold;
	double profit;

	//Get user input A
	cout << "Please enter number of tickets sold for Class A:" << endl;
	cin >> classAsold;
	//Validation A
	if (classAsold < 0)
	{
		cout << "Illegal value for seats. Please enter a number > 0." << endl;
		cin >> classAsold;
	}

	//Get user input B
	cout << "Please enter number of tickets sold for Class B:" << endl;
	cin >> classBsold;
	//Validation B
	if (classBsold < 0)
	{
		cout << "Illegal value for seats. Please enter a number > 0." << endl;
		cin >> classBsold;
	}

	//Get user input C
	cout << "Please enter number of tickets sold for Class C:" << endl;
	cin >> classCsold;
	//Validation C
	if (classCsold < 0)
	{
		cout << "Illegal value for seats. Please enter a number > 0." << endl;
		cin >> classCsold;
	}

	//Calculations
	profit = (classAsold * 15.00) + (classBsold * 12.00) + (classCsold * 9.00);
	cout << fixed << showpoint << setprecision(2);

	//Display Results
	cout << "The amount generated from ticket sales is: $" << profit << endl;
	return 0;
}