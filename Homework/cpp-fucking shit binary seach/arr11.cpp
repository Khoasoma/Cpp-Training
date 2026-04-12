#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x; cin >> n >> x;
    vector<long long> a(n);
    for (long long &x : a){
    	cin >> x;
    }
    sort(a.begin(),a.end());
    int ans = upper_bound(a.begin(),a.end(),x)
    		- lower_bound(a.begin(),a.end(),x);

    cout << ans;
    return 0;
}