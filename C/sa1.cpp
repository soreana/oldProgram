/*
 * untitled.c
 * 
 * Copyright 2013 Sinai Kashipazha <sinai@debian>
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
 * 
 */


#include <stdio.h>
#define size 21

int main(int argc, char **argv)
{char VO[size][size];
int j
;
for(j=1;j<=size;j++){
VO[1][j]=getchar();	
}//end of the inpute for
	
for(j=1;j<=size;j++){
printf("%c",VO[1][j]);	
}//end of the inpute for
	
	return 0;
}

