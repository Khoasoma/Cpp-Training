#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long sum = 0;
    long long maxfar = -1e18;
    for(int i = 0;i < n;i++){
    	int x;
    	cin >> x;
    	sum += x;

    if (maxfar < sum){
    	maxfar = sum;
    }

    if (sum < 0){
    	sum = 0;
    }
}
    cout << maxfar;
    return 0;
}