#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int max_val = -1e9;

    for(int i = 0;i < n;i++){
    	int x;
    	cin >> x;
    	if( x > max_val ) max_val = x;

    }
    cout << max_val;

    return 0;
}