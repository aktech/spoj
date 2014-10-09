#include <iostream>
#include <math.h>

using namespace std;

int s[32000];
void Sieve(int l) {  //Sieve Function to find Primes till sqrt(n)
    for(int i=0; i<=l+1; i++) //Initialising all to Prime
        s[i] = 1;
    s[0] = 0;
    s[1] = 0;
    for(int i=2; i<(sqrt(l)); i++)
            if(s[i] == 1)
                for(int j = 2 ; i*j <= l; j++)
                    s[i*j] = 0;
}
int main()
{
   int t,m,n,a[100000],l;

    cin >> t;              //Input Test Cases
    while(t--) {

        for(int i=0; i<100000; i++) 
            a[i] = 1;
        cin >> m >> n;    // Input Range for finding primes (m,n)
        l = sqrt(n);
        Sieve(l);
  // Applying Segmented Sieve:  START
        for(int i=2; i <= l; i++) {
            if(s[i] == 1) {
                for(int j = (m/i) ; i*j<=n; j++)
                    if(( (i*j)-m ) >= 0 && j!=1)
                        a[(i*j) - m] = 0;           // Mapping (m <--> 0) & (n <--> n-m)
            }
        }
  // Applying Segmented Sieve   END
        for(int k=0; k <= (n-m); k++)       //Prints Final list of primes mapped from (m,n) to (0,n-m)
            if(a[k] == 1 && (k+m)!=1)
                cout << k+m << endl;
    }
    return 0;
}
