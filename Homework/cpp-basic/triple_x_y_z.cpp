#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for(long long i = 5;i*i <= n;i +=6 ){
		if (n%i == 0 || n % (i + 2) == 0) return false
	}
	return true;
}

int main(){
	long long n;
	if (!(cin >> N)) return 0;

	bool found = false; long long x = 2;

	long long limit_y = 0;
	if (N > 4){
		limit_y = sqrt(N - 4);
	}

	for ( long long y = 3; y <= limit_y ; y+=2 ){
		if (isPrime(z)){
			cout << x << " " << y << " " << z << \n;
			found = true;
		}
	}
	if (!found) {
		cout << -1;
	}
	return 0;
}