#include <iostream>
#include<fstream>
using namespace std;

// Jane madaret akharesh ye . bezan
void printBackwards()
{
	int i=0;
	char ch;
	ofstream out("sinai.txt");
	// Az vorodi mikhone
	while (cin >> ch )
	{
	if(ch == '.' )
		break;
	out << ch;
	i++;

	} // end of the while
	
	out.close();

	// ro safhenamayesh mide
	int n = i;
	for(int j=0 ; j < n ; j++)
	{
		ifstream in( "sinai.txt");
		for(int k =0 ; k < i; k++)
			in >> ch;
	cout << ch;
	in.close();
	i--;
	}
} // end of printBackwards

int main()
{
	printBackwards();
}
