#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    if(n % 400 == 0 || n % 4 == 0 && n % 100 != 0){
    	cout << "Nam nhuan";
    }else cout << "Khong la nam nhuan";

    return 0;
}