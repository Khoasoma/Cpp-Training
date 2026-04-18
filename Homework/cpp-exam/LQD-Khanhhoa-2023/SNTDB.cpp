#include <bits/stdc++.h>

using namespace std;

const	int MAXN = 1e7 + 5;
bool isPrime[MAXN];


void solve() {
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for(int i = 4; i < MAXN; i += 2){
        isPrime[i] = false;
    }
    for(int i = 3; i * i < MAXN; i+=2){
    	if(isPrime[i]){
    	for(int j = i*i;j < MAXN ;j+= i * 2){
    		isPrime[j] = false;
    	}
    	}
    }
}

int sumdiv(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("SNTDB.out","w",stdout);
    int l , r;
    cin >> l >> r;
    solve();
    for(int i = l;i <= r;i++){
    	if(isPrime[i]){
    		int sum = sumdiv(i);
    		if(isPrime[sum]){
    			cout << i << " ";
    		}
    	}
    }
    return 0;
}
