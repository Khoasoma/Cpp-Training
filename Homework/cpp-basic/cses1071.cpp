#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long  y , x;
    cin >> y >> x;

    long long z = max(y , x);
    long long ans = 0;

    if(z % 2 == 0){
    	if(y == z){
    		ans = z*z - x + 1;
    	} else {
    		ans = (z - 1) * (z - 1) + y;
    	}
    }else{
    	if (x == z){
    		ans = z * z - y + 1;
    	} else {
    		ans = (z - 1) * (z - 1) + x;
    	}
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL7878  









;
    int t;
    cin >>t;
    while (t--){
    	solve();
    }

    return 0;
}