/* Spoj Problem Solution: NSTEPS */
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

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)  {
        cin>>x>>y;
        if(x==y || x-y==2) {
           if(x%2 == 0)
               cout<<x+y<<endl;
           else
               cout<<x+y-1<<endl;}

        else
            cout<<"No Number"<<endl;
    }
return 0;
}

