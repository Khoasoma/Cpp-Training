#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;

    sort(a.begin(),a.end(),greater<long long>());
    for(long long &x : a) cout << x << " ";
    return 0;
}