#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	int n ; cin >> n;
	vector<long long> a(n + 1), pre(n + 1,0);
	for(int i = 1; i <= n;i++) cin >> a[i];

	for(int i = 1; i <= n;i++) pre[i] = pre[i - 1] + a[i];

	int l , r;
	cin >> l >> r;
	


    return 0;
}