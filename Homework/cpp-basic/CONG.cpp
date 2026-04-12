#include <bits/stdc++.h>

using namespace std;

int main(){
	long long m = 0 , n , k;
	freopen("CONG.inp","r",stdin);
	freopen("CONG.out","w",stdout);
	cin >> n >> k;
	while(n > 0){
		int x = n % 10;
		int y = k % 10;
		m = m*10 + ( x + y) % 10;\
		n = n / 10;
		k = k / 10;
	}
	long long ans = 0;
		while(m>0){
			ans = ans * 10 + m % 10;
			m = m / 10;
		}
		cout << ans;
}