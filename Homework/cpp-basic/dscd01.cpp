#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    int count = 0;
    for(int i = 1;i <= n;i++){
    	if(i % 3 == 0) count++;
    }
    cout << count;
    return 0;
}