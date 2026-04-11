#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    vector<long long> a(n);
    for(long long &x : a) cin >> x;

    long long max_sum = a[0] , cur = 0;
	for(int i = 0;i < n;i++){
		cur += a[i];
		max_sum	= max(max_sum , cur);
		if(cur < 0) cur = 0;
	}

	cout << max_sum;

    return 0;
}