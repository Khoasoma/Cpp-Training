#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a; getline(cin , a);
    string b; getline(cin , b);
    int gap = a.size() - b.size();
    cout << abs(gap);

    return 0;
}