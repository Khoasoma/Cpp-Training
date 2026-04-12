#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("COUPON.INP","r",stdin);
    freopen("COUPON.OUT","w",stdout);
    int n;
    long long k, x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0;i < n;i++){
    long long can_use = a[i] / x;
    long long used = min(k, can_use);
    a[i] -= used * x;
    k -= used; 
    }
    sort (a.rbegin(),a.rend());

    long long tong_tien = 0;
    for (int i = 0;i<n;i++){
     if ( k > 0 ){
     a[i] = 0;
     k--;
     }
     tong_tien += a[i];
    }

    cout << tong_tien;
    return 0;
}
