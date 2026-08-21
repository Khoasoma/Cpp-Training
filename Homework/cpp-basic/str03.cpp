#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin ,s);

    for(char &c : s) c = tolower(c);
    cout << s;

    return 0;
}