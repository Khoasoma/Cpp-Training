#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , q;
	freopen("ASWAP.inp","r",stdin);
	freopen("ASWAP.out","w",stdout);
	cin >> n >> q;
	vector<int> a(n + 1);
	vector<int> pos(n + 1);

	for(int i = 0; i <= n ;i++){
			a[i] = i;
			pos[i] = i;
	}
	while(q--){
		int x; cin >> x;

		int id_x = pos[x];
		int target;

		if(id_x == n ){
			target = id_x - 1;
		} else target = id_x + 1;
	int y = a[target];
	swap(a[id_x], a[target]);

	pos[x] = target;
	pos[y] = id_x;
}
	for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}