#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    int max_val = -1;
    int max_idx = -1;
    for(int i = 1;i <= n;i++){
    	int a; cin >> a;
    	if(a > max_val){
    		max_val = a;
    		max_idx = i;
    	}
    }
    cout << max_val << "\n" << max_idx << "\n";
    return 0;
}