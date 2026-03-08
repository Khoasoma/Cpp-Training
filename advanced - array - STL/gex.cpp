#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	if (n <= 0){
		cout << 1 << "\n";
		return;
	}
	long long x = sqrt(n);
	while(x * x < n){
		x++;
	}
	while (x > 1 && (x - 1)* (x - 1)>= n){
		x--;
	}
	cout << x << "\n";
}

int main(){
	int q; cin >> q;
	while(q--){
		solve();
	}
	return 0;
}