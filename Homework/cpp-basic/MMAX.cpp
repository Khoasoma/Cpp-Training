#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<long long> a(n);

    for (long long &x : a) cin >> x;

    sort (a.begin(),a.end());

	long long t2_1 = a[n-1] * a[n-2];
    long long t2_2 = a[0] * a[1];
    long long t3_1 = a[n-1] * a[n-2] * a[n-3];
    long long t3_2 = a[0] * a[1] * a[n-1];
    long long res = max({t2_1, t2_2, t3_1, t3_2});

    cout << res;
    return 0;
}
// </3