#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("AGAME.inp","r",stdin);
	freopen("AGAME.out","w",stdout);

	int x ; cin >> x;
	if(x % 100 == 0){
		cout << x;
	} else cout << x - 100;
}