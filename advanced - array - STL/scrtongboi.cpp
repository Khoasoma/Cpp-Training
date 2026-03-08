#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum (ll n,ll k){
	if ( n < k ) return 0;
	long long m = n / k;
	return k * (m * (m + 1)/ 2);
}

int main(){
	ll l,r,k;

	cin >> l >> r >> k;

	ll ans = sum(r , k) - sum(l - 1,k);
	cout << ans ;
}