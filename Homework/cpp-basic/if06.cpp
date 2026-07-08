#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0;i <= n; i++){
    	if (i*i == n){
    		cout << "YES";
    		return 0;
    	}
    } cout << "NO";
    return 0;
}