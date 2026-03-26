#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    sort(a.begin(),a.end());
	
	int cnt = 1;

	for(int i = 1;i < n;++i){
		if(a[i] != a[i-1]){
			cnt++;
		}
	}
	cout << cnt;
    return 0;
}