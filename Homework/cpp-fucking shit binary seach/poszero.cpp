#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int count_le = upper_bound(s.begin(), s.end(), '0') - s.begin() ;
    cout << count_le;

    int ans = 0;
    return 0;
}