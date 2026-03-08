#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long a,b; cin >> a >> b;
   if (b == 0) return 0;
 	long long g = gcd(a, b);
   a /=g;
   b /=g;
   cout << a << " " << b;

    return 0;
}