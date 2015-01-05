// Fig. 3.17: fig03_17.cpp
// Create and manipulate a GradeBook object; illustrate validation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// function main begins program execution
int main()
{
	// create two GradeBook object ;
	// initialcourse name of gradeBook1 is too long
	GradeBook gradeBook1( "CS101 INTroduction to programming in C++" );
	GradeBook gradeBook2( "Cs102 C++ Data Structures" );

	// display each GradeBook's courseName
	cout << "gradeBook1's initial course name is: "
		<< gradeBook1.getCourseName()
		<< "\n gradeBook2's initial course name is: "
		<< gradeBook2.getCourseName() << endl;

	// modify myGradeBook's courseName (with a valid-length string)
	gradeBook1.setCourseName( "CS101 C++ Programming" );

	// display each GradeBook's courseName
	cout << "\ngradeBook1's course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is: "
		<< gradeBook2.getCourseName()<< endl;
} // end main
