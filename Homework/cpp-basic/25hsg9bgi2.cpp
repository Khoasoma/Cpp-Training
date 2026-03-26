#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 7;
bool is_prime[MAXN];


void sieve(){
	memset(is_prime, true , sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i < MAXN; i++){
		if (is_prime[i]){
			for(int j = i * i; j < MAXN; j+=i)
				is_prime[j] =  false;
		}
	}
}


bool isPerfectSquare(long long n){
	if (n < 4) return false;
	long long r = round(sqrt(n));
	return r * r == n;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    sieve();

    int n;
    cin >> n;
    while (n--){
    	long long a;
    	cin >> a;

    	long long r = round(sqrt(a));

    	if (r * r == a && r < MAXN && is_prime[r]){
    		cout << "YES" << "\n";
    	} else {
    		cout << "NO" << "\n";
    	}

    }

    return 0;
}