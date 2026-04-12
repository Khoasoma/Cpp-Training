#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n , k; cin >> n >> k;
    long long curr_sum = 0;long long ans = -1e18;
    vector<long long> a(n);
    for(long long &x : a) cin >> x;
    for(int i = 0; i < n;i++){
        curr_sum += a[i];
        if(i >= k)
            curr_sum -= a[i - k];
        if(i >= k - 1)
            ans = max(ans , curr_sum);
    }
    cout << ans;

    return 0;
}