#include <stdio.h>




#define NUM 100
// #define ************************************************** yani ta inja ro chek kardi
// #define 88888888888888888888888888888888888888888888888888 Joda kardane ye gesmate barname
// #define 111* yani 3 khane gabl az ini ke gozashte shode ast ra gablan Player#1 ba 1 por karde ast va * jaye an garar migirad
void MoKaBa (int x);

int main(){
	int k,m,n,i,j,l,M,N,x,P,y=1/*cherage halge "amaliyate koli" (be %%%%% rojo'a shavad*/;
	// be khatere inke maro az shoma tarsondand jorat nakardam ye printf sade bezaram
	// Avali tedade satrhast(m) , dovomi tedade sotonhast(n) , sevomi tedade vorodihast
	scanf("%d %d %d",&m,&n,&k);
/*//	printf("%d %d %d",m,n,k);
//	printf(" !!!!!!!!!\n");
//  printf("! O  |  O !\n");
//	printf("!    |    !\n");
//	printf(" ! ----- ! \n");
//  printf("  !!!!!!!   \n");*/
	N=n,M=m;
	int Dot[NUM][NUM];
	for(i=0;i<NUM;i++){//sefr kardane araye asli (outer for)
		for(j=0;j<NUM;j++){// inner for
			Dot[i][j]=0;
		}// end of the inner for
	}// end of the outer for
	/*for(i=0;i<NUM;i++){//sefr kardane motegayer (outer for)
		for(j=0;j<NUM;j++){// inner for
			printf("%d", Dot[i][j]);
		}// end of the inner for
	}// end of the outer for*/

	for(i=0;i<k;i++){// for1 "amaliyate koli" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
		scanf("%d" , &n);
		l=i%2;
		l++;

		//8888888888888888888888888888888888888888888888888888 Megdar dehiye dorost 88888888888888888888888888888888888
		if(l==1){// if Player#1
			for(j=m;j>=0;j--){// for2
				if(Dot[j][n]==0){
					Dot[j][n]=1;
					break;
				}// end of the if
		
			}//end of the for2
		}//end of the if Player#1


		if(l==2){// if Player#2
			for(j=m;j>=0;j--){// for2
				if(Dot[j][n]==0){
					Dot[j][n]=2;
					break;
				}// end of the if
		
			}//end of the for2
		}//end of the if Player#2
		//8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
	//*****************************************************************************************************************
		
		if(l==1){// mainIf1 ofogi
			if((Dot[j][n-3]==1)&&(Dot[j][n-2]==1)&&(Dot[j][n-1]==1)&&(Dot[j][n]==1)){//if 111*
				x=1;
				y=0;
			}//end of the if 111*
			if((Dot[j][n-2]==1)&&(Dot[j][n-1]==1)&&(Dot[j][n]==1)&&(Dot[j][n+1]==1)){//if 11*1
				x=1;
				y=0;
			}//end of the if 11*1
			if((Dot[j][n-1]==1)&&(Dot[j][n]==1)&&(Dot[j][n+1]==1)&&(Dot[j][n+2]==1)){//if 1*11
				x=1;
				y=0;
			}//end of the if 1*11
			if((Dot[j][n]==1)&&(Dot[j][n+1]==1)&&(Dot[j][n+2]==1)&&(Dot[j][n+3]==1)){//if *111
				x=1;
				y=0;
			}//end of the if *111

		}// end of the mainIf1
		
		
		
		if(l==2){// mainIf2 ofogi
			if((Dot[j][n-3]==2)&&(Dot[j][n-2]==2)&&(Dot[j][n-1]==2)&&(Dot[j][n]==2)){//if 222*
				x=2;
				y=0;
			}//end of the if 222*
			if((Dot[j][n-2]==2)&&(Dot[j][n-1]==2)&&(Dot[j][n]==2)&&(Dot[j][n+1]==2)){//if 22*2
				x=2;
				y=0;
			}//end of the if 22*2
			if((Dot[j][n-1]==2)&&(Dot[j][n]==2)&&(Dot[j][n+1]==2)&&(Dot[j][n+2]==2)){//if 2*22
				x=2;
				y=0;
			}//end of the if 2*22
			if((Dot[j][n]==2)&&(Dot[j][n+1]==2)&&(Dot[j][n+2]==2)&&(Dot[j][n+3]==2)){//if *222
				x=2;
				y=0;
			}//end of the if *222

		}// end of the mainIf2

		if(l==1){// mainIf1 orib
			if((Dot[j-3][n-3]==1)&&(Dot[j-2][n-2]==1)&&(Dot[j-1][n-1]==1)&&(Dot[j][n]==1)){//if 111*
				x=1;
				y=0;
			}//end of the if 111*
			if((Dot[j-2][n-2]==1)&&(Dot[j-1][n-1]==1)&&(Dot[j][n]==1)&&(Dot[j+1][n+1]==1)){//if 11*1
				x=1;
				y=0;
			}//end of the if 11*1
			if((Dot[j-1][n-1]==1)&&(Dot[j][n]==1)&&(Dot[j+1][n+1]==1)&&(Dot[j+2][n+2]==1)){//if 1*11
				x=1;
				y=0;
			}//end of the if 1*11
			if((Dot[j][n]==1)&&(Dot[j+1][n+1]==1)&&(Dot[j+2][n+2]==1)&&(Dot[j+3][n+3]==1)){//if *111
				x=1;
				y=0;
			}//end of the if *111

		}// end of the mainIf1

		if(l==2){// mainIf2 orib
			if((Dot[j-3][n-3]==2)&&(Dot[j-2][n-2]==2)&&(Dot[j-1][n-1]==2)&&(Dot[j][n]==2)){//if 222*
				x=2;
				y=0;
			}//end of the if 222*
			if((Dot[j-2][n-2]==2)&&(Dot[j-1][n-1]==2)&&(Dot[j][n]==2)&&(Dot[j+1][n+1]==2)){//if 22*2
				x=2;
				y=0;
			}//end of the if 22*2
			if((Dot[j-1][n-1]==2)&&(Dot[j][n]==2)&&(Dot[j+1][n+1]==2)&&(Dot[j+2][n+2]==2)){//if 2*22
				x=2;
				y=0;
			}//end of the if 2*22
			if((Dot[j][n]==2)&&(Dot[j+1][n+1]==2)&&(Dot[j+2][n+2]==2)&&(Dot[j+3][n+3]==2)){//if *222
				x=2;
				y=0;
			}//end of the if *222
		}//end of the mainIf2 orib
			
		if(l==1){//mainIf1 amodi
			if((Dot[j][n]==1)&&(Dot[j+1][n]==1)&&(Dot[j+2][n]==1)&&(Dot[j+3][n]==1)){// inner if
			x=1;
			y=0;
			}//end of the inner if 
		}//end of the mainIf1 amodi
		if(l==2){//mainIf2 amodi
			if((Dot[j][n]==2)&&(Dot[j+1][n]==2)&&(Dot[j+2][n]==2)&&(Dot[j+3][n]==2)){// inner if
			x=2;
			y=0;
			}//end of the inner if 
		}//end of the mainIf2 amodi
	
	
		if(y==0) break;
		if(y==1) x=3;




	}//end of the for1  "amaliyate koli"
	for(i;i<(k-1);i++){
		scanf("%d" , &n);
	}
	if(x==3){// chek kardane The game result was tie!
		P=M*N;
		if(k>=P) x=4;
	}// end of the chek kardane The game result was tie!
	MoKaBa (x);

	n=N , m=M;
	for(i=1;i<=m;i++){//sefr kardane motegayer (outer for)
		for(j=1;j<=n;j++){// inner for
			printf(" %d", Dot[i][j]);
		}// end of the inner for
		printf("\n");
	}// end of the outer for*/


}// end of the main


void MoKaBa (int x){
	switch (x){
	case 1 :
		printf("Player#1 wins.\n");
		break;
	case 2 :
		printf("Player#2 wins.\n");
		break;
	case 3 :
		printf("Incomplete game...\n");
		break;
	case 4 :
		printf("The game result was tie!\n");
		break;
	}// end of the switch
}// end of the MoKaBa
/*int MoKaMa (int l , int n,int m){// Moshakhas Kardane Makan
	int Dot[NUM][NUM],i,j;
	if(l==1){// if Player#1
		for(j=m;j>=0;j--){// for2
			if(Dot[j][n]==0){
				Dot[j][n]=1;
				return j;
			}// end of the if
		
			}//end of the for2
		}//end of the if Player#1


		if(l==2){// if Player#2
			for(j=m;j>=0;j--){// for2
				if(Dot[j][n]==0){
					Dot[j][n]=2;
					return j;
				}// end of the if
		
			}//end of the for2
		}//end of the if Player#2
	n=4 , m=4;
	for(i=1;i<=m;i++){//sefr kardane motegayer (outer for)
		for(j=1;j<=n;j++){// inner for
			printf(" %d", Dot[i][j]);
		}// end of the inner for
		printf("\n");
	}// end of the outer for
	}// end of the MoKaMa*/
