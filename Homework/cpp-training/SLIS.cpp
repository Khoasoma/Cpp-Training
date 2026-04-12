#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("SLIS.inp","r",stdin);
    freopen("SLIS.out","w",stdout);
    int n; cin >> n;
    vector<long long> a(n);
    for(long long &x : a) cin >> x;

    vector<int> f(n , 1);
    vector<long long> s(n);
    for(int i = 0; i < n;i++){
        s[i] = a[i];
    }
    int max_len = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0; j < i ;j++){
            if(a[j]  < a[i]){
                if(f[j] + 1 >  f[i]){
                    f[i] = f[j] + 1;
                    s[i] = s[j] + a[i];
                    } else if (f[j] + 1 == f[i]) {
                    s[i] = max(s[i], s[j] + a[i]);
                }
            }
        }
        max_len = max(max_len, f[i]);
    }
    long long max_sum = 0;
    for(int i = 0 ;i < n;i++){
        if(f[i] == max_len) {
            max_sum = max(max_sum,s[i]);
        }
    }
    cout << max_len << " " << max_sum;
    return 0;
}