/*Programmer: Hasana Muhammad
Date: 10/19/18
Purpose: Sample for next HW
Description: This program reports the height and date a vault was made after reading a pole vauilter's three best vaults.*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	string name, date1, date2, date3;
	double height1, height2, height3;

	//Get user input
	cout << "Enter the name of the athlete (vaulter): " << endl;
	getline(cin, name);

	cout << "Enter the date of the first vault: " << endl;
	getline(cin, date1);
	cout << "Enter the height of the first vault: " << endl;
	cin >> height1;
	if (height1 < 0)
	{
		cout << "Illegal value entered. Must enter a number >= 0." << endl;
		cin >> height1;
	}
	cin.ignore(); //ignore entery key pressed after line

	cout << "Enter the date of the second vault: " << endl;
	getline(cin, date2);
	cout << "Enter the height of the second vault: " << endl;
	cin >> height2;
	if (height2 < 0)
	{
		cout << "Illegal value entered. Must enter a number >= 0." << endl;
		cin >> height2;
	}
	cin.ignore(); //ignore entery key pressed after line

	cout << "Enter the date of the third vault: " << endl;
	getline(cin, date3);
	cout << "Enter the height of the third vault: " << endl;
	cin >> height3;
	if (height3 < 0)
	{
		cout << "Illegal value entered. Must enter a number >= 0." << endl;
		cin >> height3;
	}

	//Find the best height
	if (height1 > height2 && height1 > height3)
		cout << "The best height was made on " << date1 << " and is " << height1 << "." << endl;
	else
		if (height2 > height1 && height2 > height3)
			cout << "The best height was made on " << date2 << " and is " << height2 << "." << endl;
		else
			if (height3 > height1 && height3 > height2)
				cout << "The best height was made on " << date3 << " and is " << height3 << "." << endl;

	//Find the worst height
	if (height1 < height2 && height1 < height3)
		cout << "The least best height was made on " << date1 << " and is " << height1 << "." << endl;
	else
		if (height2 < height1 && height2 < height3)
			cout << "The least best height was made on " << date2 << " and is " << height2 << "." << endl;
		else
			if (height3 < height1 && height3 < height2)
				cout << "The least best height was made on " << date3 << " and is " << height3 << "." << endl;
	
	//Find the middle runner
	if (height1 < height2 && height1 > height3 || height1 > height2 && height1 < height3)
		cout << "The second best height was made on " << date1 << " and is " << height1 << "." << endl;
	else
		if (height2 < height1 && height2 > height3 || height2 > height1 && height2 < height3)
			cout << "The second best height was made on " << date2 << " and is " << height2 << "." << endl;
		else
			if (height3 < height1 && height3 > height2 || height3 > height1 && height3 < height2)
				cout << "The second best height was made on " << date3 << " and is " << height3 << "." << endl;

	return 0;
}