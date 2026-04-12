#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::vector<int> v;
    int n = 1;
    while(v.size() < 1000){
    	if(n % 3 != 0 && n % 10 != 3){
    		v.push_back(n);
    	}
    	n++;
    }
    int q , k;
    cin >> q;
    while(q--){
    	cin >> k;
    	cout << v[k-1] << "\n";
    }
    return 0;
}