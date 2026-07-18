#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    long long tong = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ;i++ ) cin >> a[i];
    for(int j = 0; j < n;j++){
    	if (a[j] > 0){
    		cnt++;
    		tong += a[j];
    	}
    }
    cout << cnt << " " << tong;
    return 0;
}