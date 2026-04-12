#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("ROBOTCQ.inp","r",stdin);
    freopen("ROBOTCQ.out","w",stdout);
    int n;
    cin >> n;

    vector<vector<long long>> a(4, vector<long long>(n + 1 , 0));

    vector<vector<long long>> f(4, vector<long long>(n + 1 , 0));

    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    for(int j = 1;j <= n;++j){
    	f[1][j] = f[1][j-1] + a[1][j];
    }

    for (int i = 2; i <= 3 ; ++i)
    {
    	for(int j  = 1;j<= n;j++){
    		f[i][j] = max(f[i - 1][j] ,f[i][j - 1]) + a[i][j];
    	}
    }
    cout << f[3][n];

    return 0;
}