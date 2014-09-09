#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,squares;
    while(1){
        cin >> n;
        if(n == 0)
        	break;
        squares = (n*(n+1)*(2*n+1)) / 6;
        cout << squares <<endl;
    }

    return 0;
}
