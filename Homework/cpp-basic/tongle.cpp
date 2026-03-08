#include <bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n ; cin >> n;
	vector<int> a(n);
	long long tong = 0;
	for(int i = 0 ; i < n; i++){ 
		cin >> a[i];
	if (a[i] % 2 != 0) tong += a[i];
}
	cout << tong;

}	