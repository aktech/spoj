/* Spoj Problem Solution: FCTRL */
/*
 *  Copyright (C) 2000-2014  Amit Kumar <dtu.amit@gmail.com> <www.iamit.in>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int cases,n,Tcases,k,i;
	scanf("%d",&Tcases);
	for(cases=0; cases<Tcases; cases++)
	{   k = 0;
	    i=1;
		scanf("%d",&n);
		while(n >= pow(5,i))
		{
			k = k + (n)/(pow(5,i));
			i++;
			}
			printf("%d\n", k);
		}
		return 0;
}
