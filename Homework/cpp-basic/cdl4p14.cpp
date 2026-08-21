#include <bits/stdc++.h>

using namespace std;

double a , b, c;
void solve(double a, double b, double c) {
	 double p = (a + b + c)/2;
    cout << "Dien tich tam giac: "<<fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p -c ));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    solve(a, b ,c);

    return 0;
}