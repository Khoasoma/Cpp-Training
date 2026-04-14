#include <bits/stdc++.h>

using namespace std;

int main(){
	int n ,d , a ,b ,c; cin >> n >> d;
	freopen("ALIBABA.inp","r",stdin);
	freopen("ALIBABA.out","w",stdout);

	if (n % 3 == 0){
	b = n/3;
	c = d + b;
	a = b - d;
	if(a > 0){
	cout << a << " " << b << " " << c;
	}
	else cout << -1;
	}
	else cout << -1;
}