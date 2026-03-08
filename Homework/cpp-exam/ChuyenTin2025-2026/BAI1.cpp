#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> d(n , 0);
    for (int i = 1;i < n;i++){
    	for(int j = i;j < n;j += i){
    		d[j]++;
    	}
    }
    int cnt = 0;
    for (int i = 1; i < n;i++){
    	if (d[i] == k){
    		cnt++;
    	}
    }
    cout << cnt;
    return 0;
}