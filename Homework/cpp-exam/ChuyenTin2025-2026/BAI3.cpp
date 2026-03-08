#include <bits/stdc++.h>

using namespace std;

int sum (long long n) {
    int s = 0;
    while (n > 0) {
    	s += n % 10;
    	n /= 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, Q;
    cin >> n >> Q;
    vector<long long> a(n + 1);
    vector<int> pref(n + 1, 0);

    for(int i = 1;i <=n;i++){
    	cin >> a[i];
    	int s = sum(a[i]);
    	if (a[i] % s == 0){
    		pref[i] = 1;
    	}
    	pref[i] += pref[i - 1];
    }

    while (Q--){
    	int l , r; cin >> l >> r;
    	cout << pref[r] - pref[l - 1] << "\n";
    }
    return 0;
}