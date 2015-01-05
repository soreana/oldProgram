// Fig. 11.5: fig11_05.cpp
// Demonstrateing class PhoneNumber's overloaded stream insertion
// and stream extraction operators.
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
	PhoneNumber phone; // create object phone

	cout << "Enter phone number in form (123) 456-7890:" << endl;

	// cin >> phone invokes operator>> by implicitly issuing
	// the non-member function call operator>>(cin , phone )
	cin >> phone;

	cout << "The phone number entered was: ";

	// cout << phone invokes operator<< by implicitly issuing
	// the non-member function call operator<<( cout , phone )
	cout << phone << endl;
} // end main
