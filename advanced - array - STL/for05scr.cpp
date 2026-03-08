#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;

	long long sum = 0;
	for(long long i = 1;i*i <= n; i++){
		if (n% i == 0){
			sum +=i;
			if (i * i != n){
				sum += n/i;
			}
		}
	}
	if (sum == 2 * n) cout << "YES";
	else cout << "NO";
}