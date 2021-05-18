// EnyiaBinaryDecimal2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void main()
{
	string binary, b;
	int digit;

	cout << "Enter a binary string: ";
	cin >> binary;

	//get the most significant bit of binary
	b = binary[0];
	int total = 0;
	for (int i = 0; i < binary.length(); i++) {
		b = binary[(binary.length() - 1 - i)];
		digit = atoi(b.c_str());
		cout << i;
		cout << "\n";
		cout << pow(2, i);
		cout << "\n";
		total += (digit == 1) ? pow(2 , i) : 0;
	}
	cout << total;
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
