//Fig. 3.1:fig03_01.cpp
//Define class GradeBook with mrmber functin displayMessage,
//create a GradeBook object, and call its displayMessage function.
#include <iostream>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	//function that display a wellcome message to the GrsdeBook user
	void displayMessage()
	{
		cout << "Wellcome to the Grade Book" << endl;
	}//end function displayMessage
};

// function main begins program execution
int main ()
{
	GradeBook myGradeBook;// create a GradeBook object named myGradeBook
	myGradeBook.displayMessage();// call object'sdisPlayMessage function
}//end main
