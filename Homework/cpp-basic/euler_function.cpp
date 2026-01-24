#include <bits/stdc++.h>


#define ll long long

ll gcd(ll a,ll b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}

ll phi(ll n){
	ll res = n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0) n/=i;
			res -= res/i;
		}
	}
	if(n!=1){
		res -= res/n;
	}
	return res;
}


int main(){
	ll a;
	scanf("%lld",&a);
	printf("%lld",phi(a));
}