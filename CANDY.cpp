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
