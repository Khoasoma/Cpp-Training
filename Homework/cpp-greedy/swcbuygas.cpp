#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, a ,b;
    cin >>  n >> a >> b;
    long long c1 = n*a;
    long long c2 = (n/2)*b + (n%2)*a;
    cout << min(c1 , c2);

    return 0;
}