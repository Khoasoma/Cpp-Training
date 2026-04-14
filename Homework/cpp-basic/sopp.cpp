#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000001;
int sum_div[MAXN];

void sieve(int r) {
    fill(sum_div, sum_div + r + 1, 1);
    
    for (int i = 2; i <= r / 2; i++) {
        for (int j = 2 * i; j <= r; j += i) {
            sum_div[j] += i;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, r;
    if (freopen("SOPP.INP", "r", stdin)) {
        if (cin >> l >> r) {
            sieve(r);
            
            int cnt = 0;
            for (int i = l; i <= r; i++) {
                if (i > 0 && sum_div[i] > i) {
                    cnt++;
                }
            }
            
            freopen("SOPP.OUT", "w", stdout);
            cout << cnt;
        }
    }
    return 0;
}