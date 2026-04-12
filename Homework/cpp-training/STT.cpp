#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int x) {
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen("STT.INP", "r")) {
        freopen("STT.INP", "r", stdin);
        freopen("STT.OUT", "w", stdout);
    }

    int k;
    if (cin >> k) {
        int friendly_count = 0;
        
        for (int m = 1; m <= k; ++m) {
            int n = reverseNumber(m);
            
            if (__gcd(m, n) == 1) {
                friendly_count++;
            }
        }
        
        cout << friendly_count << "\n";
    }

    return 0;
}