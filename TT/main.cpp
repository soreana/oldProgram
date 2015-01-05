void sinaro::signin(string usrN	, string pass )
{
	while ()// naresidi be akhare file
	{
		
	}
}


void sinaro::signup( string N , string usrN , string pass )
{
	ofstream out("user.txt");
	out << "name:" << N << " usr:" << usrN << " pass:" << pass << endl;
	out.close;
} // end of sign up














/*#include <iostream>
#include <string>
// #include "ap.h"
using namespace std;

int main()
{	
//cout << endl << " !!!!!!!!!" << endl << "! O  |  O !" << endl << "!    |    !" << endl << " ! ----- !" << endl << "  !!!!!!! " << endl 	<< "   Sinai" << endl << "    !!!" << endl << "     !" << endl;
////////////////////////////////////////////////////////////////     in tike ro mikoni toye getline ////////////////////////////
//	God_C gVo; // gVo == God_C vorodi
	string vo; // vo == vorodi
	int i = 0 , j = -1 , k , jail;
	while( getline(cin , vo ) )
	{
		// set kardane kari ke bayad anjam beshe
		cout << vo << endl;
		for( i = 0 ; i < 3 ; i++ )
		{	
			j++;
			k=j;
			while((vo[j] != ' ')&&( j <= vo.length()))
			{
				j++;
				if( j== vo.length())	
					jail=1; // jail for jail break
			} // end of the while
//			gVo.sSetMethod(vo.substr(k,j) , i );
		if( jail == 1 ) 
			break;
		} // end of the for
	}// end of the while
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}// end main
