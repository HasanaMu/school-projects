/*Programmer: Hasana Muhammad
  Date: 9/7/18
  Purpose: HW #4 Part 2 - Decryption
  Description: This project decrypts a 4-digit credit card number by:
				1. Read 4-digit credit card number
				2. Separating the digits
				3. Swapping the 1st and 3rd, 2nd and 4th
				4. Adding 3 and modulus 10
				5. Displaying the decrypted number*/
#include <iostream>
using namespace std;
int main()
{
	//variables
	int number, digit1, digit2, digit3, digit4, extra;

	//Get user input
	cout << "Enter 4-digit credit card number: ";
	cin >> number;

	//calculations
		//separate the digits
	digit1 = number / 1000;
	number = number % 1000;
	digit2 = number / 100;
	number = number % 100;
	digit3 = number / 10;
	digit4 = number % 10;
		//swap digits
	extra = digit1;
	digit1 = digit3;
	digit3 = extra;
	extra = digit2;
	digit2 = digit4;
	digit4 = extra;
		//add3 mod 10
	digit1 = (digit1 + 3) % 10;
	digit2 = (digit2 + 3) % 10;
	digit3 = (digit3 + 3) % 10;
	digit4 = (digit4 + 3) % 10;

	//Display results
	cout << "\nDecrypted 4-digit credit card number: " << digit1 << digit2 << digit3 << digit4 << endl;

	return 0;
}