#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("XOASO.INP","r",stdin);
	freopen("XOASO.OUT","w",stdout);
	int n , w; cin >> n >> w;
	vector<int> a(n);
	int tong = 0;
	for(int i = 0;i<n;i++) {
		cin >> a[i] ;
		tong += a[i];
}
	sort (a.rbegin(),a.rend());
	int so_luong_xoa = 0;

	for (int i = 0; i < n; i++) {
        if (tong <= w) { 
            break;
        }
        tong -= a[i];
        so_luong_xoa++;
    }
    cout << so_luong_xoa;
return 0;
}