#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
    int col,len,k,j,m;
    char a[200];

    while(1) {
        cin >> col;
        if(col == 0)
            break;
        scanf("%s", a);
        len = strlen(a);
        k = 1;

        //Plaintext Func Start
        for(int i=0;i<col;i++){
            j = i;
            while(j < len) {
                m = (j + (2*col) - k);
                printf("%c", a[j]);
                if( m < len)
                    printf("%c",a[m]);
                j = j + (2*col); }
            k = k + 2;
        }
        printf("\n");
        //Plaintext Func End
    }
return 0;
}
