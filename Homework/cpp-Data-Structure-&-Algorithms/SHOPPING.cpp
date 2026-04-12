#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("SHOPPING.INP", "r", stdin);
    freopen("SHOPPING.OUT", "w", stdout);

    int n, q;
    long long k;
    cin >> n >> q >> k ;

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        pref[i] = pref[i - 1] + (a <= k ? 1 : 0);
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        
        int len = r - l + 1;
        int m = (len + 1) / 2; 

        int count_affordable = pref[r] - pref[l - 1];
        if (count_affordable >= m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
// https://oj.chuyentinbrvt.online/problem/algi_mockts10_2025_de5_p2

// AC