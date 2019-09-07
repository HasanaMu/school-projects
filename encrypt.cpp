/*Programmer: Hasana Muhammad
  Date: 9/7/18
  Purpose: Part 1 of HW #4
  Description: This program encrypts 4 digit credit card number as follows:
				1. Read 4-digit credit card number
				2. Separate the digits
				3. Add 7 to each digit and mod 10
				4. Swap 1st and 3rd digits, 2nd and 4th digits
				5. Display the encrypted number*/
#include <iostream>
using namespace std;
int main()
{
	//Variables
	int number, digit1, digit2, digit3, digit4, extra;

	//Get user input
	cout << "Please enter 4-digit credit card number: " << endl;
	cin >> number;
	
	//Calculations
		//Separate digits
	digit1 = number / 1000;
	number = number % 1000;
	digit2 = number / 100;
	number = number % 100;
	digit3 = number / 10;
	digit4 = number % 10;
		//Add 7 and mod10
	digit1 = (digit1 + 7) % 10;
	digit2 = (digit2 + 7) % 10;
	digit3 = (digit3 + 7) % 10;
	digit4 = (digit4 + 7) % 10;

		//Swap numbers
	extra = digit1;
	digit1 = digit3;
	digit3 = extra;
	extra = digit2;
	digit2 = digit4;
	digit4 = extra;
		
	//display encrypted number
	cout << "\nEncrypted number = " << digit1 << digit2 << digit3 << digit4 << endl;
	


	return 0;
}