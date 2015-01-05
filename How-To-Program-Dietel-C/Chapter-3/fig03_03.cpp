// Fig. 3.3:fig03_03.cpp
// Define class GradeBook with a member function that takes a parameter,
// create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	// function that displays a message to the GradeBook user
	void displayMessage(string courseName)
	{
		cout<< "Wellcome to the grade book for\n" << courseName<< "!"
		<< endl;
	}// end function displayMessage 
};// end class GradeBook

// function main begins program execution
int main ()
{
	string nameOfCourse;// string of characters to store the course name
	GradeBook myGradeBook;// create a GradeBook object name myGradeBook
	
	// prompt for and input course name
	cout << "Please enter the course name:" <<endl;
	getline(cin,nameOfCourse );// read a course name with blanks
	//cout << endl;// output a blank line

	// call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage(nameOfCourse);
}//end main
