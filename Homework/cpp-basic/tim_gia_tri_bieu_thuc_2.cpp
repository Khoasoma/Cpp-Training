#include <bits/stdc++.h>
using namespace std;

int main(){
    int a ,  b , c;
    cin >> a >> b >> c;
    if( 0<a,b,c){
        int S = a*( b + c ) + b*(a+c);
        cout << S;
    }
    return 0;
}