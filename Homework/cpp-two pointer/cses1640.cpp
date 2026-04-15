#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> val_to_pos;
    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        long long target = x - a;
        if (val_to_pos.count(target)) {
            cout << val_to_pos[target] << " " << i << endl;
            return 0;
        }
        val_to_pos[a] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}