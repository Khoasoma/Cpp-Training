#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

long long a, b;
long long ans = 0;

void dfs(long long num) {
    if (num > b) return;

    if (num >= a && num > 10) {
        ans++;
    }


    int digits[] = {1, 3, 7, 9}; 
    for (int d : digits) {
        long long next_num = num * 10 + d;
 
        if (next_num <= b && is_prime(next_num)) {
            dfs(next_num);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("SIEUNT.inp","r",stdin);
    freopen("SIEUNT.out","w",stdout);

    if (cin >> a >> b) {
        dfs(2);
        dfs(3);
        dfs(5);
        dfs(7);

        cout << ans << "\n";
    }

    return 0;
}