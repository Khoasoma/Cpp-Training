#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
    	cout << "\n";
    	for(int j = 0; j < n;j++)
    		cout << i + j << (j==n-1?"\n":" ");
    }

    return 0;
}