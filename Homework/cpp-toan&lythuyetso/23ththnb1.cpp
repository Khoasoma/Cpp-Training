#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll floorDiv2(ll n){
	if (n >= 0) return n /2;
	return ( n % 2 != 0)  ? (n / 2 -1) : (n /2);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll L,R,T;
    cin >> L >> R >> T;
    if (max(L, T - R) <= floorDiv2(T - 1)){
    	cout << ( floorDiv2(T - 1) - max(L,T - R) + 1);
    } else {
    	cout << 0;
    }

    return 0;
}