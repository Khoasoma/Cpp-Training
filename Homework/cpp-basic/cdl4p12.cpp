#include <bits/stdc++.h>

using namespace std;
double w ; double h;
void solve() {
    cin >> w >> h;
    double tmp = h*h;
    cout << fixed << setprecision(2) <<"Chi so BMI: " <<(w / tmp)*10000;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}