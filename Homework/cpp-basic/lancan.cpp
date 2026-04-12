#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("LANCAN.INP", "r", stdin);
    freopen("LANCAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                ans += abs(a[1] - a[0]);
            } else if (i == n - 1) {
                ans += abs(a[n - 1] - a[n - 2]);
            } else {
                long long dist_left = abs(a[i] - a[i - 1]);
                long long dist_right = abs(a[i + 1] - a[i]);
                ans += min(dist_left, dist_right);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}