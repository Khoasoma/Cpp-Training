#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x , q; cin >> n >> x >> q;
    vector<long long> a(n + 1 , 0);

    for(int i = 0 ; i <= n ; ++i){
    	long long val;
    	cin >> val;
    	a[i] = a[i - 1]  + val;
    }

    int cnt = 0;

    for(int i = 0; i<q ; i++ ){
    	int u , v;
    	cin >> u >> v;
    	long long curr_sum = a[v] - a[u - 1];

    	if(curr_sum < x){
    		cnt++;
    	}
    }
    cout << cnt;
    return 0;
}