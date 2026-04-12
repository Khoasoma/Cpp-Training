#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TAMGIAC.INP", "r", stdin);
    freopen("TAMGIAC.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        vector<long long> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end(), greater<long long>());
        bool found = false;
        for (int i = 0; i <  n - 2; i++) {
            if (A[i+ 1] + A[i +2] > A[i]) {
                cout << A[i] << " " << A[i + 1] << " " << A[i + 2] << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}