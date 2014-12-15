/* Spoj Problem Solution: TOANDFRO *
 *
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
    int N, i=1,j=1,k=0;
    cin >> N;
    for(i=1; i<=N; i++)
        for(j=i; i*j<=N; j++)
            k++;
    cout << k <<endl;
    return 0;
}
