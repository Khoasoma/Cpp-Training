#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll ans = 0; // answer
    ll first = 0;

    for(int i = 0;i < n;i++){
    	ll current; cin >> current;

    	if ( current < first ) {ans += (first - current);

    	}else first = current;
}
cout << ans << " ";
    return 0;
}