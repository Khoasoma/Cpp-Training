#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a , b , c; cin >> a >> b >> c;
	if(a == b && b == c && a % 2 == 0){
		cout << "-1";
		return 0;
	}
	int cnt = 0;
	while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
		long long new_a = b / 2 + c / 2;
		long long new_b = a / 2 + c / 2;
		long long new_c = b / 2 + a / 2;

		a = new_a;
		b = new_b;
		c = new_c;

		cnt ++;
	}
	cout << cnt;
	return 0;
}
