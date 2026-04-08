#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , q;
    cin >> n >> q;

    vector<long long> p(n + 1, 0);

    for(int i = 1; i <= n ; i++ ){
    	long long x;
    	cin >> x;
    	p[i] = p[i - 1] + x;
    }

    while(q--){
    	int a , b;
    	cin >> a >> b;
    	cout << p[b] - p[a - 1] << "\n";
    }


    return 0;
}