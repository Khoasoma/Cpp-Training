#include <bits/stdc++.h>

using namespace std;


const int MAXN = 1e7 + 5;
bool is_prime[MAXN];
void sieve(int n) {
    memset(is_prime, true , sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;

    for(int i = 4; i <= n;i+=2) is_prime[i] = false;

    for(int i = 4;i * i <= n;i+=2){
    	if(is_prime[i])
    		for(int j = i * i;j <= n * 2;j+=2) is_prime[j] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 100;
    sieve(n);
    for (int i = 0;i <= n;i++){
    	if(is_prime[i])
    		cout << i << " ";
    }

    return 0;
}