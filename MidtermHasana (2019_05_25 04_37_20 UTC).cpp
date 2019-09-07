/*Programmer: Hasana Muhammad
Date: 10/3/18
Purpose: Midterm CSC305- Stadium Seating Program
Description: This program asks a user how many tickets sold in each seating category at a stadium
			 and then displays the profit from sales in a fixed-point notation with 2 decimal points.*/
#include <iostream>
#include <iomanip>
#include "stdafx.h"
using namespace std;

int main()
{
	//Variables
	int classAsold, classBsold, classCsold, profit;

	//Get user input
	cout << "Please enter number of tickets sold for Class A:" << endl;
	cin >> classAsold;
	cout << "Please enter number of tickets sold for Class B:" << endl;
	cin >> classBsold;
	cout << "Please enter number of tickets sold for Class C:" << endl;
	cin >> classCsold;

	//Calculations
	profit = (classAsold * 15.00) + (classBsold * 12) + (classCsold * 9);
	cout << fixed << showpoint << setprecision(2);

	//Display Results
	cout << "The amount generated from ticket sales is: $" << profit << endl;
    return 0;
}