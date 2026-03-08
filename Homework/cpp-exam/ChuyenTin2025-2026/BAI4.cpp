#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    vector<ll> b(m + 1, 0);
    for(int i = 1; i <= m;i++) cin >> b[i];

    sort(b.begin() + 1,b.end());

    vector<ll> pref(m + 1,0);
    vector<ll> req(m + 1,0);
    vector<ll> M(m + 1,0);

    for(int i = 1;i <= m;i++){
        pref[i] = pref[i - 1] + b[i];
        req[i] = b[i] - pref[i - 1];
        if ( i == 1 ) M[i] = req[i];
        else M[i] = max(M[i - 1], req[i]);
    }
    for (int i = 0; i < n; i++){
        ll init_a = a[i];

        auto it = upper_bound(M.begin() + 1, M.end(), init_a);
        int k = (it - M.begin()) - 1;
      cout << init_a + pref[k] << (i == n - 1 ? "" : " ");
  }
    return 0;
}