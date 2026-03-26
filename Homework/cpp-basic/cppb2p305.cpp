#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 7;
int isPrime[MAX];

void sieve(int n){
	memset ( isPrime, true , sizeof(isPrime));
	isPrime[0] = isPrime [1] = false;

	for(int i = 4; i <= n;i+=2) isPrime[i] = false;

	for(int i = 4; i <= n;i+=2){
		if(isPrime[i]){
			for(int j = i * i; j <= 2*n ; j+=2) isPrime[j] = false;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;

    while(t--){
    	int n ; cin >> n;
    	sieve(n);
    	if(isPrime[n]){
    		
    	}
    }


    return 0;
}