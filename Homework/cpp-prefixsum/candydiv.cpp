#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    vector<long long> a(n);
	long long S = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        S += a[i];
    }
    long long min_diff = -1;

    long long currsum_an = 0;
    for(int k = 0;k < n - 1;k++){
    	currsum_an += a[k];
    	long long diff = abs(2 * currsum_an - S);
    	if( min_diff == -1 || diff < min_diff ) min_diff = diff;
    }
    cout << min_diff;
    return 0;
}