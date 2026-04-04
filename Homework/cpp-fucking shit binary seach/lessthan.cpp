#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

   	vector<int> b = a;
   	sort(b.begin(),b.end());

   	for(int i = 0;i < n;i++) {
   		auto it = lower_bound(b.begin(),b.end(),a[i]);

   		cout << distance(b.begin(),it) << " ";
   	}

    return 0;
}