/* Programmer: Hasana Muhammad
Date: 11/28/18
Purpose: HW #10
Description: This program prompts the manager to enter the total sales for the day. The program reads the input and loops the prompt until the manager enters 9999. the number of days for which data was entered, the grand total of the sales, the average of the sales,
			 and the best and worst sale on a given day is displayed.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables and constants
	double totalsales, totalsalesCom, averagesales, bestsale, worstsale;
	int days, totaldays, worstday, bestday;

	//Intro
	cout << "Straight Talk Bar and Grill: Daily Sales Program" << endl;
	cout << "\nThis program requires you to input the total sales for a day multiple times."
		<< "\nThe program will then calculate the number fo days for which data was entered"
		<< "\nalong with the grand total, average, best sale, and worst sale."
		<< "\nPlease follow ALL directions.\n" << endl;
	//Get user input
    cout << "Please enter the total sales for a day (OR enter 9999 to stop): \n";
	cin >> totalsales;
    while (totalsales < 0)
            {
                cout << "Illegal value. Please enter a number greater than 0." << endl;
                cin >> totalsales;
            }
	if (totalsales == 9999)
		cout << "No input will be displayed since no read data was entered. \n";
	else
	{
        //Display Headers
        cout << "\tDay\t\t  Sales\n";
        cout << "---------------------------------\n";
        days = 1;
        bestsale = totalsales;
		worstsale = totalsales;
		bestday = days;
		worstday = days;
		totalsalesCom = 0;
		while (totalsales != 9999)
		{
			if (totalsales > bestsale)
			{
				bestsale = totalsales;
				bestday = days;
			}
			if (totalsales < worstsale)
			{
				worstsale = totalsales;
				worstday = days;
			}
            cout << "\t  " << days << "\t\t$" << totalsales << endl;
			totalsalesCom = totalsales + totalsalesCom;
			days++;
			cout << "Please enter the total sales for a day  (OR enter 9999 to stop): \n";
			cin >> totalsales;   
			while (totalsales < 0)
			{
				cout << "Illegal value. Please enter a number greater than 0." << endl;
				cin >> totalsales;
			}
		}
		cout << fixed << showpoint << setprecision(2);
		totaldays = days - 1; 
		averagesales = totalsalesCom / totaldays;
        cout << "\nThe number of days for which date was entered was: " << totaldays
            << "\nThe grand total for all the sales entered was: $" << totalsalesCom << endl;
        cout << "\nThe average for all the sales entered was: $" << averagesales << endl;
		cout << "\nThe best sale entered = $" << bestsale << " on day " << bestday
			<< "\nThe worst sale entered = $" << worstsale << " on day " << worstday << endl;
	}
	return 0;
}