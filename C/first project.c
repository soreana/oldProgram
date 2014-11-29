/*
 * untitled.c
 * 
 * Copyright 2012 Sinai Kashipazha <sinai@debian>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * #FFFFFF
 */


#include <stdio.h>
#define SIZE 9

int main(int argc, char **argv)
{int i,j,k,z;
int  table[SIZE][SIZE];
  for (i=0;i<SIZE;i++){// for 1
	  for (j=0;j<SIZE;j++){//for 2
	    table[i][j]=(i+1)*(j+1);
	  }//end of the for 2
  }// end of the for 1
for (i=0;i<SIZE;i++){// for 3
  for (j=0; j<SIZE; j++){// for 4
	k=1;
	if(table[i][j]/10==0){
		 k=2;}//end of the if
		 printf("%d",table[i][j]);
	for(z=1;z<=k;z++){//for 5	
		printf(" ");}//end of the for 5
		
                
}//end of the for 4
printf("\n");
}//end of the for 3
return 0;
}//end of the program#FFFFFF
