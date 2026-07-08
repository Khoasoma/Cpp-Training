#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    for(int i = 1;i <= n ; i++){
    	if(i % 3 == 0 && i % 5 != 0) cout << i <<" ";
    }

    return 0;
}