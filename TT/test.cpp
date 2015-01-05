#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void signup( string name , string userName , string pass )
{
	ofstream out( "data.txt" , ios::app);
	out << "Name:" << name << " userName:" << userName << " pass:" << pass << "\n";
	out.close();
}

int main()
{
	signup("azita", "azita" , "Azi1100");
	signup("saman", "saman" , "Azi1100");
	
} // end of main
