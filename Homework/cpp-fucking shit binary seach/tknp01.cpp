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
    	if(binary_search(a.begin(),a.end(), x)) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }


    return 0;
}