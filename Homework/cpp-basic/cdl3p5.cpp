#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n , tong = 0; cin >> n;
    while (n != 0){
    	tong+=n;
    	n--;
    }
    cout << tong;
    return 0;
}