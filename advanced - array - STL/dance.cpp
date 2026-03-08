#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll M = 1e9 + 7;

ll power(ll base,ll exp){
	ll ans = 1;
	base %= M;
	while (exp > 0){
		if (exp % 2 == 1) ans = ( ans * base ) % M;
		base = (base * base) % M;
		exp /= 2;
	}
	return ans;
}

ll modulo(ll n){
	return power(n, M - 2);
}

int main (){
	int n , k;
	cin >> n >> k;
	vector<ll> fact(n + 1);

	fact[0] = 1;
	for ( int i = 1;i <= n; i++){
		fact[i] = (fact[i - 1]* i) % M;
	}
	ll tu = fact[n];
	ll mau = 1;
	for(int i = 0;i < k;i++){
		int a;
		cin >> a;
		mau = (mau * fact[a])% M;
	}
	ll ans = (tu * modulo(mau)) % M;
	cout << ans;
	return 0;
}

