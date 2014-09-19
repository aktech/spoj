/* Spoj Problem Solution: CANDY (in C++) */
/*
 *  Copyright (C) 2000-2014  Amit Kumar <dtu.amit@gmail.com> <www.iamit.in>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 */

#include <iostream>

using namespace std;

    int n,a[10000], ans[10000],j=0,i;

 int getMoves(int candy[],int l)
 {
     int sum=0,moves=0;
     for(int x=0; x<l; x++)
     	sum = sum + candy[x];

     if (sum%l !=0)
     	return -1;

     else
     {
         int avg = sum/l;
         for(int x=0;x<l;x++){
             if(candy[x]<avg)
             	moves = moves + (avg-candy[x]); }
     }
     return moves;
 }
 
int main()
{

    while(1) {
        cin>>n;
        if(n == -1){
            for (i=0; i<j; i++) 
                cout<<ans[i]<<endl;
                break; }
        for(i = 0; i<n ; i++)
            cin>>a[i];
        ans[j] = getMoves(a,n);
        j++;
    }
    return 0;
}
