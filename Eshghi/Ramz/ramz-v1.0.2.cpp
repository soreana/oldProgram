// ramz-v1.0.0
// dar in vertion ramz be sorate kamel piyae sazi shode ast
// amma zakhire namishavad
// baraye zakhira kardanesh ye vertion 1.1 banevis
// tarjihan injkaro ba setCode bokon
// in vertion ta 4 harf ra be tore kamel poshtibani mikonad ( zakhire kardan )
#include <iostream>
#include <string>
using namespace std;
//using namespace Coder;

#define WordLength 20
#define WordNumber 5
//#define For_( int i , int n) , for( i; i < n; i++);

class Coder
{
public:
    string getName(){ return name;} // function that return name
    int getCode() {return code;} // function that return code
    void setName( string Name );
    int coder( int i , string name);
private:
    long int code;
    string name;

}; // end class coder

int Coder::coder( int i , string name )
{
    if( name[i] == 'a' || name[i] == 'A' )		return 21 ;
    if( name[i] == 'b' || name[i] == 'B' )		return 22 ;
    if( name[i] == 'c' || name[i] == 'C' )		return 23 ;
    if( name[i] == 'd' || name[i] == 'D' )		return 31 ;
    if( name[i] == 'e' || name[i] == 'E' )		return 32 ;
    if( name[i] == 'f' || name[i] == 'F' )		return 33 ;
    if( name[i] == 'g' || name[i] == 'G' )		return 41 ;
    if( name[i] == 'h' || name[i] == 'H' )		return 42 ;
    if( name[i] == 'i' || name[i] == 'I' )		return 43 ;
    if( name[i] == 'j' || name[i] == 'J' )		return 51 ;
    if( name[i] == 'k' || name[i] == 'K' )		return 52 ;
    if( name[i] == 'l' || name[i] == 'L' )		return 53 ;
    if( name[i] == 'm' || name[i] == 'M' )		return 61 ;
    if( name[i] == 'n' || name[i] == 'N' )		return 62 ;
    if( name[i] == 'o' || name[i] == 'O' )		return 63 ;
    if( name[i] == 'p' || name[i] == 'P' )		return 71 ;
    if( name[i] == 'q' || name[i] == 'Q' )		return 72 ;
    if( name[i] == 'r' || name[i] == 'R' )		return 73 ;
    if( name[i] == 's' || name[i] == 'S' )		return 74 ;
    if( name[i] == 't' || name[i] == 't' )		return 81 ;
    if( name[i] == 'u' || name[i] == 'U' )		return 82 ;
    if( name[i] == 'v' || name[i] == 'V' )		return 83 ;
    if( name[i] == 'w' || name[i] == 'W' )		return 91 ;
    if( name[i] == 'x' || name[i] == 'X' )		return 92 ;
    if( name[i] == 'y' || name[i] == 'Y' )		return 93 ;
    if( name[i] == 'z' || name[i] == 'Z' )		return 94 ;
} // end function code

void Coder::setName( string Name )
{
    int freeSpace;
    name = Name , code = 0;
    for(int i=0 ; i< WordLength ; i++)
    {
        freeSpace = coder( i , Name );
        if(freeSpace == 0 )	break;
        cout << freeSpace << " " ;
        code = (code*100)+freeSpace; // dar vertion badi estfaed shavad
    } // end of the for
} // end function setName

int main ()
{
    Coder vo[WordNumber] ; string Vo;
    for(int i=0 ; i< WordNumber ; i++ )
    {
        cin >>  Vo ;
        vo[i].setName( Vo );
        cout << endl << vo[i].getCode() << endl;  // for next vertion
    }// end of for
return 0 ;
}// end function main

