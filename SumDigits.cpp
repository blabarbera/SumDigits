// SumDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int sumDigits(int n);

int main() 
{
	// Write your main here

	int n; //Declare variable n

	cout << "Enter an integer: ";
	cin >> n;
	cout << endl;

	cout << "The digit sum is: " << sumDigits(n);
	cout << endl;

	return 0;
}

int sumDigits(int n)
{
	int sum = 0;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		sum = sum + n % 10; //find the remainder
		n = n / 10; //find the quotient
		return sum + sumDigits(n); //return sum and call sumDigits again
	}

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
