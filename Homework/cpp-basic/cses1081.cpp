#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 7;
int cnt[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int max_val = 0;
    for(int i = 0; i < n; i++){
    	int x;
    	cin >> x;  
    	cnt[x]++;
    	max_val = max(max_val, x);
    }

    for(int g = max_val ; g >= 1; g--){
    	int multi = 0;
    	for(int j = g; j <= max_val; j += g){
    		multi += cnt[j];

    		if ( multi >= 2){
    			cout << g;
    			return 0;
    		}
    	}
    }

    return 0;
}