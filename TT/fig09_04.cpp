// Fig. 9.4: fig09_04.cpp
// Demonstrating class member access operators . and ->
#include <iostream>
using namespace std;

// class Count definition
class Count
{
public: // public data is dangerouse
	// set the value of private data member x
	void setX( int value )
	{
		x = value;
	} // end function setX

	// prints the value of private data member x
	void printX()
	{
		cout << x << endl;
	} // end function printX

private:
	int x;
}; // end class Count

int main()
{
	Count counter; // create  counter object
	Count *counterPtr = &counter; // create pointer to counter
	Count &counterRef = counter; // create reference to counter

	cout << "Set x to 1 and print using the object's name: ";
	counter.setX( 1 ); // set data member x to 1
	counter.printX(); // call member function print

	cout << "Set x to 2 and using a reference to an object: ";
	counterRef.setX( 2 ); // set data member x to 2
	counterRef.printX(); // call member function print

	cout << "Set x to 3 and print using a pointer to an object: ";
	counterPtr->setX( 3 ); // set data member x to 3
	counterPtr->printX(); // call member function print

	counterRef.printX();
} // end main
