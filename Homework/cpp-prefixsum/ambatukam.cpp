#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    long long cnt = 0;
    for(int i = 0 ; i < n; i++){	
    	int x; cin >> x;
    	cnt += x;
    	cout << cnt << " ";
    }
    return 0;
}

// can be optimize by using prefix sum , but idk how to use ts
// https://lqdoj.edu.vn/problem/ambatukam