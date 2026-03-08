#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, x; cin >> n >> x;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		long long temp;
		cin >> temp;
		if (temp == x) cnt++;
	}		
	cout << cnt;
	return 0;
}