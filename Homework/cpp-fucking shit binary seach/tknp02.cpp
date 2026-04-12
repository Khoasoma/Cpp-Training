#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    while (k--){
    	int x; cin >> x;
    	auto it = lower_bound(a.begin(), a.end(), x);
    	cout << distance(a.begin(), it) + 1 << "\n" ;
    }


    return 0;
}