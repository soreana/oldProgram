#include <stdio.h>
#include <windows.h>
#define O 1
#define TH 3
#define TW 2
#define SMBH 5  // SUPER MARIO BOZORG HEAD
#define SMBG 2  // SUPER MARIO BOZORG GOOOOOOSH
#define SMBC 2  // SUPER MARIO BOZORG CHESHM
#define SMBL 2  // SUPER MARIO BOZORG LAB
#define SMBT 2  // SUPER MARIO BOZORG TANE
#define p 5/* range sorati(pink)*/
#define q 10/*range sabz(green)*/
#define v 12/* range ghermez(red)*/
#define t 7/*range sefid(white)*/
#define b 9/*range abi(blue)*/
#define n 6/*range ghahvei(brown)*/

void setColor(int Color)
{HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole,Color);}

int main (){ 
char ch;
int i=0 ,x,w,l,j,k,h,a,y,z,m;
while(a=1){	// Ino intori gozashtam ta tanha rahe khoroj az barname vared kardane 'e' bashe
 setColor(t);
printf("Lotfan ba tavajoh be rahnamayi payin vorodi ra entekhab konid:\n");
printf("Rahnamayi : flower= Gol = <f> ,mushroom = Garch = <m> , human = Adam = <h> , box = Jabe = <b> & exit = Khoruj = <e>\n");
scanf("%c", & ch);
i++;            
	    switch (ch){ // switch 1	     
		              if (i != 1){
					   setColor(t); // mikhad bebine bare avale ke barname ejra mishe ya na age bar aval bashe ina chap nemishan
                      printf("Lotfan ba tavajoh be rahnamayi payin vorodi ra entekhab konid:\n");
                      printf("Rahnamayi : flower = <f> ,mushroom = <m> ,human = <h> , box = <b> & exit = <e>\n");
                      scanf("%c",  &ch );
                     } // Tamoom shodane if
        
           case 'e':{// Tadaroke yek khoda hafezi be yad mandani
           printf(" Good  Bye\n");
           printf(" !!!!!!!!!\n");
           printf("! O  |  O !\n");
           printf("!    |    !\n");
           printf(" ! ----- ! \n");
           printf("  !!!!!!!   \n");
           scanf("%d" , &i); // barnameye man Dev c++ nemidonam che tori ejrash konam ke az barname nayad biroon 
                                  // barahamin in dastoro mizaran ta enter nazadam nayad biroon
           return 0;
           }// end of case e
           case 'f':{ // Tarahi shekle gol*/
           setColor(p);
           printf(" * \n");
           printf("***\n");
           setColor(t);
           printf(" | \n");
           printf("\\|/\n");
           break;
           }//  end of case f
           case 'm':{// Tarahi Garch
            setColor(v);
           printf(" ___ \n");
           printf("+++++\n");
            setColor(b);
           printf(" ||| \n");
           break;
           }// end of case m
		   case 'h':{ // Tarahi human
		    setColor(t);
		   printf("Lotfan ba tavajoh be rahnamayi payin karakteri\n	ke mikhahid namayesh dade shavad ra moshakhas konid\n");
		   printf("Rahnama: Kochak = <1> , Bozorg = <2> & Tirandaz = <3> \n");
		   scanf("%d",&m);
		   switch (m){ // switch 2
		           case 1:{//	Tarahi Shekle mario'ye kocholo
		           x=0;
		           y=0;
		           for(y= O;/*In harfe O ast na adade 0 */y<=TW ; y++ ){// for 1   az inja ta entehaye in for kale adamak ra chap mikonad
		           for(x= O;/*In harfe O ast na adade 0 */x<= TH ; x++ ){// for 2
		            setColor(b);
		           printf(".");	
		           }//end of for 2
		           printf("\n");
				   }// end of for 1
				   x=1;
		           if(x=1){// Khate dovome taneye adamak ra chap mikonad
		           for (y=O;/*In harfe O ast na adade 0 */'Y'<= TH; y++ ){// for 3
		            switch(y){// switch 3
		        	   case 1:{
		        	   printf(" ");			  
					   break;	
		               }// end of case 1
				       case 2:{
				       	 setColor(v);
				       printf("|");	
				       break;
				       }//end of case 2
					   case 3:{
					   printf("-");	
					   break;
					   }// end of case 3 		
			       }// end of switch 3
		           }// end of for 3
		           x=2;//Bara khodam alamat gozashtam
		           }// end of if
		   		   printf("\n");
		   		   y=0;
		   		   for (y=O;/*In harfe O ast na adade 0 */ y<= TW; y++ ){ //for 4
		   		   	  switch (y) {// switch 4
		   		   	        case 1:{
		   		   	        	  printf(" ");
		   		   	        	  break;
		   		   	             }// end of case 1
							case 2:{
								printf("*\n");
								break;
						   	}// end of case 2
				      }// end of switch 4
		   		   }// end of for 4
		   		   break;	
		           }//end of case '1'														
		            case 2:{// Tarahi shekle mario'ye bozorg
		            setColor(v);
		            y=0;
					   for (y= O ;	y<= SMBH ; y++ ){
					   	printf(".");
					   }
					    printf("\n");				
                       y=0;
					   for (y=O;/*In harfe O ast na adade 0 */y<= SMBG; y++ ){// chape goshe Mario'ye bozorg
					   	printf(".");
					   } //end of for									
 					   for (y=O;/*In harfe O ast na adade 0 */y<= SMBC; y++ ){// chape cheshme Mario'ye bozorg
					   	printf("@");
					   } //end of for				
			           printf(".\n"); // chape damage mari
			            for (y=O;/*In harfe O ast na adade 0 */y<= SMBG; y++ ){// chape goshe Mario'ye bozorg
					   	printf(".");
					   } //end of for
					    for (y=O;/*In harfe O ast na adade 0 */y<= SMBL; y++ ){// chape labe Mario'ye bozorg
					   	printf("_");
					   } //end of for		
					   printf(".\n");// chape choneye mario
					   z=1;
	                    for (x=O;/*In harfe O ast na adade 0 */x<= O; x++ ){// chape Tane Mario'ye bozorg
					   	printf("|");
					   	z++;
						if (z=2)
						printf("\n"); 				
			           }// end of for
			          for (y=O;/*In harfe O ast na adade 0 */y<= O; y++ ){// chape paye Mario'ye bozorg
					   	printf("|_\n");
					   }
			        	for (y=O;/*In harfe O ast na adade 0 */y<= TW; y++ ){// chape paye Mario'ye bozorg
					   	printf("|\n");
					   }
					   
					 setColor(t);
					   
					   for (y=O;/*In harfe O ast na adade 0 */y<= TH; y++ ){// chape Daste Mario'ye tirandaz
					   	printf("*");
					    }
						printf("\n");//end of for
		   			break;
		     		}//end of case '2'
		   		    case 3:{// Tarahi shekle mario'ye tirandaz
		   		    setColor(b);
	                   y=0;
					   for (y= O ;	y<= SMBH ; y++ ){
					   	printf("#");
					   } 
					    printf("\n");
						setColor(t);				
                       y=0;
					   for (y=O;/*In harfe O ast na adade 0 */y<= SMBG; y++ ){// chape goshe Mario'ye tirandaz
					   	printf(".");
					   } 									
 					   for (y=O;/*In harfe O ast na adade 0 */y<= SMBC; y++ ){// chape cheshme Mario'ye tirandaz
					   	printf("@");
					   } 				
			           printf(".\n"); // chape damage mario
			            for (y=O;/*In harfe O ast na adade 0 */y<= SMBG; y++ ){// chape goshe Mario'ye tirandaz
					   	printf(".");
					   } 
					    for (y=O;/*In harfe O ast na adade 0 */y<= SMBL; y++ ){// chape labe Mario'ye tirandaz
					   	printf("_");
					   } 		
					   printf(".\n");// chape choneye mario
					   z=1;
		     		   printf("||\n");
			           printf("||");
			           for (y=O;/*In harfe O ast na adade 0 */y<= SMBT; y++ ){// chape Daste Mario'ye tirandaz
					   	printf("=");
					    }//end of for
					    printf("\n");
			 		    for (y=O;/*In harfe O ast na adade 0 */y<= SMBT; y++ ){// chape Tane Mario'ye tirandaz
	                    for (x=O;/*In harfe O ast na adade 0 */x<= SMBT; x++ ){// chape Tane Mario'ye tirandaz
					   	printf("|");
					    }//end of for
						printf("\n"); 				
			           }// end of for
					   
					   for (y=O;/*In harfe O ast na adade 0 */y<= TH; y++ ){// chape Daste Mario'ye tirandaz
					   setColor(v);
					   	printf("*");
					    }//end of for
                    	printf("\n");
		   			   break;
		   			   }//end of case '3'
		   		default:{// dadane payame tashakor be TA'ye marbote
		   		 setColor(t);
		   		    printf("Ba Arze salam va khaste nabashid khedmate TA'ye aziz\n");
		       		printf("Beheton	tabrik migam voroodiro eshtebah vared kardin\n");                 
		   			printf("Man age jaye ostad bodam mifrestedameton avale ebtedayi adadaro	dobare beheton yad bedan\n");
		   			printf("Bebakhshid in fagat ye shokhi bod\n");
             	  }// end of default
		   	  }// end of switch  2
		   break;
		   }// end of case h
		   case 'b':{// Tarahi Box
		    setColor(t);
		   printf("Lotfen tol'e box ra vared konid:\n");
		   printf("Tavajoh: Manzoor az tol tedad * ha dar yek khat ast.\n"); // Chon in tarife tol va arz ba tarif asli farg dare niyazi be
		   l= -1;// mikham bebinam adad vared karde ya na                    // chek kardane inke tol bozorgtar az arz ast nist  
		   scanf("%d", &l);
			if (l==-1){ // Shookhi ba TA
			printf("TA azize  maro niga  !!!!!!! \n");
            printf("Adad dorost vared nakardi!\n");
            printf("Bara inke jarime shi?????\n");
            printf("Az barname dar miyam.........\n");
     	    printf(" Good  Bye\n");
            printf(" !!!!!!!!!\n");
            printf("! O  |  O !\n");
            printf("!    |    !\n");
            printf(" !       ! \n");
            printf(" ! HaHaha! \n");	
            printf("  !!!!!!!  \n");	
            scanf("%d" , &i); // barnameye man Dev c++ nemidonam che tori ejrash konam ke az barname nayad biroon 
                              // barahamin in dastoro mizaran ta enter nazadam nayad biroon
            return 0;
			}
			 setColor(t);
		   printf("Lotfen Arz'e box ra vared konid:\n");
		   printf("Tavajoh: Manzoor az Arz tedad khathaye * dar ast.\n");// Chon in tarife tol va arz ba tarif asli farg dare niyazi be
		   w= -1;// mikham bebinam adad dorost vared karde ya na         // chek kardane inke tol bozorgtar az arz ast nist 
		   scanf("%d", &w);
		   	if (w==-1){ // Shookhi ba TA
			   printf("TA  maro niga  !!!!!!! \n");
               printf("Adad dorost vared nakardi!\n");
               printf("Bara inke jarime shi?????\n");
               printf("Az barname dar miyam.........\n");
           	   printf(" Good  Bye\n");
               printf(" !!!!!!!!!\n");
               printf("! O  |  O !\n");
               printf("!    |    !\n");
               printf(" !       ! \n");
               printf(" ! HaHaha! \n");	
               printf("  !!!!!!!  \n");
               scanf("%d" , &i); // barnameye man Dev c++ nemidonam che tori ejrash konam ke az barname nayad biroon 
                                 // barahamin in dastoro mizaran ta enter nazadam nayad biroon
               return 0;
			  }
			   for (j=1;j<=w;j++){
			   	for(k=1; k<=l; k++){
			   	   printf("*");
			   	   }// end of the for
			   printf("\n");
			   }// end of the for
		   	
		   break;
		   }// end of case b      
           default:{
           	 setColor(t);
              printf("Masalan TA yi tooooooooooooooooo !!!!!!! \n");
              printf("Voroodi dorost vared kon\n");
           continue;   
           } // end of default
      } // end of switch 1
}//end of while
return 0;
}// end of program
