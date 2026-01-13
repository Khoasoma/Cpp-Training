#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int cnt[1000002];

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		memset(cnt, 0 , sizeof(cnt));
		for(int i = 0;i < n;i++){
			int x; cin >> x;
			if(x > 0) cnt[x] = 1;
		}
		for(int i = 1;i <= 100000001; i++){
			if (cnt[i] == 0 ){
				cout << i << endl;
				break;
			}
		}

	
			cout << endl;
		}
}

