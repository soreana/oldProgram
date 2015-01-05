// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	GradeBook( string ); // constructor that initializes courseName
	void setCourseName( string ); // function that sets the course name
	string getCourseName(); // function that get the course name
	void displayMessage(); //function that displays a welcome message
private:
	courseName; // course name for this GradeBook
}; // end class GradeBook
