#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	freopen("luutru.inp","r",stdin);
	freopen("luutru.out","w",stdout);

	 cin >> n;
	 if( n % 1024 == 0) cout << n / 1024;
	 else n / 1024 + 1
	return 0;
}