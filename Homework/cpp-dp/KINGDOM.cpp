#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("KINGDOM.INP", "r", stdin);
    freopen("KINGDOM.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<vector<long long>> dp (n + 1 , vector<long long>(3, 0));

    for (int i = 1; i <= n;i++){
    	long long a, b ,c;
    	cin >> a >> b >> c;

    	if (i == 1){
    		dp[i][0] = a;
    		dp[i][1] = b;
    		dp[i][2] = c;
    	} else {
    		dp[i][0] = a + min(dp[i - 1][1],dp[i - 1][2]);
    		dp[i][1] = b + min(dp[i - 1][0],dp[i - 1][2]);
    		dp[i][2] = c + min(dp[i - 1][0],dp[i - 1][1]);

    	}
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]});
    return 0;
}
// https://oj.chuyentinbrvt.online/problem/algi_mockts10_2025_de5_p4