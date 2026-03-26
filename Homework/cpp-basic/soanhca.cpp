#include <bits/stdc++.h>

using namespace std;

void solve() {
    string n; cin >> n;
    sort(n.begin(),n.end(),greater<char>());
    cout << n << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	solve();
    }

    return 0;
}