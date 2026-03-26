#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end(), greater<int>());
	//for(int &x : a) cout << x << " " ;
	cout << "\n";
	cout << a[k-1];

    return 0;
}