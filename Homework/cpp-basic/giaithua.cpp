#include <bits/stdc++.h>

using namespace std;

int n; int s = 1;
long long solve(int n) {
	if (n == 0) return 1;
    return (long long)n * solve(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	cout << solve(n) << "\n";
    }

    return 0;
}