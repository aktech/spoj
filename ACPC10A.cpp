#include <iostream>

using namespace std;

int main()
{
    float a,b,c,nextTerm;
    while(1) {
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0)
            break;
        if( (b-a) == (c-b) ) {
            nextTerm = c + b -a ;
            cout<<"AP " << nextTerm << endl;}
        else {
        nextTerm = (b*c)/a ;
        cout<<"GP " << (int)nextTerm << endl; }
    }
    return 0;
}
