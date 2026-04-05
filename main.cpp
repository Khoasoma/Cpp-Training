#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b, ll n) {
    if (a == 0 || b == 0) return 0;
    ll g = gcd(a, b);
    if (a > n / (b / g)) return n + 1; 
    return a * (b / g);
}

int main() {
    freopen("CHIAHET.INP", "r", stdin);
    freopen("CHIAHET.OUT", "w", stdout);

    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll lab = lcm(a, b, n);
    ll lbc = lcm(b, c, n);
    ll lac = lcm(a, c, n);
    ll labc = lcm(lab, c, n);

    ll count_ab = n / lab;
    ll count_bc = n / lbc;
    ll count_ac = n / lac;
    ll count_abc = n / labc;

    ll res = (count_ab - count_abc) + (count_bc - count_abc) + (count_ac - count_abc);
    cout << res << endl;

    return 0;
}