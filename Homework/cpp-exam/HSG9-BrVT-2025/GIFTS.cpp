#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("GIFTS.INP","r",stdin);
    freopen("GIFTS.OUT","w",stdout);
    long long x , y;
    cin >> x >> y;
    long long d = __gcd(x,y);
    int so_cach = 0;
    for(long long i = 1; i * i < d; i++){
    	if(d % i == 0){
    		so_cach++;
    if(i != d % i){
    	so_cach++;
    }
    }
}
	cout << so_cach;
    return 0;
}