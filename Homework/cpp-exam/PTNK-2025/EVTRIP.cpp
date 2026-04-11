#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	long long n, p, d;
    cin >> n >> p >> d;
    int so_lan_sac = 0;
    bool du_pin = false;
    int pos = p;
    while(n--){
    	int di; cin >> di;

    	if (pos >= di){ pos = di;
    	so_lan_sac++;
    }    	
    if(pos >= d){
    		du_pin = true;
    	 break;
    }
}
    if(du_pin){
    	cout << so_lan_sac;
    } else cout << "-1";
    return 0;
}