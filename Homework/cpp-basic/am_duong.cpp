#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n , a ; cin >> n;
	int ans_am = 0;
	int ans_duong = 0;
	for(int i = 0; i < n; i++){ cin >> a;
		if( a < 0){ ans_am ++;
	}
	else if (a > 0) ans_duong++;
}
	cout << ans_am << " " << ans_duong;
}