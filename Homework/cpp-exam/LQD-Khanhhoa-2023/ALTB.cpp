#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n;
    int k;
    int a , b;
    cin >> n >> k;
    for(int a = 1; a <= k; a++){
    	b = k - a;
    	unsigned long long current_val = 1;
    	bool overflow = false;
    	for(int i = 1;i <= b;i++){
    		if(current_val > n / a){
    			overflow = true;
    			break;
    		}
    		current_val *= a;
    	}
    	if( !overflow && current_val == n){
    		cout << a << " " << b;
    		return 0;
    	} 
    }
    cout << "-1";
    return 0;
}