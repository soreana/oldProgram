#include"location.h"
#include<stdio.h>
#include <Windows.h>
#include <conio.h>










void Gol(int x , int y);
void box(int x , int y);
void Garch(int x , int y);
void marioj(int x, int y, int i);
void marioa(int x, int y, int i);
void tirjb(int x , int y);
void tirjp(int x , int y);
void tirab(int x , int y);
void tirap(int x , int y);
void mariob (int x, int y, int i,int ja);
void mariop (int x, int y, int i,int ja);



#define w  400 ;
#define p 13/* range sorati(pink)*/
#define q 10/*range sabz(green)*/
#define v 12/* range ghermez(red)*/
#define t 7/*range sefid(white)*/
#define b 9/*range abi(blue)*/
#define z 14 /*range ghahvei(brown)*/
#define n 15/*range sefid(white)*/


int main () {
    init_console_functions ();
	int X[20]={46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},Y[20]={9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},T[20]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	X[0]=46;
	
	
	/*

// ********************************  product key  ***********************************************************************************************
int KEY[5];
KEY[4]=1;
while(KEY[4]==1){// CHEK KARDANE PRODUCT KEY
printf("enter the product key:\nfor example 1234-4567-8910-1112\n");
scanf("%d-%d-%d-%d", &KEY[0],&KEY[1],&KEY[2],&KEY[3]);
	if((KEY[0]==6037)&&(KEY[1]==9911)&&(KEY[2]==9884)&&(KEY[3]==2571)){// FERESTADAN BALAYE HALGE (if 1)
        printf("Thank you for registeration\n");
        KEY[4]=0;        
		continue;
	}// end of the if 1
printf("Iinvalide number\n");
}// END OF THE PRODUCT KEY
//************************************************************************************************************************************************
//**************************************  FILM ***************************************************************************************************
//************************************************************************************************************************************************

//bayad ye seri while & switch case hatman az dayi majid bepors chi kar koni

*/
	char vo ='s';
	int x=19,y=75,j=0,i=1;


do{//main while


//************************************************************* map loader ******************************************************************************************************
	clrscr();
	setColor(t);/* az inja *******************************************************************************************************/
	y=0,x=69;
	gotoxy(x,y);
	printf("Hello:\n");
    setColor(z);
	gotoxy(x,++y);
	printf(" !!!!!!!!!\n");                                                         
	setColor(n);                                                                    //\\        //\\                //\\         ||""""""||
    gotoxy(x,++y);                                                                 //  \\      //  \\              //  \\        ||      ||
	printf("! ");                                                                 //    \\    //    \\            //    \\       ||      ||
	setColor(b);                                                                 //      \\  //      \\          //      \\      ||""""""**
	printf("O");                                                                //        \\//        \\        //========\\     ||
	setColor(n);                                                               //                      \\      //          \\    ||
	printf("  |  ");                                                          //                        \\    //            \\   ||
	setColor(b);                                                             //                          \\  //              \\  ||
	printf("O");
	setColor(n);
	printf(" !\n");
	gotoxy(x,++y);
    printf("!    |    !\n");
    gotoxy(x,++y);
	printf(" !");
    setColor(v);
	printf(" -----");
	setColor(n);
	printf(" ! \n"); 
	gotoxy(x,++y);
    printf("  !!!!!!!   \n");
    x=0,y=23;                                                                       
	for(i=0; i<79 ; i++){// Keshidane khate zamine                                  
		x=i;
	 	gotoxy(x,y);
		setColor(q);
		printf("-");
       }// end of for(Keshidane khate zamine)
	x= 46,y= 9;                                                             
    gotoxy(x,y);
	Garch(x,y);
	X[1]=25,Y[1]=19;
	gotoxy(X[1],Y[1]);
	Gol(X[1],Y[1]);
	/* Tarahi avaliye gharchkhor*/
	y=19,x=75;
	gotoxy(x,y);
	setColor(n);
	printf(" ...\n");
	gotoxy(x,++y);
	printf(" ...\n");
	gotoxy(x,++y);
	setColor(v);
	printf(" -|\n");
	gotoxy(x,++y);
	setColor(b);
	printf("  *\n");
	setColor(t);/* ta inja tolide nagshast ************************************************************************************************************************/












	T[11]=0;
	X[0]=45,Y[0]=9,T[0]=0,T[1]=1,X[1]=25,Y[1]=19;
	j=1;
	int NUM=j,k=1,f=0,jahat=-1;
//*********************************************************************************************************************************************************************************
	y=19,x=75,i=1;
   while(NUM==j){

if(T[11]!=1)vo=getch();	
if(T[11]==0){k=1,f=0;}

	X[0]++;
	gotoxy(X[0],Y[0]);
	if (T[0]==1){
	if((X[0]>51)&&(Y[0]<19))Y[0]++;
	if(X[0]>73)T[0]=0;
	Garch(X[0],Y[0]);}
	gotoxy(X[0],Y[0]);
	if (T[1]==1){
	Gol(X[1],Y[1]);}
	if (T[7]==1){
	box(X[7],Y[7]);}
	if (T[8]==1){
	box(X[8],Y[8]);}
	if (T[9]==1){
	box(X[9],Y[9]);}
	if (T[10]==1){
	box(X[10],Y[10]);}
	if (T[11]==1){// ROSHAN KARDANE PARESH BE BALA AMODI
	if(k<10){
		vo= 'p';
		k++;

    }
	if(k==10)f=10;
	if (f==10){// if outer
	if(i==1){
		if(k>0){
		k--;
		vo='p';
		if(k==0)f=0;
		}}
	else {
	if(k>5){
		k--;
		vo='p';
		if(k==0)f=0;
	}}
	}//end if the if outer

	}//if'e roshan kardane cherag
box(X[10]=20,Y[10]=9);
box(X[8]=25,Y[8]=9);
box(X[9]=30,Y[9]=9);
box(X[7]=45,Y[7]=9);








	switch (vo){
		case 'e':{ 
			gotoxy(0,0);
			printf("If you want to exit press y or Y for back to the game press something else ");
			vo='g';
			scanf("%c" , &vo);
			if((vo=='y')||(vo=='Y')){
				return 0;
			}
			break;
			}// end of the case e
		case 77 :{// jolo
			jahat=1;
			x++;
			marioj(x,y,i);
			if((x>74)&&(i>1)){// raftan safhe ba'd
				j++;
				break;}
			if((x>77)&&(i==1)){// raftan safhe ba'd
				j++;
				break;}
			if(y>22){// oftadan to chale
				gotoxy(35,15);
				setColor(n);
				printf("Game over");
				return 0;}
			if((((X[0]-3)<=x)&&(x<=(X[0]+5)))&&(((Y[0]-1)<=y)&&(y<=(Y[0]+5)))){// khordan be garch
				T[0]=0;
				gotoxy(X[0],Y[0]);
				printf("     ");
				gotoxy(X[0],Y[0]+1);
				printf("     ");
				gotoxy(X[0],Y[0]+2);
				printf("     ");
				gotoxy(X[0],Y[0]+3);
				printf("     ");
				i++,y=y-4;
				marioj(x++,y,i);
				}
			if((((X[1]-4)<=x)&&(x<=(X[1]+3)))&&(((Y[1]-8)<=y)&&(y<=(Y[1]+9)))){// khordan be gol
				T[1]=0;
				gotoxy(X[1],Y[1]);
				printf("     ");
				gotoxy(X[1],Y[1]+1);
				printf("     ");
				gotoxy(X[1],Y[1]+2);
				printf("     ");
				gotoxy(X[1],Y[1]+3);
				printf("     ");
				i++;
				if(i>3){i=3;}
				marioj(x,y,i);
				}
			if(i==1){//khordan be doshmane mario kocholo
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
			}// PAYANE KARE MARIO KOCHOLO
			if(i==2){//khordan be doshmane mario bozorg
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioj(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
					gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioj(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioj(x+=2,y+=4,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario bozorg
			if(i==3){//khordan be doshmane mario tirandaz
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioj(x,y,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
					gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioj(x,y,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioj(x,y,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario tir andaz
		break;}// end of the case jolo
	case 75 :{// agab
		    jahat=-1;
			x--;
			marioa(x,y,i);
			if(x==0){// raftan safhe ba'd
				j--;
				break;}
			if(y>22){// oftadan to chale
				gotoxy(35,15);
				setColor(n);
				printf("Game over");
				return 0;}
			if((((X[0]-3)<=x)&&(x<=(X[0]+6)))&&(((Y[0]-1)<=y)&&(y<=(Y[0]+5)))){// khordan be garch
				T[0]=0;
				gotoxy(X[0],Y[0]);
				printf("     ");
				gotoxy(X[0],Y[0]+1);
				printf("     ");
				gotoxy(X[0],Y[0]+2);
				printf("     ");
				gotoxy(X[0],Y[0]+3);
				printf("     ");
				i++,y=y-4;
				marioa(x++,y,i);
				}
			if((((X[1]-4)<=x)&&(x<=(X[1]+3)))&&(((Y[1]-8)<=y)&&(y<=(Y[1]+9)))){// khordan be gol
				T[1]=0;
				gotoxy(X[1],Y[1]);
				printf("     ");
				gotoxy(X[1],Y[1]+1);
				printf("     ");
				gotoxy(X[1],Y[1]+2);
				printf("     ");
				gotoxy(X[1],Y[1]+3);
				printf("     ");
				i++;
				if(i>3){i=3;}
				marioa(x,y,i);
				}
			if(i==1){//khordan be doshmane mario kocholo
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
			}// PAYANE KARE MARIO KOCHOLO
			if(i==2){//khordan be doshmane mario bozorg
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
					gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario bozorg
			if(i==3){//khordan be doshmane mario tirandaz
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
                    gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario tir andaz
		break;}// end of the case agab


		//PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP	
	case 32 :{// bala
		   y--;
		   mariob(x,y,i,jahat);
		   T[11]=1;


			if(y>22){// oftadan to chale
				gotoxy(35,15);
				setColor(n);
				printf("Game over");
				return 0;}
			if((((X[0]-3)<=x)&&(x<=(X[0]+6)))&&(((Y[0]-1)<=y)&&(y<=(Y[0]+5)))){// khordan be garch
				T[0]=0;
				gotoxy(X[0],Y[0]);
				printf("     ");
				gotoxy(X[0],Y[0]+1);
				printf("     ");
				gotoxy(X[0],Y[0]+2);
				printf("     ");
				gotoxy(X[0],Y[0]+3);
				printf("     ");
				i++,y=y-4;
				marioa(x++,y,i);
				}
			if((((X[1]-4)<=x)&&(x<=(X[1]+3)))&&(((Y[1]-8)<=y)&&(y<=(Y[1]+9)))){// khordan be gol
				T[1]=0;
				gotoxy(X[1],Y[1]);
				printf("     ");
				gotoxy(X[1],Y[1]+1);
				printf("     ");
				gotoxy(X[1],Y[1]+2);
				printf("     ");
				gotoxy(X[1],Y[1]+3);
				printf("     ");
				i++;
				if(i>3){i=3;}
				marioa(x,y,i);
				}
			if(i==1){//khordan be doshmane mario kocholo
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					gotoxy(35,15);
					setColor(n);
					printf("Game over");
					return 0;}
			}// PAYANE KARE MARIO KOCHOLO
			if(i==2){//khordan be doshmane mario bozorg
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
					gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioa(x+=2,y+=4,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario bozorg
			if(i==3){//khordan be doshmane mario tirandaz
				if((((X[2]-3)<=x)&&(x<=(X[2]+5)))&&(((Y[2]-4)<=y)&&(y<=(Y[2]+8)))){
					T[2]=0;
					gotoxy(X[2],Y[2]);
					printf("   ");
					gotoxy(X[2],Y[2]+1);
					printf("   ");
					gotoxy(X[2],Y[2]+2);
					printf("   ");
					gotoxy(X[2],Y[2]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
				if((((X[3]-3)<=x)&&(x<=(X[3]+5)))&&(((Y[3]-4)<=y)&&(y<=(Y[3]+8)))){
					T[3]=0;
                    gotoxy(X[3],Y[3]);
					printf("   ");
					gotoxy(X[3],Y[3]+1);
					printf("   ");
					gotoxy(X[3],Y[3]+2);
					printf("   ");
					gotoxy(X[3],Y[3]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
				if((((X[4]-3)<=x)&&(x<=(X[4]+5)))&&(((Y[4]-4)<=y)&&(y<=(Y[4]+8)))){//doshmane 3
					T[4]=0;
					gotoxy(X[4],Y[4]);
					printf("   ");
					gotoxy(X[4],Y[4]+1);
					printf("   ");
					gotoxy(X[4],Y[4]+2);
					printf("   ");
					gotoxy(X[4],Y[4]+3);
					printf("   ");
					marioa(x,y,i--);
				}// khordan be doshmane 3
			}// khordan be doshmane mario tir andaz
			if(i==1){// khordan be jabe mario kockolo
				if(((X[7]-2)<x<(X[7]+6))&&(y==Y[7]-3)){
					T[0]=1,X[0]=X[7],f=10,Y[0]=Y[7]-3;
					gotoxy(X[0],Y[0]);
					Garch(X[0],Y[0]);
				}// end of the if'e box1
				if(((X[8]-2)<x<(X[8]+6))&&(y==Y[8]-3)){
					f=10;
				}// end of the if'e box2
				if(((X[10]-2)<x<(X[10]+6))&&(y==Y[10]-3)){
					f=10;
				}// end of the if'e box4
				if(((X[9]-2)<x<(X[9]+6))&&(y==Y[9]-3)){
					f=10;
                gotoxy(X[9],Y[9]);
				}// end of the if'e box3			
			}//if'e khordan be jabe mario kocholo
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		break;}// end of the case bala
	case 'p': {
			if(f==0){// if'e bala raftan
				if(i==1){// khordan be jabe mario kockolo
				if((X[7]-2)<=x){
					if(x<=(X[7]+6)){
						if((Y[7])<=y){
							T[0]=1;
							X[0]=X[7];
							Y[0]=Y[7]-3;
					gotoxy(X[0],Y[0]);
					Garch(X[0],Y[0]);
						}}}}// end of the if'e box1
				y--;
				mariob(x,y,i,jahat);
			}//end of the if'e bala raftan
			if(f==10){//if'e payin omadan
				mariop(x,y,i,jahat);
				y++;
				if(i==1){
					if(y>=19)T[11]=0;}
				else if(y>=15)T[11]=0;
			}//end of the if'e payin omadan
			  

			//////////////////////////////////////////////////////////////ESLAH SHAVAD

			if(i==1){// khordan be jabe mario kockolo
				if((X[7]-2)<=x){
					if(x<=(X[7]+6)){
						if((Y[7])<=y){
							T[0]=1,X[0]=X[7],f=10,Y[0]=Y[7]-3;
					gotoxy(X[0],Y[0]);
					Garch(X[0],Y[0]);
						}}}// end of the if'e box1
				if(((X[8]-2)<x<(X[8]+6))&&(y==Y[8]-3)){
					f=10;
				}// end of the if'e box2
				if(((X[10]-2)<x<(X[10]+6))&&(y==Y[10]-3)){
					f=10;
				}// end of the if'e box4
				if(((X[9]-2)<x<(X[9]+6))&&(y==Y[9]-3)){
					f=10;
                gotoxy(X[9],Y[9]);
				}// end of the if'e box3			
			}//if'e khordan be jabe mario kocholo
			  
			  
			  
			  
			  }
	case 'w' :{// bala jolo

		
		
		
		
		
		
		
		
		
		
		
		
		
		break;}// end of the case bala
	case 'q' :{// bala agab
		
		
		
		break;}// end of the case bala
	case 't' :{// tir zadan jolo
		if(i==3){// chek kardane inke ham tir andaz bashad ham 
		T[5]=1,X[5]=x+4,Y[5]=y+4;
		tirjb(X[5],Y[5]);
		}
		break;}// end of the case bala
	case 'r' :{// tir zadan agab
		if(i==3){// chek kardane inke ham tir andaz bashad ham 
		T[6]=1,X[6]=x-4,Y[6]=y+4;
		tirab(X[6],Y[6]);
		}
		break;}// end of the case bala
	}// end of the switch
 }//end of the inner while
}while (vo!='e');//end of the main while
//************************************************      peyda kardane dadashesh      **************************************************************
//**************************************************************************************************************************************************

}// end of the main













void setColor(int Color)
{HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole,Color);}
void Garch(int x , int y){
		if ((x<74)||(y<21)){ 
		if((y<19)&&(x<51)){
			setColor(p);
			gotoxy(x,y);
			printf("  ___ \n");       
			gotoxy(x,++y);
		    printf(" +++++\n");
			setColor(n);
			gotoxy(x,++y);
			printf("  ||| \n");
			Sleep('w');}
		else	if((x>50)&&(y<20)){
			setColor(p);
			gotoxy(x,y);
			printf("     \n");       
			gotoxy(x,++y);
			printf("  ___ \n");       
			gotoxy(x,++y);
			printf(" +++++\n");
			setColor(n);
			gotoxy(x,++y);
			printf("  ||| \n");
			Sleep('w');}
		else {
			setColor(p);
			gotoxy(x,y);
			printf("  ___ \n");       
			gotoxy(x,++y);
			printf(" +++++\n");
			setColor(n);
			gotoxy(x,++y);
			printf("  ||| \n");
			Sleep('w');}}
}// end of the Garch
void marioj(int x, int y, int i){
	switch(i){
	case 1:{// keshidane kocholo
		--x;
		gotoxy(x,y);
		setColor(n);
		printf(" ...\n");
		gotoxy(x,++y);
		printf(" ...\n");
		gotoxy(x,++y);
		setColor(v);
		printf("  |-\n");
		gotoxy(x,++y);
		setColor(b);
		printf("  * \n");
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x--;
	    gotoxy(x,y);
		setColor(n);
		printf(" .....\n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".\n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".\n");
		gotoxy(x,++y);
		setColor(v);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" |_   \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" ***  \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x--;
	    gotoxy(x,y);
		setColor(z);
		printf(" #####   \n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".   \n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".    \n");
		gotoxy(x,++y);
		setColor(q);
		printf(" ||      \n");
		gotoxy(x,++y);
		printf(" ||==    \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" ||     \n");
		gotoxy(x,++y);
		printf(" ||     \n");
		gotoxy(x,++y);
		setColor(v);
		printf(" ***     \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
}//end of the marioj
void marioa(int x, int y, int i){
	switch(i){
	case 1:{// keshidane kocholo
		++x;
		gotoxy(x,y);
		setColor(n);
		printf("... \n");
		gotoxy(x,++y);
		printf("... \n");
		gotoxy(x,++y);
		setColor(v);
		printf("-| \n");
		gotoxy(x,++y);	
	    setColor(b);
		printf(" * \n");
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x++;
	    gotoxy(x,y);
		setColor(n);
		printf("..... \n");
		gotoxy(x,++y);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		setColor(v);
		printf("    | \n");
		gotoxy(x,++y);
		printf("   _| \n");
		gotoxy(x,++y);
		setColor(b);
		printf("    | \n");
		gotoxy(x,++y);
		printf("    | \n");
		gotoxy(x,++y);
		printf("  *** \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x++;
		gotoxy(x,y);
		setColor(z);
		printf("##### \n");
		gotoxy(x,++y);
		setColor(n);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		setColor(q);
		printf("   || \n");
		gotoxy(x,++y);
		printf(" ==|| \n");
		gotoxy(x,++y);
		setColor(b);
		printf("   || \n");
		gotoxy(x,++y);	
		printf("   || \n");
		gotoxy(x,++y);
		setColor(v);
		printf("  *** \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
}//end of the marioa
void tirjb(int x , int y){
	gotoxy(x,y);
	printf("*");
	gotoxy(x-1,y+1);
	printf(" ");
}
void tirjp(int x , int y){
	gotoxy(x,y);
	printf("*");
	gotoxy(x-1,y-1);
	printf(" ");
}
void tirab(int x , int y){
	gotoxy(x,y);
	printf("*");
	gotoxy(x+1,y+1);
	printf(" ");
}
void tirap(int x , int y){
	gotoxy(x,y);
	printf("*");
	gotoxy(x+1,y-1);
	printf(" ");
}
void Gol(int x , int y){
		   gotoxy(x,y);
		   setColor(v);
		   printf(" * \n");
		   gotoxy(x,++y);
           printf("***\n");
		   setColor(q);
		   gotoxy(x,++y);
           printf("\\|/\n");
}// end of the Gol
void box(int x , int y){
gotoxy(x,y);
printf("*****");
gotoxy(x,++y);
printf("*****");
gotoxy(x,++y);
printf("*****");
}
void mariob (int x, int y, int i,int ja){
	if (ja==1){
	switch(i){
	case 1:{// keshidane kocholo
		--x;
		gotoxy(x,y);
		setColor(n);
		printf(" ...\n");
		gotoxy(x,++y);
		printf(" ...\n");
		gotoxy(x,++y);
		setColor(v);
		printf("  |-\n");
		gotoxy(x,++y);
		setColor(b);
		printf("  * \n");
		gotoxy(x,++y);
		setColor(b);
		printf("    \n");
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x--;
	    gotoxy(x,y);
		setColor(n);
		printf(" .....\n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".\n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".\n");
		gotoxy(x,++y);
		setColor(v);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" |_   \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" |    \n");
		gotoxy(x,++y);
		printf(" ***  \n");
		gotoxy(x,++y);
		printf("      \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x--;
	    gotoxy(x,y);
		setColor(z);
		printf(" #####     \n");
		gotoxy(x,++y); 
		printf(" ..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".     \n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".      \n");
		gotoxy(x,++y);
		setColor(q);
		printf(" ||         \n");
		gotoxy(x,++y);
		printf(" ||==   \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" ||     \n");
		gotoxy(x,++y);
		printf(" ||    \n");
		gotoxy(x,++y);
		setColor(v);
		printf(" ***   \n");
		gotoxy(x,++y);
		printf("           \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
	}// end of the if
if(ja==-1){
  switch(i){
	case 1:{// keshidane kocholo
		++x;
		gotoxy(x,y);
		setColor(n);
		printf("... \n");
		gotoxy(x,++y);
		printf("... \n");
		gotoxy(x,++y);
		setColor(v);
		printf("-| \n");
		gotoxy(x,++y);	
	    setColor(b);
		printf(" * \n");
		gotoxy(x,++y);
	    setColor(b);
		printf("   \n");
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x++;
	    gotoxy(x,y);
		setColor(n);
		printf("..... \n");
		gotoxy(x,++y);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		setColor(v);
		printf("    | \n");
		gotoxy(x,++y);
		printf("   _| \n");
		gotoxy(x,++y);
		setColor(b);
		printf("    | \n");
		gotoxy(x,++y);
		printf("    | \n");
		gotoxy(x,++y);
		printf("  *** \n");
		gotoxy(x,++y);
		printf("      \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x++;
		gotoxy(x,y);
		setColor(z);
		printf("##### \n");
		gotoxy(x,++y);
		setColor(n);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		setColor(q);
		printf("   || \n");
		gotoxy(x,++y);
		printf(" ==|| \n");
		gotoxy(x,++y);
		setColor(b);
		printf("   || \n");
		gotoxy(x,++y);	
		printf("   || \n");
		gotoxy(x,++y);
		setColor(v);
		printf("  *** \n");
		gotoxy(x,++y);
		printf("      \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
	}// end of the if'e jahat -1
}// end of the mariob
void mariop (int x, int y, int i,int ja){
	if (ja==1){
	switch(i){
	case 1:{// keshidane kocholo
		--x;
		gotoxy(x,y);
		printf("     \n");
		gotoxy(x,++y);
		setColor(n);
		printf("... \n");
		gotoxy(x,++y);
		printf("... \n");
		gotoxy(x,++y);
		setColor(v);
		printf(" |- \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" *  \n");
		setColor(b);
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x--;
	    gotoxy(x,y);
		printf("      \n");
		gotoxy(x,++y);
		setColor(n);
		printf("..... \n");
		gotoxy(x,++y);
		printf("..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(". \n");
		gotoxy(x,++y);
		printf("..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(". \n");
		gotoxy(x,++y);
		setColor(v);
		printf("|    \n");
		gotoxy(x,++y);
		printf("|_   \n");
		gotoxy(x,++y);
		setColor(b);
		printf("|    \n");
		gotoxy(x,++y);
		printf("|    \n");
		gotoxy(x,++y);
		printf("***  \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x--;
	    gotoxy(x,y);
		printf("       \n");
		gotoxy(x,++y);
		setColor(z);
		printf(" ##### \n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(". \n");
		gotoxy(x,++y);
		printf(" ..");
		setColor(v);
		printf("__");
		setColor(n);
		printf(". \n");
		gotoxy(x,++y);
		setColor(q);
		printf(" ||    \n");
		gotoxy(x,++y);
		printf(" ||==  \n");
		gotoxy(x,++y);
		setColor(b);
		printf(" ||    \n");
		gotoxy(x,++y);
		printf(" ||    \n");
		gotoxy(x,++y);
		setColor(v);
		printf(" ***   \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
	}// end of the if
if(ja==-1){
  switch(i){
	case 1:{// keshidane kocholo
		++x;
		gotoxy(x,y);
		printf("    \n");
		gotoxy(x,++y);
		setColor(n);
		printf("... \n");
		gotoxy(x,++y);
		printf("... \n");
		gotoxy(x,++y);
		setColor(v);
		printf("-| \n");
		gotoxy(x,++y);	
	    setColor(b);
		printf(" * \n");
		Sleep('w');
		break;
		   }//end of the case 1
	case 2 :{// keshidane bozorg
		x++;
	    gotoxy(x,y);
		printf("      \n");
		gotoxy(x,++y);
		setColor(n);
		printf("..... \n");
		gotoxy(x,++y);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf(".. \n");
		gotoxy(x,++y);
		setColor(v);
		printf("    | \n");
		gotoxy(x,++y);
		printf("   _| \n");
		gotoxy(x,++y);
		setColor(b);
		printf("    | \n");
		gotoxy(x,++y);
		printf("    | \n");
		gotoxy(x,++y);
		printf("  *** \n");
		Sleep ('w');
		break;
			}//end of the case 2
	case 3 :{
		x++;
		gotoxy(x,y);
		printf("       \n");
		gotoxy(x,++y);
		setColor(z);
		printf("#####  \n");
		gotoxy(x,++y);
		setColor(n);
		printf(".");
		setColor(b);
		printf("@@");
		setColor(n);
		printf("..  \n");
		gotoxy(x,++y);
		printf(".");
		setColor(v);
		printf("__");
		setColor(n);
		printf("..  \n");
		gotoxy(x,++y);
		setColor(q);
		printf("   ||  \n");
		gotoxy(x,++y);
		printf(" ==||  \n");
		gotoxy(x,++y);
		setColor(b);
		printf("   ||  \n");
		gotoxy(x,++y);	
		printf("   ||  \n");
		gotoxy(x,++y);
		setColor(v);
		printf("  *** \n");
		Sleep('w');
		break;
			}//end of the case 3
	}//end of the switch
	}// end of the if'e jahat -1
}// end of the mariob