#include <bits/stdc++.h>

using namespace std;

const int MAX = 100000 + 5;
bool isPrime[MAX];

void sieve(int n) {
    memset (isPrime , true , sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;

    for (int i = 2;i * i <= n; i++){
    	if(isPrime[i]){
    		for (int j = i * i; j <= n; j+=i)
    			isPrime[j] = false;
    	}
    }
}

bool isValid(int n){
	int sum = 0;
	while (n > 0) {
		int d = n % 10;
		if (d == 0) return false;
		sum += d;
		n /= 10;
	}
	return sum % 2 == 0;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;

    cin >> a >> b;

    sieve(b);

    for (int i = a; i <= b; i++){
    	if (isPrime[i] && isValid(i)){
    		cout << i << " "; 
    	}
    }
    return 0;
}