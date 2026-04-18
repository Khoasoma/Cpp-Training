#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("EVTRIP.INP","r",stdin);
    freopen("EVTRIP.OUT","w",stdout);
   	long long n, p, d;
    cin >> n >> p >> d;
    int so_lan_sac = 0;
    bool pin = p;
    int pos = p;
    vector<long long> di(n);
    for(long long &x : di) cin >> x;

    for(int i = 0; i < di.size();i++){
        long long khoangcach = di[i] - pos;

        if (khoangcach > p){
            cout << "-1";
            return 0;
        }
        if(pin < khoangcach){
            pin = p;
            so_lan_sac++;
        }
        pin -= khoangcach;
        pos = di[i];
    }
    cout << so_lan_sac;
    return 0;
}