#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long tong = 0;
    for(int i = 1 ; i <= n ; i++){
    	if(i % 2 != 0) tong+=i;
    }
    cout << tong;

    return 0;
}