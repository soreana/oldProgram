#include <iostream>
using namespace std;

int bmm ( int x , int y )
{
	int bala , vasat , gabli , bottle;
	if( x > y )
		vasat = y , gabli = x;
	else
		vasat = x , gabli = y;
	
	do
	{
		bala = 0 ; 
		while( (bala*vasat) < gabli )
			bala++;
		bala--;
		bottle = gabli;
		gabli = vasat;
		vasat = bottle - gabli*bala;
	} while ( bala != 0  );
	return gabli;
} // end of the function bmm

int main ()
{
	int x, y;
	while(1)
	{
		cout << "please enter number : " << endl;
		cin >> x >> y ;
		cout << "bmm is : " <<  bmm( x , y ) << endl;
	}
} // end of the function main
