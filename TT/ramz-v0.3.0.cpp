#include <iostream>
#include <string>
#include <vector>
using namespace std;


void coder();


#define word_length 60

int main(){
        cout<< "Hello!\nPlease enter number of word\nyou want to change into the code"<<endl;
	int Num; 
	cin>>Num;
	for(int i; i<Num;i++)
	{       
		coder();
		cout<<endl;
	}
}//end of the main

void coder(){
string vo;
cin >> vo;
for (int i=0; i<=word_length; i++){
        if(vo[i]=='a'||vo[i]=='A')
                cout<<"21 ";
        if(vo[i]=='b'||vo[i]=='B')
                cout<<"22 ";
        if(vo[i]=='c'||vo[i]=='C')
                cout<<"23 ";
        if(vo[i]=='d'||vo[i]=='D')
                cout<<"31 ";
        if(vo[i]=='e'||vo[i]=='E')
                cout<<"32 ";
        if(vo[i]=='f'||vo[i]=='F')
                cout<<"33 ";
        if(vo[i]=='g'||vo[i]=='G')
                cout<<"41 ";
        if(vo[i]=='h'||vo[i]=='H')
                cout<<"42 ";
        if(vo[i]=='i'||vo[i]=='I')
                cout<<"43 ";
        if(vo[i]=='j'||vo[i]=='J')
                cout<<"51 ";
        if(vo[i]=='k'||vo[i]=='K')
                cout<<"52 ";
        if(vo[i]=='l'||vo[i]=='L')
                cout<<"53 ";
        if(vo[i]=='m'||vo[i]=='M')
                cout<<"61 ";
        if(vo[i]=='n'||vo[i]=='N')
                cout<<"62 ";
        if(vo[i]=='o'||vo[i]=='O')
                cout<<"63 ";
        if(vo[i]=='p'||vo[i]=='P')
                cout<<"71 ";
        if(vo[i]=='q'||vo[i]=='Q')
                cout<<"72 ";
        if(vo[i]=='r'||vo[i]=='R')
                cout<<"73 ";
        if(vo[i]=='s'||vo[i]=='S')
                cout<<"74 ";
        if(vo[i]=='t'||vo[i]=='T')
                cout<<"81 ";
        if(vo[i]=='u'||vo[i]=='U')
                cout<<"82 ";
        if(vo[i]=='v'||vo[i]=='V')
                cout<<"83 ";
        if(vo[i]=='w'||vo[i]=='W')
                cout<<"91 ";
        if(vo[i]=='x'||vo[i]=='X')
                cout<<"92 ";
        if(vo[i]=='y'||vo[i]=='Y')
                cout<<"93 ";
        if(vo[i]=='z'||vo[i]=='Z')
                cout<<"94 ";
}//end of the for
}//end of the coder

