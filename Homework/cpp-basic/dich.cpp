#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c; cin >> a >> b >> c;
	bool tamgiac = (a + b > c ) && (a + c > b) && (b + c > a);

	bool can = (a != b) && (b!=c) && (a!=c);
	if ( tamgiac && can){
		cout << "YES";
	}else cout << "NO";
	return 0;
}