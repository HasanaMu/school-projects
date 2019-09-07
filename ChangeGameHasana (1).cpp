/*Programmer: Hasana Muhammad
  Date: 9/28/2018
  Purpose: HW #5 using if else statement.
  Description: This program inputs numbers of pennies, nickels, dimes, and quarters to see if it makes a dollar. 
			   if the user gets a dollar, they win, if not there will be a message telling them if they got more or less.*/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	int pennies, nickels, dimes, quarters, total;
	const double NICKVAL = 5;
	const double DIMEVAL = 10;
	const double QUARTERVAL = 25;
	const double PENVAL = 1;

	//get user input pennies
	cout << "Enter number of pennies: " << endl;
	cin >> pennies;
	//validation pennies
	if (pennies < 0)
	{
		cout << "Illegal Value. Please input a positive number." << endl;
		cin >> pennies;
	}

	//get user input nickels
	cout << "Enter number of nickels: " << endl;
	cin >> nickels;
	//validation nickels
	if (nickels < 0)
	{
		cout << "Illegal Value. Please input a positive number." << endl;
		cin >> nickels;
	}

	//get user input dimes
	cout << "Enter number of dimes: " << endl;
	cin >> dimes;
	//validation dimes
	if (dimes < 0)
	{
		cout << "Illegal Value. Please input a positive number." << endl;
		cin >> dimes;
	}

	//get user input quarters
	cout << "Enter number of quarters: " << endl;
	cin >> quarters;
	//validation quarters
	if (quarters < 0)
	{
		cout << "Illegal Value. Please input a positive number." << endl;
		cin >> quarters;
	}

	//calculation
	total = pennies * PENVAL + nickels * NICKVAL + dimes * DIMEVAL + quarters * QUARTERVAL;

	//Calculations
	if (total == 100)
		cout << "Congratulations!! You won the game by making $1.00!" << endl;
	if (total < 100)
		cout << "Oops! You made less than $1.00" << endl;
	if (total > 100)
		cout << "Oops! You made more than $1.00" << endl;
	
	return 0;
}