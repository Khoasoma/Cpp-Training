#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int prime[100000];

void sieve(){
	//mark tat ca so tu 0 -> la nt
	for ( int i = 0;i< 100000;i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2;i<= 1000;i++){
		if(prime[i]){
			for(int j=i*i;i < j;i+=j){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	sieve();
	int n;
	cin >> n;
	for(int i = 0;i<=n;i++){
		if(prime[i])
			cout << i;
	}
}