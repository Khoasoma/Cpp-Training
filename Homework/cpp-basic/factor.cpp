#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 2) return 0; 

    bool isFirst = true; 
    int ans = 1;
    for (long long i = 2; i * i <= n; i++) {
    	if (n % i == 0){
    	int cnt = 0;
        while (n % i == 0) {
            if (!isFirst) cout << "*";
            cout << i;
            isFirst = false;
            cnt++;
            n /= i;
        }
        ans = ans * (cnt + 1);
    }
}
    if (n > 1) {
        if (!isFirst) cout << "*";
        cout << n << endl;
        ans = ans * 2;
    }
    cout << endl;
    cout << ans;
    return 0;
}