#include <bits/stdc++.h>
// #define int long long
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("NBMULODD.inp","r",stdin);
    freopen("NBMULODD.out","w",stdout);
    int n , m;cin >> n >> m;
    int current_sum = 1;
    for(int i = n;i <= m;i++){
    	if(i % 2 != 0){
    		current_sum *= i;
    	}
    }

    	cout << current_sum;

    return 0;
}